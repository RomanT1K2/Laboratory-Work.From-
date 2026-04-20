#include "Calculator.cpp"
int main()
{
    Calculator calc;
    double num1, num2;
    int choice;

    cout << "=== Welcome to Team Calculator ===" << endl;
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide" << endl;
    cout << "Select operation: ";
    if (!(cin >> choice)) {
        cout << "Error: You must enter a numeric value!" << endl;
        return 0;
    }
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "YOU ENTER A= " << num1 << " and B= " << num2 << endl;

    if (choice == 1)
    {
        cout << "Result: " << calc.add(num1, num2) << endl;
    }
    else if (choice == 2)
    {
        cout << "Result: " << calc.subtract(num1, num2) << endl;
    }
    else if (choice == 3)
    {
        cout << "Result: " << calc.multiply(num1, num2) << endl;
    }
    else if (choice == 4)
    {
        cout << "Result: " << calc.divide(num1, num2) << endl;
    }

    return 0;
}
