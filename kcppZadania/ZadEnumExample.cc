#include <iostream>


using namespace std;

enum class Month {
    January = 1, February, March, April, May, June,
    July, August, September, October, November, December
};

int main() {

    Month month = Month::June;

    switch (month) {
        case Month::January: cout << "January\n"; break;
        case Month::February: cout << "February\n"; break;
        case Month::March: cout << "March\n"; break;
        case Month::April: cout << "April\n"; break;
        case Month::May: cout << "May\n"; break;
        case Month::June: cout << "June\n"; break;
        case Month::July: cout << "July\n"; break;
        case Month::August: cout << "August\n"; break;
        case Month::September: cout << "September\n"; break;
        case Month::October: cout << "October\n"; break;
        case Month::November: cout << "November\n"; break;
        case Month::December: cout << "December\n"; break;
    }

    cout << "month number: " << static_cast<int>(month) << '\n';

    return 0;
}