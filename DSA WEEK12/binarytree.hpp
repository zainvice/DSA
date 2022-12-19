#include "tree.hpp"
//Binary Tree + Bianry Search = Binary Search Tree (BST)
/* 1. No Duplication
   2. Each Node -> max two childs
   3.            Root 
            /            \
  small(left)            greater(right)
   4. Flaw is sorted data 
   5. A Node which has no child is called leaf node.
   6. Level of trees       
   7. Level starts from 0 
  */
class BinaryTree{
        private:
            Tree* root;
            Tree* tail;
public:
    BinaryTree(){
        this->root = NULL;
	  
    };

    void setHead(Tree* root){
        this->root = root;
    };
    Tree* getHead(){
        return root;
    };
    void setTail(Tree* tail){
        this->tail = tail;
    };
    Tree* getTail(){
        return tail;
    };

    void insertAthead(int data){
        if (isEmpty()) {
		Tree* temp = new Tree(data);
		root = temp;
		tail = temp;
	    }
	    else {
		Tree* temp = new Tree(data);
		temp->setNext(root);
		root = temp;
	    }
    };
    void insertAttarget(int data, int loc){
           Tree* temp = new Tree(data);
           Tree* target = search(loc);
           if(target!=NULL){
                temp->setNext(target->getNext());
                target->setNext(temp);
           }
           else{
                throw "Target not available";
           }


    };
Tree* search(int data){
        Tree* temp= root;
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
		Tree* temp = new Tree(data);
		tail->setNext(temp);
		tail = temp;
	    }
    };
    bool isEmpty(){
        if (root == NULL) {
		return true;
	    }
	    else {
		return false;
	    }
    };
    void remove(int data){
            Tree* target= new Tree(data);
            Tree* previous= new Tree();
            
            if(target->getData()==root->getData()){
                   Tree* temp= root->getNext();
                   Tree* temp2= root;
                   root=temp;
                   temp2->setNext(NULL);
                   delete temp2; 

            }
            else if(target->getData()==tail->getData()){
                    Tree* temp=root;
                    while(true){
                        
                        if(previous->getNext()==tail){
                            break;
                        }
                        else{
                            previous=temp->getNext();
                            temp=temp->getNext();
                        }
                    }
                    Tree* temp2= previous;
                    Tree* temp3= tail;
                    tail=temp2;
                    temp2->setNext(NULL);
                    delete temp3;
                    
                    
                   
            }
            else{
                    target=search(data);
                    Tree* temp=root;
                    
                    
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
                        Tree* temp2= target->getNext();
                        Tree* temp3= previous;
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
	    Tree* temp = root;
	    while (temp != NULL) {
		    counter++;
		    temp = temp->getNext();
	    }
	    return counter;
    };
    void print(){
        Tree* temp = root;
	    while (temp != NULL) {
		std::cout << temp->getData()<<std::endl;
		temp = temp->getNext();
	    }
    };









};