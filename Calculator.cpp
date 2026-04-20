#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        cout << "[LOG]: Performing addition of " << a << " and " << b << endl;
        double result = a + b;
        return result;
    }

    double subtract(double a, double b) {
    cout << "[LOG]: Subtracting " << b << " from " << a << endl;
    double result = a - b;
    if (result < 0) {
        cout << "[WARNING]: Result is negative!: " << result << endl;
    }
    return result;
    }

    double multiply(double a, double b) {
         cout << "[LOG]: Multiplying " << a << " by " << b << endl;
    if (a == 0 || b == 0) {
        cout << "[INFO]: One of the operands is zero, result will be 0" << endl;
    }
    return a * b;
    }

    double divide(double a, double b) {
       cout << "[LOG]: Attempting to divide " << a << " by " << b << endl;
    if (b == 0) {
        cerr << "[ERROR]: Division by zero is undefined!" << endl;
        return 0;
    }
    return a / b;
    }
};
