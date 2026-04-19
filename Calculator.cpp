#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

int main() {
    double a, b;
    char op;

    cout << "Enter expression (a + b): ";
    cin >> a >> op >> b;

    if (op == '+') {
        cout << "Result: " << add(a, b);
    }
    else if (op == '-') {
        cout << "Result: " << subtract(a, b);
    }
    else {
        cout << "Unsupported operation";
    }

    return 0;
}