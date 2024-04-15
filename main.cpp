#include <bits/stdc++.h>
using namespace std;

struct Date {
    int day, month, year;

    bool isValidDate() const {
        if (month < 1 || month > 12 || day < 1 || year < 0)
            return false;

        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                return day <= 29;
            } else {
                return day <= 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return day <= 30;
        } else {
            return day <= 31;
        }
    }

    void newDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

int main() {
    vector<Date> dates;
    int day, month, year;

    cout << "Enter day, month, year first date(use space): ";
    cin >> day >> month >> year;
}
