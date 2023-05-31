#include <iostream>

std::string getDay(int n) {
    std::string dayName;

    switch(n) {
    case 0:
        dayName = "Sunday";
        break;
    case 1:
        dayName = "Monday";
        break;
    case 2:
        dayName = "Tuesday";
        break;
    case 3:
        dayName = "Wednesday";
        break;
    case 4:
        dayName = "Thursday";
        break;
    case 5:
        dayName = "Friday";
        break;
    case 6:
        dayName = "Saturday";
        break;
    default:
        dayName = "Invalid";
        break;

    }

    return dayName;
}

int main() {
    int dayNum;

    std::cout << "Enter day number: ";
    std::cin >> dayNum;

    std::cout << getDay(dayNum);

    return 0;
}