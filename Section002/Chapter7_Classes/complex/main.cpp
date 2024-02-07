#include <iostream>

using namespace std;

struct Complex {
    double real;
    double imag;
    
    Complex(double real, double imag){
        this->real = real;
        this->imag = imag;
    }
    
    void print(){
        cout << real << " + " << imag << "i" << endl;
    }
    
    Complex add(Complex c){
        Complex r(0.0, 0.0);
        r.real = this->real + c.real;
        r.imag = this->imag + c.imag;
        return r;
    }
    
    Complex operator+(Complex c){
        Complex r(0.0, 0.0);
        r.real = this->real + c.real;
        r.imag = this->imag + c.imag;
        return r;
    }
    
    Complex operator-(Complex c){
        Complex r(0.0, 0.0);
        r.real = this->real - c.real;
        r.imag = this->imag - c.imag;
        return r;
    }
    
    Complex operator-(int c){
        Complex r(0.0, 0.0);
        r.real = this->real - c;
        r.imag = this->imag;
        return r;
    }
};

int main(){
    Complex c1(4.0, 2.0);
    Complex c2(7.0, 3.5);
    
    Complex c3(0.0, 0.0);
    //c3.real = c1.real + c2.real;
    //c3.imag = c1.imag + c2.imag;
    
    c3 = c1.add(c2);
    c3 = c1 + c2;
    c3 = c1 - c2;
    c3 = c1 - 5;
    
    c3.print();
    
    return 0;
}