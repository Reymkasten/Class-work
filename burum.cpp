#include <iostream>

class Date {
    int day;
    int month;
    int year;

public:
    Date(int day, int month, int year) : day{ day }, month{ month }, year{ year } {}
    Date(int year) : Date(1, 1, year) {}

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }
};