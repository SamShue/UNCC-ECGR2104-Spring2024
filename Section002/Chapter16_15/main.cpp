#include <iostream>

using namespace std;

bool verboseMode = false;

int main(int argc, char* argv[]){
    
    for(int i = 0; i < argc; i++){
        string s(argv[i]);
        if(s == "-verbose"){
            verboseMode = true;
        }
        
        if(s == "--help"){
            cout << "-verbose to enable verbose mode." << endl;
            return 0;
        }
    }
    
    char c[] = {'H', 'i', '\0'};
    int a[] = {1, 2, 3};
    int* p = new int[5];
    
    if(verboseMode){
        cout << p << endl;
        cout << a << endl;
        cout << c << endl;
    }
    
    for(int i = 0; i < 3; i++){
        cout << a[i] << endl;
    }

    return 0;
}