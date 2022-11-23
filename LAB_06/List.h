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
		temp->setNext(head);
		head = temp;
	    }
    };
    void insertAttarget(int data, int loc){
           Node* temp = new Node(data);
           Node* target = search(loc);
           if(target!=NULL){
                temp->setNext(target->getNext());
                target->setNext(temp);
           }
           else{
                throw "Target not available";
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
    void insertAttail(int data){
        if (isEmpty()) {
		insertAthead(data);
	    }
	    else {
		Node* temp = new Node(data);
		tail->setNext(temp);
		tail = temp;
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
            Node* previous= new Node();
            
            if(target->getData()==head->getData()){
                   Node* temp= head->getNext();
                   Node* temp2= head;
                   head=temp;
                   temp2->setNext(NULL);
                   delete temp2; 

            }
            else if(target->getData()==tail->getData()){
                    Node* temp=head;
                    while(true){
                        
                        if(previous->getNext()==tail){
                            break;
                        }
                        else{
                            previous=temp->getNext();
                            temp=temp->getNext();
                        }
                    }
                    Node* temp2= previous;
                    Node* temp3= tail;
                    tail=temp2;
                    temp2->setNext(NULL);
                    delete temp3;
                    
                    
                   
            }
            else{
                    target=search(data);
                    Node* temp=head;
                    
                    
                    if(target!=NULL){
                        while(true){
                         if(previous->getNext()==target){
                            break;
                             }
                             else{
                            previous=temp;
                            temp=temp->getNext();
                             }
                       
                        }
                        Node* temp2= target->getNext();
                        Node* temp3= previous;
                        temp3->setNext(temp2);
                        target->setNext(NULL);
                        delete target;
                    }
                    else{
                      //  throw "Not found!";
                    }
            }

                    

        

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