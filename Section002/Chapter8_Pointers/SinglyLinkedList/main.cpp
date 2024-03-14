#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList{
    public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    SinglyLinkedList(const SinglyLinkedList& sll);
    void operator=(const SinglyLinkedList& sll);
    
    void push_back(int data);
    void pop_back();
    int& at(int index) const;
    int size() const;
    
    private:
    Node* head;
    int numElements;
};

SinglyLinkedList::SinglyLinkedList(){
    head = nullptr;
    numElements = 0;
}

SinglyLinkedList::~SinglyLinkedList(){
    cout << "Destructor called!" << endl;
    
    while(head != nullptr){
        Node* nextElement = head->next;
        delete head;
        head = nextElement;
    }
}

SinglyLinkedList::SinglyLinkedList(const SinglyLinkedList& sll){
    cout << "Copy Constructor called!" << endl;
    head = nullptr;
    numElements = 0;
    
    for(int i = 0; i < sll.size(); i++){
        push_back(sll.at(i));
    }
}

void SinglyLinkedList::operator=(const SinglyLinkedList& sll){
    cout << "Assignment Operator Override called!" << endl;
    while(head != nullptr){
        Node* nextElement = head->next;
        delete head;
        head = nextElement;
    }
    
    head = nullptr;
    numElements = 0;
    
    for(int i = 0; i < sll.size(); i++){
        push_back(sll.at(i));
    }
}

void SinglyLinkedList::push_back(int data){
    numElements++;
    
    if(head == nullptr){
        cout << "Adding first element to list" << endl;
        head = new Node;
        head->data = data;
        head->next = nullptr;
        return;
    }
    
    Node* currentNode = head;
    while(currentNode->next != nullptr){
        cout << "Moving through list..." << endl;
        currentNode = currentNode->next;
    }
    
    currentNode->next = new Node;
    (currentNode->next)->next = nullptr;
    (currentNode->next)->data = data;
}

void SinglyLinkedList::pop_back(){
    
    if(head == nullptr){
        return;
    }
    
    numElements--;
    
    if(head->next == nullptr){
        delete head;
        head = nullptr;
        return;
    }
    
    Node* currentNode = head;
    while((*currentNode).next->next != nullptr){
        cout << "Moving through list..." << endl;
        currentNode = currentNode->next;
    }
    
    delete currentNode->next;
    currentNode->next = nullptr;
}

int& SinglyLinkedList::at(int index) const{
    Node* currentNode = head;
    int i = 0;
    while(i < index){
        i++;
        currentNode = currentNode->next;
    }
    return currentNode->data;
}

int SinglyLinkedList::size() const{
    return numElements;
    /*
    int i = 0;
    Node* currentNode = head;
    while(currentNode != nullptr){
        currentNode = currentNode->next;
        i++;
    }
    return i;
    */
}

void createsProblems(){
    SinglyLinkedList sll;
    
    sll.push_back(5);
    sll.push_back(3);
    sll.push_back(8);
    sll.push_back(7);
    
    sll.pop_back();
    
    SinglyLinkedList sll2 = sll;
    
    sll2.push_back(9);
    sll2.push_back(11);
    
    sll = sll2;
    
    for(int i = 0; i < sll.size(); i++){
        cout << sll.at(i) << endl;
    }
}

int main(){
    
    createsProblems();
    createsProblems();
    createsProblems();
    
    return 0;
}