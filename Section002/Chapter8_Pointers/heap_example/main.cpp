#include <iostream>

using namespace std;

void func(){
    int* p = new int[3];
    
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    
    cout << p << endl;
    
    delete[] p;
}

int main(){
    
    func();
    func();
    func();
    
    return 0;
}