#include <iostream>

using namespace std;

class vector {
    public:
    vector(){
        a = new int[3];
        nextIndex = 0;
        allocatedSize = 3;
        
        cout << a << endl;
    }
    
    void push_back(int d){
        if(nextIndex < allocatedSize){
            a[nextIndex] = d;
            nextIndex++;
        } else {
            cout << "Allocating more space..." << endl;
            int* temp = new int[allocatedSize + 3];
            cout << temp << endl;
            for(int i = 0; i < nextIndex; i++){
                temp[i] = a[i];
            }
            allocatedSize = allocatedSize + 3;
            
            delete[] a;
            a = temp;
            
            a[nextIndex] = d;
            nextIndex++;
        }
    }
    
    void pop_back(){
        if(nextIndex == 0)
            return;
            
        if((allocatedSize - nextIndex) > 3){
            cout << "Deallocating space..." << endl;
            int* temp = new int[allocatedSize - 3];
            cout << temp << endl;
            for(int i = 0; i < nextIndex; i++){
                temp[i] = a[i];
            }
            
            allocatedSize = allocatedSize - 3;
            delete[] a;
            a = temp;
        }
        
        nextIndex--;
    }
    
    int size(){
        return nextIndex;
    }
    
    int& at(int idx){
        return a[idx];
    }
    
    private:
    int* a;
    int nextIndex;
    int allocatedSize;
};

int main(){
    
    vector v;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    
    v.pop_back();
    v.pop_back();
    v.pop_back();
    
    v.at(0) = 9;
    
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }
    
    return 0;
}