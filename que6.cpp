
//Write a program to find the multiplication values and the cubic values using inline function
#include <iostream>
using namespace std;
// Inline function to calculate the multiplication of a number
inline double multiply(double num, double multiplier) {
    return num * multiplier;
}

inline double cubic(double num) {
    return num * num * num;
}

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;

    double multiplier;
    cout << "Enter a multiplier: ";
    cin >> multiplier;

    // Calculate and display the multiplication value
    double multiplicationResult = multiply(num, multiplier);
    cout << "Multiplication result: " << multiplicationResult << endl;

    // Calculate and display the cubic value
    double cubicResult = cubic(num);
    cout << "Cubic result: " << cubicResult << endl;

    return 0;
}
