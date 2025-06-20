#include <iostream>
#include <string>

using namespace std;

void welcomeMessage() {
    cout << "=== Simple C++ Calculator ===" << endl;
    cout << "Supports: +, -, *, /" << endl;
}

int main() {
    welcomeMessage();
    double num1, num2;
    char operation;

    cout << "Enter first number: "; cin >> num1;

    cout << "Enter operation (+, -, *, /)"; cin >> operation;

    cout << "Enter second number: "; cin >> num2;

    cout << "You entered: " << num1 << " " << operation << " " << num2 << endl;
    return 0;
}