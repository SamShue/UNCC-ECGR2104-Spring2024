#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    
    char c[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int a[] = {1, 2, 3};
    
    cout << a << endl;
    cout << c << endl;
    
    for(int i = 0; i < argc; i++){
        cout << argv[i] << endl;
    }
    
    return 0;
}