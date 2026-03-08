//challenge02 680615028
#include "fraction.h"
using namespace std;

// Constructors
Fraction::Fraction() {
    num = 0;
    denom = 1;
}

Fraction::Fraction(int n, int d) {
    num = n;
    denom = d;
}

// Accessors
int Fraction::getNum() const {
    return num;
}

int Fraction::getDenom() const {
    return denom;
}

// Mutators
void Fraction::setNum(int n) {
    num = n;
}

void Fraction::setDenom(int d) {
    denom = d;
}

// Arithmetic
Fraction Fraction::operator+(const Fraction& other) const {
    int n = num * other.denom + other.num * denom;
    int d = denom * other.denom;
    return Fraction(n, d);
}

Fraction Fraction::operator-(const Fraction& other) const {
    int n = num * other.denom - other.num * denom;
    int d = denom * other.denom;
    return Fraction(n, d);
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(num * other.num, denom * other.denom);
}

Fraction Fraction::operator/(const Fraction& other) const {
    return Fraction(num * other.denom, denom * other.num);
}

// Prefix ++
Fraction& Fraction::operator++() {
    num += denom;
    return *this;
}

// Postfix ++
Fraction Fraction::operator++(int) {
    Fraction temp = *this;
    num += denom;
    return temp;
}

// Prefix --
Fraction& Fraction::operator--() {
    num -= denom;
    return *this;
}

// Postfix --
Fraction Fraction::operator--(int) {
    Fraction temp = *this;
    num -= denom;
    return temp;
}

// Comparison
bool Fraction::operator==(const Fraction& other) const {
    return num * other.denom == other.num * denom;
}

bool Fraction::operator!=(const Fraction& other) const {
    return !(*this == other);
}

bool Fraction::operator<(const Fraction& other) const {
    return num * other.denom < other.num * denom;
}

bool Fraction::operator>(const Fraction& other) const {
    return num * other.denom > other.num * denom;
}

bool Fraction::operator<=(const Fraction& other) const {
    return !(*this > other);
}

bool Fraction::operator>=(const Fraction& other) const {
    return !(*this < other);
}

// Output
ostream& operator<<(ostream& os, const Fraction& f) {
    os << f.num << "/" << f.denom;
    return os;
}