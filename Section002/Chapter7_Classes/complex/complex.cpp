#include "complex.h"

Complex::Complex(double real, double imag){
    this->real = real;
    this->imag = imag;
}

void Complex::print() const {
    std::cout << real << " + " << imag << "i" << std::endl;
}

Complex Complex::add(Complex c){
    Complex r(0.0, 0.0);
    r.real = this->real + c.real;
    r.imag = this->imag + c.imag;
    return r;
}

Complex Complex::operator+(Complex c){
    Complex r(0.0, 0.0);
    r.real = real + c.real;
    r.imag = imag + c.imag;
    return r;
}

Complex Complex::operator+(const int& c) const {
    return Complex(this->real + c, this->imag);
}

Complex Complex::operator-(const Complex& c) const {
    return Complex(this->real - c.real, this->imag - c.imag);
}

Complex Complex::operator-(const int& c) const {
    return Complex(this->real - c, this->imag);
}

void Complex::operator+=(const Complex& c) {
    this->real = this->real + c.real;
    this->imag = this->imag + c.imag;
}