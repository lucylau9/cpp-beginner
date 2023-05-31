#include <iostream>

using namespace std;

void sayHi(string name, int age) {
    cout << "Hello " << name << ", you are " << age << " years old.";
}

int main() {

    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    sayHi(name, age);

    return 0;
}