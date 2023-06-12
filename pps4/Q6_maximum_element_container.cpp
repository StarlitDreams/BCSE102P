#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <iomanip> // for std::setprecision

template<typename T>
T findMax(std::vector<T> container) {
    if(container.empty()) {
        throw std::invalid_argument("Empty container");
    }
    T maxElement = *std::max_element(container.begin(), container.end());
    return maxElement;
}

void parseAndFindMax(std::string input, std::string type, std::string &result) {
    std::replace(input.begin(), input.end(), ',', ' ');
    input.erase(std::remove(input.begin(), input.end(), '{'), input.end());
    input.erase(std::remove(input.begin(), input.end(), '}'), input.end());
    input.erase(std::remove(input.begin(), input.end(), 'L'), input.end());

    std::istringstream stream(input);

    if (type == "int") {
        std::vector<int> data;
        int num;
        while (stream >> num) {
            data.push_back(num);
        }
        if(!stream.eof()) // check if the stream is fully consumed
            throw std::invalid_argument("Wrong input");
        result += "Max element in v1: " + std::to_string(findMax(data)) + "\n";
    } else if (type == "double") {
        std::vector<double> data;
        double num;
        while (stream >> num) {
            data.push_back(num);
        }
        if(!stream.eof()) // check if the stream is fully consumed
            throw std::invalid_argument("Wrong input");
        std::ostringstream ss;
        ss << std::fixed << std::setprecision(1) << findMax(data);
        result += "Max element in l1: " + ss.str() + "\n";
    } else if (type == "long") {
        std::vector<long> data;
        long num;
        while (stream >> num) {
            data.push_back(num);
        }
        if(!stream.eof()) // check if the stream is fully consumed
            throw std::invalid_argument("Wrong input");
        result += "Max element in a1: " + std::to_string(findMax(data)) + "\n";
    } else {
        throw std::invalid_argument("Wrong input");
    }
}

int main() {
    std::string result;
    try {
        std::string input;
        std::getline(std::cin, input);
        parseAndFindMax(input, "int", result);

        std::getline(std::cin, input);
        parseAndFindMax(input, "double", result);

        std::getline(std::cin, input);
        parseAndFindMax(input, "long", result);
    }
    catch (std::invalid_argument& e) {
        std::cout << "Wrong input\n";
        return 0;
    }

    std::cout << result;

    return 0;
}
