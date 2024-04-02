#include <iostream>

using namespace std;

bool v_flag = false;

class vector {
    public:
    vector(bool verbose = false){
        if(verbose) cout << "Constructor Called!" << endl;
        a = new int[3];
        nextIdx = 0;
        arrayAllocatedSize = 3;
        this->verbose = verbose;
    }
    
    ~vector(){
        if(verbose) cout << "Destructor Called!" << endl;
        delete[] a;
    }
    
    vector(const vector& v){
        if(verbose) cout << "Copy Constructor Called!" << endl;
        nextIdx = v.nextIdx;
        arrayAllocatedSize = v.arrayAllocatedSize;
        a = new int[arrayAllocatedSize];
        for(int i = 0; i < nextIdx; i++){
            a[i] = v.a[i];
        }
        
        verbose = v.verbose;
    }
    
    void operator=(const vector& v){
        if(verbose) cout << "Copy Assingment Override Called!" << endl;
        delete[] a;
        
        nextIdx = v.nextIdx;
        arrayAllocatedSize = v.arrayAllocatedSize;
        a = new int[arrayAllocatedSize];
        for(int i = 0; i < nextIdx; i++){
            a[i] = v.a[i];
        }
        
        verbose = v.verbose;
        
    }
    
    void push_back(int d){
        if(nextIdx < arrayAllocatedSize){
            a[nextIdx] = d;
            nextIdx++;
        } else {
            if(verbose) cout << "Out of space... Allocating more..." << endl;
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
    bool verbose;
};

void createsProblems(){
    vector v(v_flag);
    
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(12);
    
    v.pop_back();
    
    v.at(0) = 5;
    
    vector v2 = v;
    
    v2.at(1) = 4;
    
    v = v2;
    
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << endl;
    }
}

int main(int argc, char* argv[]){
    
    for(int i = 0; i < argc; i++){
        string s(argv[i]);
        if(s == "-verbose"){
            v_flag = true;
        }
        
        if(s == "-o"){
            string filename(argv[i+1]);
        }
        
    }
    
    createsProblems();
    createsProblems();
    createsProblems();
    
    return 0;
}