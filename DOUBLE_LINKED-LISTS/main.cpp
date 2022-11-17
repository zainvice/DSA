#include "List.h"
#include <iostream>
//Linked List types
//Single 
//Double 
//Single Circular 
//Double Circular
int main(){
    List list;
    list.insertAthead(5);
    list.insertAthead(4);
    list.insertAthead(5);
    list.insertAthead(3);
    list.insertAttail(65);
    list.insertAttail(3);
    list.insertAttail(34);
    list.insertAttail(434);
    list.insertAttarget(15,65);
    std::cout<<"List size: "<<list.count()<<"\n";
    list.print();
    std::cout<<"Removing at target: '65' \n";
    list.remove(65);
    list.print();
    std::cout<<"Removing the tail: '434' \n";
    list.remove(434);
    list.print();
    std::cout<<"Removing the head: '3' \n";
    list.remove(3);
    list.print();


}