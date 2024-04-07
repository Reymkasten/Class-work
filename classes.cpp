#include <iostream>

class Date {   //Продайте свою душу щоб далі читати
private:
    int day;
    int month;
    int year;

public:
    
    Date(int _day, int _month, int _year) : day(_day), month(_month), year(_year) {}

   
    Date(const Date& other) : day(other.day), month(other.month), year(other.year) {}

    
    Date getNewer(const Date& other) const {
        if (year > other.year)
            return *this;
        else if (year < other.year)
            return other;
        else {
            if (month > other.month)
                return *this;
            else if (month < other.month)
                return other;
            else {
                if (day > other.day)
                    return *this;
                else if (day < other.day)
                    return other;
                else
                    std::cout << "it is equal" << std::endl;
            }
        }
    }

    
    void print() const {
        std::cout << day << "." << month << "." << year << std::endl;;
    }
};

int main() {
    
    Date firstDate(7, 4, 2024);
    Date secondDate(15, 8, 2023);

    std::cout << "First date: ";
    firstDate.print();
    std::cout << std::endl;

    std::cout << "Second date: ";
    secondDate.print();
    std::cout << std::endl;

    Date newerDate = firstDate.getNewer(secondDate);

    std::cout << "New date: ";
    newerDate.print();
    std::cout << std::endl;

    return 0;
}