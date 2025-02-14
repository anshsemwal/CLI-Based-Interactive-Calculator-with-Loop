#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;

    do {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;
        cout << "Enter second number: ";
        cin >> num2;

        switch(op) {
            case '+': cout << "Result: " << num1 + num2 << endl; break;
            case '-': cout << "Result: " << num1 - num2 << endl; break;
            case '*': cout << "Result: " << num1 * num2 << endl; break;
            case '/': num2 != 0 ? cout << "Result: " << num1 / num2 << endl : cout << "Error! Division by zero.\n"; break;
            default: cout << "Invalid operator!\n";
        }
        
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
