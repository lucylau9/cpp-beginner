#include <iostream>
#include <string>

int main() {

    int age = 19;
    int *pAge = &age; // memory address to age
    double gpa = 2.7;
    double *pGpa = &gpa;
    std::string name = "Lucy";
    std::string *pName = &name;

    std::cout << *pAge; // * dereferencing pointer

    return 0;
}