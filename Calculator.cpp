#include <iostream>
using namespace std;

class Calculator {
public:
    double subtract(double a, double b) {
        cout << "[LOG]: Subtracting " << b << " from " << a << endl;
        double result = a - b;
        if (result < 0) {
            cout << "[WARNING]: Result is negative: " << result << endl;
        }
        return result;
    }

    double add(double a, double b) {
        cout << "[LOG]: Performing addition of " << a << " and " << b << endl;
        double result = a + b;
        return result;
    }

    double multiply(double a, double b) {
        return 0; 
    }

    double divide(double a, double b) {
        return 0; 
    }
};
