#include <iostream>
#include "complex.h"

using namespace std;

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
    
    Complex c4(0.0, 0.0);
    c4 = (c1.add(c2)).add(c3);
    c4 = c1 + c2 + c3;
    c4 = c1 + 5 + c3;
    
    c4 += c1;
    
    c4.print();
    
    return 0;
}