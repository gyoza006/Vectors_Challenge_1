#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Global const arrays
const string DAYS[7]   = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
const string MONTHS[12] = {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};

int main() {
    int choice;
    do {
        cout << "\nMenu:\n"
             << "1. Get Day Name by Number (1-7)\n"
             << "2. Get Month Name by Number (1-12)\n"
             << "3. Quit\n"
             << "Enter choice: ";
        cin >> choice;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
            case 1: {
                int day;
                cout << "Enter a number (1-7): ";
                cin >> day;
                if (!cin.fail() && day >= 1 && day <= 7) {
                    cout << "Day: " << DAYS[day - 1] << endl;
                } else {
                    cout << "Invalid Day.\n";
                }
                break;
            }
            case 2: {
                int month;
                cout << "Enter a number (1-12): ";
                cin >> month;
                if (!cin.fail() && month >= 1 && month <= 12) {
                    cout << "Month: " << MONTHS[month - 1] << endl;
                } else {
                    cout << "Invalid Month.\n";
                }
                break;
            }
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid menu choice.\n";
        }
    } while (choice != 3);

    return 0;
}
