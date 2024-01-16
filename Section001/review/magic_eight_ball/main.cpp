#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
    
    char userResponse = 'Y';
    
    // boolean condition to keep looping program based on user input
    bool loopCondition = true;
    
    while(loopCondition){
    
        cout << "Ask the magic eight ball a question!" << endl;
        
        int r = rand() % 3;
        
        cout << r << endl;
        
        if(r == 0){
            cout << "Yes" << endl;
        } else if(r == 1){
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