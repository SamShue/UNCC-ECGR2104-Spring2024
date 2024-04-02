#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    ofstream outFile;
    
    outFile.open("example.txt");
    
    outFile << "Hello World!" << endl;
    outFile << "Here's another line!" << endl;
    
    outFile.close();
    
    ifstream inFile;
    
    inFile.open("doesnotexist.txt");
    
    if(!inFile.is_open()){
        cout << "Unable to open file!" << endl;
        return 0;
    }
    
    string text;
    while(!inFile.eof()){
        getline(inFile, text);
        cout << text << endl;
    }
    
    return 0;
}