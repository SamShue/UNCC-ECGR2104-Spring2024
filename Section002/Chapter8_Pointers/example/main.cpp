#include <iostream>

using namespace std;

void foo(int* a){
    int b = 3;
    *a = *a + b;
}

int main(){
    int x = 5;
    int y = 8;
    
    int* p = &x;
    
    cout << *p << endl;
    cout << p << endl;
    cout << &x << endl;
    cout << &y << endl;
    
    cout << x << endl;
    
    foo(p);
    
    cout << x << endl;
    
    return 0;
}