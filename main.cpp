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
        default:
            cerr << "Error: Invaild operation!";
            return 1;
    }
    cout << "Result of " << operation_name << " is " << result << endl;
    return 0;
}
