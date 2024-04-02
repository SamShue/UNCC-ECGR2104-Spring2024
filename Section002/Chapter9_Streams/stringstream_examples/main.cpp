#include <iostream>
#include <sstream>

using namespace std;

int main(){
    stringstream ss;
    
    string month = "April";
    int day = 2;
    int year = 2024;
    
    ss << month << " " << day << ", " << year;
    
    cout << ss.str() << endl;
    
    return 0;
}