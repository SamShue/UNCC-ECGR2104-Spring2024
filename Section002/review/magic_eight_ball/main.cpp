#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
    
    char userResponse = 'Y';
    
    // variable to hold the condition to keep asking 8-ball questions
    bool loopCondition = true;
    
    while(loopCondition){
    
        int randNum = rand() % 3;
        
        //cout << r << endl;
        
        if(randNum == 0){
            cout << "Yes" << endl;
        } else if(randNum == 1){
            cout << "No" << endl;
        } else {
            cout << "Maybe" << endl;
        }
        
        cout << "Do you want to ask another question? (Y/N)" << endl;
        cin >> userResponse;
        
        loopCondition = (userResponse == 'Y') || (userResponse == 'y');
    }
    
    return 0;
}