#include <iostream>

using namespace std;

void func(){
   int* x = new int[3];
    
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    
    cout << x << endl;
    //cout << x << endl;
    //cout << &x << endl;
    
    delete[] x;
}

int main(){
    
    func();
    func();
    func();
    
    int c = 72;
    
    cout << (char)c << endl;
    
    return 0;
}