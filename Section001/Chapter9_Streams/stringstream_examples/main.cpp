#include <iostream>
#include <sstream>

using namespace std;

int main(){
    
    stringstream ss;
    
    string month = "January";
    int day = 20;
    int year = 1995;
    
    ss << month << " " << day << ", " << year;
    
    cout << ss.str() << endl;
    
    return 0;
}