#include <iostream>

using std::cout;
using std::endl;

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction(int num, int denom) : numerator{ num }, denominator{ denom } {
        std::cout << "Creating Fraction object with address: " << this << std::endl;
    }
    Fraction(const Fraction& other) : numerator{ other.numerator },
        denominator{ other.denominator } {
        std::cout << "Copy Fraction object with address: " << this << std::endl;
    }
    const Fraction& print() const {  // const Fraction & print(Fraction * const this) const
        std::cout << numerator << "/" << denominator << " address: " << this << std::endl;
        return *this;
    }
    Fraction add(const Fraction& other) const {
        if (denominator == other.denominator) {
            return Fraction(numerator + other.numerator, denominator);
        }
    }

    Fraction minus(const Fraction& other) const {
        if (denominator == other.denominator) {
            return Fraction(numerator - other.numerator, denominator);
        }
    }
    // operator+ operator+= are different
    Fraction operator-() const {
        return Fraction(-numerator, denominator);
    }
};

Fraction operator-(const Fraction& one, const Fraction& two) {
    return one.minus(two);
};

int main()
{
    Fraction f1(2, 3);
    Fraction f2(2, 3);

    Fraction f3(f1 - f2);

    f3.print();
};
