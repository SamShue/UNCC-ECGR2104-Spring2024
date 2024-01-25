#include <iostream>

using namespace std;

int main(){
    
    char c[] = {'H','e','l','l','o','\0'};
    char temp = '!';
    string s = "Hello";
    
    cout << c << endl;
    
    cout << "Enter an integer!" << endl;
    string input;
    cin >> input;
    
    int i = stoi(input);
    
    cout << i << endl;
    
    return 0;
}