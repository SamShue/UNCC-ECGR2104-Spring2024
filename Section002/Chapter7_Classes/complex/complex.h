#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

struct Complex {
    double real;
    double imag;
    
    Complex(double real, double imag);
    
    void print() const;
    
    Complex add(Complex c);
    Complex operator+(Complex c);
    Complex operator+(const int& c) const;
    Complex operator-(const Complex& c) const;
    Complex operator-(const int& c) const;
    void operator+=(const Complex& c);
};

#endif