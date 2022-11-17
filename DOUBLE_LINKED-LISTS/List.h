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
		tail = temp;
	    }
    };
    void insertAttarget(int data, int loc){
           Node* temp = new Node(data);
           Node* target = search(loc);
           if(target!=NULL){
                temp->setNext(target->getNext());
                target->setNext(temp);
                temp->setPrevious(target);
           }
           else{
                throw "Target not available";
           }


    };
    bool isEmpty(){
        if (head == NULL) {
		return true;
	    }
	    else {
		return false;
	    }
    };
    void remove(int data){
            Node* target= new Node(data);
            if(target->getData()==head->getData()){
                   Node* temp= head->getNext();
                   Node* temp2= head;
                   head=temp;
                   temp2->setNext(NULL);
                  

            }
            else if(target->getData()==tail->getData()){
                    Node* temp= tail->getPrevious();
                    Node* temp2= tail;
                    tail=temp2;
                    temp->setNext(NULL);
                    temp2->setPrevious(NULL);
                    
                   
            }
            else{
                    target=search(data);
                    //if(target!=NULL){
                        Node* temp= target->getNext();
                        Node* temp2= target->getPrevious();
                        temp2->setNext(temp);
                        temp->setPrevious(temp);
                        target->setNext(NULL);
                        target->setPrevious(NULL);
                        //}
                    //else{
                      //  throw "Not found!";
                   // }

            }


    };
    Node* search(int data){
        Node* temp= head;
        while(temp!= NULL){
            if(data==temp->getData())
            {
                return temp;
            }
            temp= temp->getNext();
        }
        return temp;
    };
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