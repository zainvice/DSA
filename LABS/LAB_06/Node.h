#include <iostream>
//#include <string.h>
class Node {
private:
    int data;
    //std::string names[1000];
    Node* next;
public:
    Node(){
        next = NULL;
    };
    Node(int data){
        this->data= data;
	    next = NULL;
    };
    //Node(std::string[], int);
    int getData(){
        return data;
    };
    void setData(int data){
        
		this->data = data;
    };

    Node* getNext(){
        return next;
    };
    void setNext(Node* next){
        this->next = next;
    };


};