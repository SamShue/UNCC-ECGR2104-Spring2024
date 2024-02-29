#include <iostream>

using namespace std;

void func(int x[]){
    x[0] = 8;
}

int main(){
    
    int a[] = {1, 2, 3};
    
    func(a);
    
    cout << a[63] << endl;
    cout << *(a + 63) << endl;
    
    return 0;
}