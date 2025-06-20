#include <iostream>
#include <string>

using namespace std;

void welcomeMessage() {
    cout << "Welcome to simple C++ calculator" << endl;
}

int main() {
    double num1, num2, result;
    char choice;
    string operation_name;
    welcomeMessage();
    cout << "Enter your first number: "; cin >> num1;
    cout << "Enter your second number: "; cin >> num2;
    cout << "Enter your operation (+, -, *, /): "; cin >> choice;
    switch (choice) {
        case '+':
            result = num1 + num2;
            operation_name = "addition";
            break;
        case '-':
            result = num1 - num2;
            operation_name = "subtraction";
            break;
        // branch add-multiply
        case '*':
            result = num1 * num2;
            operation_name = "multiply";
            break;
        // branch add-division
        case '/':
            if (num2 == 0) {
                cerr << "Error: Division by zero!" << endl;
                return 1;
            }
            else {
                result = num1 / num2;
                operation_name = "division";
            }
            break;
        default:
            cerr << "Error: Invalid operation!";
            return 1;
    }
    cout << "Result of " << operation_name << " is " << result << endl;
    return 0;
}
