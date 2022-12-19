#include <iostream>

class Tree{
    private:
        int values;
        Tree* next;
        Tree* next1;
        Tree* root;
    public:
        
        Tree(){
            this->values=NULL;
            this->next1=NULL;
            this->next=NULL;
            this->root=NULL;
        };
        Tree(int data){
            this->values=data;
            this->next1=NULL;
            this->next=NULL;
            this->root=NULL;
        };
        Tree* getNext(){
               return this->next;
        } 
        Tree* getNext1(){
             return this->next1;
        } 
        Tree* getroot(){
             return this->root;
        } 
        int getData(){
            return this->values;
        } 
        void setNext(Tree* next){
            this->next=next;
        };
        void setNext1(Tree* next){
            this->next1=next;
        };
        void setroot(Tree* root){
            this->root=root;
        };
        void setData(int value){
            this->values=value;
        };
    //Trees are most effective data structures can support search and addition and deletion.
};