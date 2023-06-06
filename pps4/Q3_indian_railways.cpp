/*
Three are three types of employees in Indian railways. They are regular, daily wages and consolidated employees. Gross Pay for the employees is calculated as follows using function overloading:

·  Regular employees: Gross salary = Basic + HRA+ DA

·  Daily wages – Wages per hour * Number of hours

·  Consolidated – fixed amount

Input: Components for calculating gross pay

Output: Gross pay                                                                               

 


For example:

Input	Result
20000
9287
2850
100
7			
20000
Regular employees = 32137	
Daily wages = 700
Consolidated = 20000
22000
10287
2750
120
7			
20000
Regular employees = 35037	
Daily wages = 840
Consolidated = 20000
2000
18287
2750
120
7			
20000
Invalid Pay Scale
*/
#include <iostream>

// Gross pay for regular employees
int grossPay(int basic, int hra, int da) {
    return basic + hra + da;
}

// Gross pay for daily wages employees
int grossPay(int wagePerHour, int hours) {
    return wagePerHour * hours;
}

// Gross pay for consolidated employees
int grossPay(int fixedAmount) {
    return fixedAmount;
}

int main() {
    int basic, hra, da, wagePerHour, hours, fixedAmount;

    // Input for regular employees
    std::cin >> basic >> hra >> da;

    // Input for daily wages employees
    std::cin >> wagePerHour >> hours;

    // Input for consolidated employees
    std::cin >> fixedAmount;

    if(basic < hra || basic < da) {
        std::cout << "Invalid Pay Scale" << std::endl;
        return 0;
    }
    
    int regularPay = grossPay(basic, hra, da);
    std::cout << "Regular employees = " << regularPay <<"\\t"<< std::endl;


    int dailyWages = grossPay(wagePerHour, hours);
    std::cout << "Daily wages = " << dailyWages << std::endl;


    int consolidated = grossPay(fixedAmount);
    std::cout << "Consolidated = " << consolidated << std::endl;

    return 0;
}
