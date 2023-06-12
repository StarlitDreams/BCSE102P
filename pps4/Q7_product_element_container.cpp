#include <iostream>
#include <vector>
#include <numeric> // for std::accumulate
#include <algorithm>
#include <sstream>
#include <string>
#include <iomanip> // for std::setprecision

template<typename T>
T calculateProduct(std::vector<T> container) {
    if(container.empty()) {
        throw std::invalid_argument("Empty container");
    }
    T product = std::accumulate(container.begin(), container.end(), T(1), std::multiplies<T>());
    return product;
}

bool isInteger(std::string str) {
    return str.find_first_not_of("0123456789") == std::string::npos;
}

bool isDouble(std::string str) {
    std::size_t decimal = str.find('.');
    return decimal != std::string::npos && str.substr(decimal+1).find_first_not_of("0123456789") == std::string::npos;
}

bool isLong(std::string str) {
    return str.back() == 'L' && str.substr(0, str.size()-1).find_first_not_of("0123456789") == std::string::npos;
}

void parseAndCalculateProduct(std::string input, std::string type, std::string &result) {
    std::replace(input.begin(), input.end(), ',', ' ');
    std::istringstream stream(input);
    std::string numAsString;

    if (type == "int") {
        std::vector<int> data;
        while (stream >> numAsString) {
            if (!isInteger(numAsString)) {
                throw std::invalid_argument("Wrong input");
            }
            int num = std::stoi(numAsString);
            data.push_back(num);
        }
        result += "Product of elements in v1: " + std::to_string(calculateProduct(data)) + "\n";
    } else if (type == "double") {
        std::vector<double> data;
        while (stream >> numAsString) {
            if (!isDouble(numAsString)) {
                throw std::invalid_argument("Wrong input");
            }
            double num = std::stod(numAsString);
            data.push_back(num);
        }
        std::ostringstream ss;
        ss << std::fixed << std::setprecision(3) << calculateProduct(data);
        result += "Product of elements in l1: " + ss.str() + "\n";
    } else if (type == "long") {
        std::vector<long> data;
        while (stream >> numAsString) {
            if (!isLong(numAsString)) {
                throw std::invalid_argument("Wrong input");
            }
            long num = std::stol(numAsString.substr(0, numAsString.size()-1));
            data.push_back(num);
        }
        result += "Product of elements in a1: " + std::to_string(calculateProduct(data)) + "\n";
    } else {
        throw std::invalid_argument("Wrong input");
    }
}

int main() {
    std::string result;
    try {
        std::string input;
        std::getline(std::cin, input);
        parseAndCalculateProduct(input, "int", result);

        std::getline(std::cin, input);
        parseAndCalculateProduct(input, "double", result);

        std::getline(std::cin, input);
        parseAndCalculateProduct(input, "long", result);
    }
    catch (std::invalid_argument& e) {
        std::cout << "Wrong input\n";
        return 0;
    }

    std::cout << result;

    return 0;
}
    