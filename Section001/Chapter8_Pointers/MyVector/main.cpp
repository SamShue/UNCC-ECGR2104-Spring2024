#include <iostream>

using namespace std;

class vector {
    public:
    vector(){
        a = new int[3];
        nextIdx = 0;
        arrayAllocatedSize = 3;
    }
    
    void push_back(int d){
        if(nextIdx < arrayAllocatedSize){
            a[nextIdx] = d;
            nextIdx++;
        } else {
            cout << "Out of space... Allocating more..." << endl;
            int* temp = new int[arrayAllocatedSize + 3];
            for(int i = 0; i < arrayAllocatedSize; i++){
                temp[i] = a[i];
            }
            
            delete[] a;
            
            a = temp;
            
            arrayAllocatedSize = arrayAllocatedSize + 3;
            
            a[nextIdx] = d;
            nextIdx++;
        }
    }
    
    void pop_back(){
        if(nextIdx == 0) 
            return;
            
        nextIdx--;
    }
    
    int& at(int idx){
        return a[idx];
    }
    
    int size(){
        return nextIdx;
    }
    
    private:
    int* a;
    int nextIdx;
    int arrayAllocatedSize;
};

int main(){
    
    vector v;
    
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(12);
    
    v.pop_back();
    
    v.at(0) = 5;
    
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }
    
    return 0;
}