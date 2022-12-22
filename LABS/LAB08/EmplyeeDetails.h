#include <iostream>
//#include <string.h>
class Node {
private:
    std::string data;
    Node* next;
public:
    Node(){
        next = NULL;
    };
    Node(std::string data){
        this->data= data;
	    next = NULL;
    };
    //Node(std::string[], int);
    std::string getData(){
        return data;
    };
    void setData(std::string data){
        
		this->data = data;
    };

    Node* getNext(){
        return next;
    };
    void setNext(Node* next){
        this->next = next;
    };


};