#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    double a, b;
    char mark;

    cout << "Enter expression (a...b): ";
    cin >> a >> mark >> b;
    if (b == 0 && mark == '/') {
        cout << "Error: division by zero\n";
        return 0;
	}

    if (mark == '+') {
        cout << "Result: " << add(a, b);
    }
    else if (mark == '-') {
        cout << "Result: " << subtract(a, b);
    }
    else if (mark == '*') {
        cout << "Result: " << multiply(a, b);
    }
    else if (mark == '/') {
        cout << "Result: " << divide(a, b);
    }
    else {
        cout << "Unsupported operation";
    }

    
    return 0;
}
