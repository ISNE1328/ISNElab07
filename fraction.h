#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    int num;
    int denom;

public:
    // Constructors
    Fraction();
    Fraction(int n, int d);

    // Accessors
    int getNum() const;
    int getDenom() const;

    // Mutators
    void setNum(int n);
    void setDenom(int d);

    // Arithmetic Operators
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    // Increment / Decrement
    Fraction& operator++();     // prefix
    Fraction operator++(int);   // postfix
    Fraction& operator--();     // prefix
    Fraction operator--(int);   // postfix

    // Comparison
    bool operator==(const Fraction& other) const;
    bool operator!=(const Fraction& other) const;
    bool operator<(const Fraction& other) const;
    bool operator>(const Fraction& other) const;
    bool operator<=(const Fraction& other) const;
    bool operator>=(const Fraction& other) const;

    // Output
    friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
};

#endif