# include <iostream>
using namespace std;
char start_calculation;
int calculation () {
    char op;
    float num1, num2;

    //ask user which operator to use and save it as op
    cout << "Enter operator: +, -, *, /:  "<<endl;
    cin >> op;

    //ask user to input two numbers and save them as num1 and num2
    cout << "Enter two operands:  "<<endl;
    cin >> num1 >> num2;

    switch(op) {
        //choose which calculation to complete based on operator chosen by user via input
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 <<endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 <<endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 <<endl;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 <<endl;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct"<<endl;
            break;
    }
    cout << "Do you want to do another operation? (Y/N)"<<endl;
    cin >> start_calculation;
    return start_calculation;
}

int main() {
    calculation();

    if (start_calculation == (char)'Y' || start_calculation == (char)'y'){
        calculation();
    }
    else {
        return 0;
    }
    return 0;
}