#include <iostream>

using namespace std;

double cube(double x) {
    return x * x * x;
}

int getMax(int x, int y) {
    
    if (x > y) {
        return x;
    } else {
        return y;
    }

}

int main() {

    /* int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << n << " cubed is " << cube(n); */

    int x, y;

    cout << "Enter a number: ";
    cin >> x;

    cout << "Enter another number: ";
    cin >> y;

    cout << "The bigger number is " << getMax(x, y);

    return 0;
}