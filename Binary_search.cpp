#include<iostream>
#include<algorithm>

/*
Binary search using STL
*/

using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 5;

    if(binary_search(arr,arr+n,key))
    {
        cout<<"Element is present in the array"<<endl;
    }
    else
    {
        cout<<"Element is not present in the array"<<endl;
    }

    return 0;
}