#include <iostream>

using namespace std;

double mean(const double a[], const unsigned int& size){
    double sum = 0.0;
    for(int i = 0; i < size; i++){
        sum = sum + a[i];
    }
    
    return sum / (double)size;
}

int main(){
    
    //double quiz[] = {85.0, 90.0, 100.0};
    //double quiz[3] = {85.0, 90.0, 100.0};
    
    const unsigned int SIZE = 3;
    double quiz[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        double quizGrade;
        cin >> quizGrade;
        quiz[i] = quizGrade;
    }
    
    cout << mean(quiz, SIZE) << endl;
    
    return 0;
}