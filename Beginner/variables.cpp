#include <iostream>
using namespace std;

int main() {
    int myNum = 15;
    double myFloat = 5.99;
    char myChar = 'E';
    string myString = "Hello";
    bool myBoolean = true;

    cout << myNum << "\n";

    int myAge = 20;
    cout << "I am " << myAge << " years old. \n";

    int x = 5, y = 6, z = 50;
    int sum = x + y;
    int a, b, c;
    a = b = c = 50;

    cout << sum << "\n";
    cout << x + y + z << "\n";
    cout << a + b + c;

    const int myConst = 16;
    // myConst = 10;

    const int minutesPerHour = 60;
    const float PI = 3.14;

    return 0;
}