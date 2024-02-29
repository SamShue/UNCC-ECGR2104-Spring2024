#include "complex.h"

Complex::Complex(double real, double imag){
    this->real = real;
    this->imag = imag;
}

void Complex::print(){
    std::cout << real << " + " << imag << "i" << std::endl;
}

Complex Complex::add(Complex rhs){
    Complex r(0.0, 0.0);
    r.real = this->real + rhs.real;
    r.imag = this->imag + rhs.imag;
    return r;
}

Complex Complex::operator+(Complex rhs){
    Complex r(0.0, 0.0);
    r.real = this->real + rhs.real;
    r.imag = this->imag + rhs.imag;
    return r;
}

Complex Complex::operator+(int rhs){
    return Complex(this->real + rhs, this->imag);
}

void Complex::operator+=(Complex rhs){
    this->real = this->real + rhs.real;
    this->imag = this->imag + rhs.imag;
}

Complex Complex::operator-(Complex rhs){
    return Complex(this->real - rhs.real, this->imag - rhs.imag);
}

bool Complex::operator==(Complex rhs){
    return (this->real == rhs.real) && (this->imag == rhs.imag);
}