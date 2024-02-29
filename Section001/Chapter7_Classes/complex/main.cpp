#include <iostream>
#include "complex.h"

using namespace std;

int main(){
    
    Complex c1(4, 3);
    Complex c2(1, 1);
    
    //Complex c3 = c1.add(c2);
    Complex c3 = c1 + c2;
    
    c3 = c3 + 5;
    c3 += c1 + c2;
    
    Complex c4 = c1 - c2;
    
    if(c1 == c1){
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }
    
    c3.print();
    c4.print();
    
    return 0;
}