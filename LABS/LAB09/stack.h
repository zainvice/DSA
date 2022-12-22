#include <iostream>
#include "LinkedLists.h"

class Stack{
   private:
        List list;

   public:
        Stack(){
            List newlist;
            this->list=newlist;
        }
        void push(int data){
            list.insertAthead(data);
        }
        void pop(){
            list.remove(list.getHead()->getData());
        }
        void displayStack(){
            list.print();
        }

};