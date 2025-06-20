#include <iostream>
#include <string>

using namespace std;

void welcomeMessage() {
    cout << "=== Simple C++ Calculator ===" << endl;
    cout << "Supports: +, -, *, /" << endl;
}

int main() {
    welcomeMessage();

    cout << "Calculator is ready!" << endl;

    return 0;
}