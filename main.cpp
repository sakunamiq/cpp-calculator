#include <iostream>
#include <string>

using namespace std;

void welcomeMessage() {
    cout << "=== Simple C++ Calculator ===" << endl;
    cout << "Supports: +, -, *, /" << endl;
}

int main() {
    welcomeMessage();
    double num1, num2, result;
    char operation;
    string operation_name;

    cout << "Enter first number: "; cin >> num1;
    cout << "Enter operation (+, -, *, /): "; cin >> operation;
    cout << "Enter second number: "; cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            operation_name = "addition";
            break;
        case '-':
            result = num1 - num2;
            operation_name = "subtraction";
            break;
        case '*':
            result = num1 * num2;
            operation_name = "multiplication";
            break;
        case '/':
            if (num2==0) {
                cerr << "Error: Division by zero!" << endl;
                return 1;
            }
            result = num1 / num2;
            operation_name = "division";
            break;
        default:
            cerr << "Error: Invalid operation!" << endl;
            return 1;
    }
    cout << "Result of " << operation_name << ": " << result << endl;
    return 0;
}