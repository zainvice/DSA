#include "Node.h"
class List{
        private:
         Node* head;
         Node* tail;

public:
    List(){
        this->head = NULL;
	    this->tail = NULL;
    };

    void setHead(Node* head){
        this->head = head;
    };
    Node* getHead(){
        return head;
    };
    void setTail(Node* tail){
        this->tail = tail;
    };
    Node* getTail(){
        return tail;
    };

    void insertAthead(int data){
        if (isEmpty()) {
		Node* temp = new Node(data);
		head = temp;
		tail = temp;
	    }
	    else {
		Node* temp = new Node(data);
        head->setPrevious(temp);
		temp->setNext(head);
        temp->setPrevious(NULL);
		head = temp;
	    }
    };
    void insertAttail(int data){
        if (isEmpty()) {
		insertAthead(data);
	    }
	    else {
		Node* temp = new Node(data);
		tail->setNext(temp);
        temp->setPrevious(tail);
        temp->setNext(NULL);
		tail = temp;
	    }
    };
    void insertAttarget(int data, int loc){

    };
    bool isEmpty(){
        if (head == NULL) {
		return true;
	    }
	    else {
		return false;
	    }
    };
    //void remove(int);
    //Node* search(int);
    int count(){
        int counter = 0;
	    Node* temp = head;
	    while (temp != NULL) {
		    counter++;
		    temp = temp->getNext();
	    }
	    return counter;
    };
    void print(){
        Node* temp = head;
	    while (temp != NULL) {
		std::cout << temp->getData()<<std::endl;
		temp = temp->getNext();
	    }
    };









};