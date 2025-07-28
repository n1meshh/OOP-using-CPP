
// // Q5) Simple calculator using the Switch-Case statement

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    cout << "Enter first number: " << endl;
    cin >> num1;

    cout << "Enter operator (+, -, *, /): " << endl;
    cin >> op;

    cout << "Enter second number: " << endl;
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Division by zero not allowed." << endl;
            break;
        default:
            cout << "Invalid operator." << endl;
    }

    return 0;
}
