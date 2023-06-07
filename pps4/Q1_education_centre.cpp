/*
An education centre runs several batches for various courses in a day. Due to the limited number of resources, they want to finalize the minimum number of class rooms needed to run the classes so that no batch of students wait.

Given the start time and end time of all batches, design a system that finds the minimum number of class rooms required for the education centre. Your system should overload the appropriate operators (wherever if possible).

Problem Input: List of start time and end time

Problem Output: Minimum number of classrooms required.  
For example:

Input	Result
lectures[][]={{0, 5},{1, 2},{1, 10}} 
3
lectures[][]={{0, 5},{1, 2},{6, 10}} 
2
*/
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <sstream>

using namespace std;

struct Interval{
    int start;
    int end;
};

bool compareInterval(Interval i1, Interval i2) { 
    return (i1.start < i2.start); 
} 

int minClassrooms(vector<Interval>& intervals){
    // base case: no intervals
    if(intervals.size() == 0) return 0;

    // sort intervals by start time
    sort(intervals.begin(), intervals.end(), compareInterval);

    // priority queue to hold end times
    priority_queue<int, vector<int>, greater<int>> endTimes;

    // start with first class in one room
    endTimes.push(intervals[0].end);

    // assign classrooms to rest of the classes
    for(size_t i=1; i<intervals.size(); i++){
        // if the room due to free earliest is free when this class starts, use that room
        if(intervals[i].start >= endTimes.top()){
            endTimes.pop();
        }
        // need a new room
        endTimes.push(intervals[i].end);
    }

    return endTimes.size();
}

vector<Interval> parseLectures(string s) {
    vector<Interval> lectures;

    // Remove the "lectures[][]=" part
    size_t pos = s.find("=");
    if (pos != string::npos) {
        s.erase(0, pos+1);
    }

    // Remove the outer {} brackets
    if (!s.empty() && s.front() == '{') s.erase(s.begin());
    if (!s.empty() && s.back() == '}') s.erase(s.end()-1);

    pos = 0;
    while ((pos = s.find("},{")) != string::npos) {
        string token = s.substr(0, pos);
        stringstream ss(token);
        Interval interval;
        ss >> interval.start;
        ss.ignore(2); // ignore ', '
        ss >> interval.end;
        lectures.push_back(interval);
        s.erase(0, pos + 3); // +3 to remove '},{'
    }
    stringstream ss(s);
    Interval interval;
    ss >> interval.start;
    ss.ignore(2); // ignore ', '
    ss >> interval.end;
    lectures.push_back(interval);
    return lectures;
}

int main(){
    string input{};
    getline(cin, input);
    vector<Interval> lectures = parseLectures(input);
    cout << minClassrooms(lectures) << endl;

    return 0;
}
     