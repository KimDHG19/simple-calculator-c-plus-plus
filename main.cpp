# include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    //ask user which operator to use and save it as op
    cout << "Enter operator: +, -, *, /:  ";
    cin >> op;

    //ask user to input two numbers and save them as num1 and num2
    cout << "Enter two operands:  ";
    cin >> num1 >> num2;

    switch(op) {
        //choose which calculation to complete based on operator chosen by user via input
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}