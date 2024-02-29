#include <iostream>

using namespace std;

void func(int x[]){
    x[0] = 8;
    
}

int main(){
    
    int x = 5;
    
    int a[] = {1, 2, 3};
    
    int* p = &x;
    
    *p = 10;
    
    cout << *(a + 55) << endl;
    cout << a[55] << endl;
    
    return 0;
}