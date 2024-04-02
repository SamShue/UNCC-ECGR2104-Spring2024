#include <iostream>
#include <fstream>

using namespace std;

int main(){
    
    ofstream outFile;
    outFile.open("example.txt");
    
    outFile << "Hello World!" << endl;
    outFile << "Another line!" << endl;
    
    outFile.close();
    
    ifstream inFile;
    inFile.open("nothere.txt");
    
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