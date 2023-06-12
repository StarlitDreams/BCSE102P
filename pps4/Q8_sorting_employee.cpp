#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

struct Employee {
    std::string name;
    int age;
    float salary;
};

void printEmployees(const std::vector<Employee>& employees, const std::string& title) {
    std::cout << title << std::endl;
    for (const auto& e : employees) {
        std::cout << "- Name: " << e.name << ", Age: " << e.age << ", Salary: " << e.salary << std::endl;
    }
}

std::vector<Employee> parseEmployees() {
    std::string line;
    std::vector<Employee> employees;

    while(std::getline(std::cin, line)) {
        if(line.empty())
            break;

        std::istringstream ss(line);
        Employee e;
        if (ss.get() != '{' || ss.get() != ' ' || ss.get() != '"' || !std::getline(ss, e.name, '"') || ss.get() != ',' || ss.get() != ' ' || !(ss >> e.age) || ss.get() != ',' || ss.get() != ' ' || !(ss >> e.salary) || ss.get() != ' ' || ss.get() != '}')
            throw std::invalid_argument("Invalid input");

        employees.push_back(e);
    }
    return employees;
}

int main() {
    try {
        std::vector<Employee> employees = parseEmployees();

        printEmployees(employees, "Employee records before sorting:");

        std::sort(employees.begin(), employees.end(), [](const Employee& a, const Employee& b) {
            return a.name < b.name;
        });

        printEmployees(employees, "Employee records after sorting:");
    } catch (std::exception& e) {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    return 0;
}
