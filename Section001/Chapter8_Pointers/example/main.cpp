#include <iostream>

using namespace std;

void foo(int* a){
    int b = 3;
    *a = *a + b;
}

void swap(int* x, int* y){
    cout << *x << endl;
    
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap(int& x, int& y){
    cout << x << endl;
    
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 5;
    int b = 8;
    
    swap(&a, &b);
    
    cout << a << " " << b << endl;
    
    return 0;
}