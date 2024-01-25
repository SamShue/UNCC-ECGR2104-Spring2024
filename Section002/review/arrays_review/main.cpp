#include <iostream>

using namespace std;

double mean(const double a[], const unsigned int& SIZE){
    double sum = 0.0;
    for(int i = 0; i < SIZE; i++){
        //sum = sum + a[i];
        sum += a[i];
    }
    return sum / (double)SIZE;
}

int main(){
    //double quiz[] = {80.0, 90.0, 100.0};
    //double quiz[3] = {80.0, 90.0, 100.0};
    
    const unsigned int SIZE = 3;
    double quiz[3];
    
    for(int i = 0; i < SIZE; i++){
        double userInput;
        cin >> userInput;
        quiz[i] = userInput;
    }
    
    cout << mean(quiz, SIZE) << endl;
    
    return 0;
}