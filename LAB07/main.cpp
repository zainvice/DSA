#include "circularlinkedlist.h"
#include <iostream>

int main(){
    List list;
    int array[100];
    list.insertAthead(2);
    list.insertAthead(0);
    list.insertAttail(3);
    list.insertAttail(8);
    list.insertAttarget(3, 4);
    list.print();
    
    std::cout<<"After Removing\n";
    list.remove(0);
    list.remove(8);
    list.remove(3);
    list.print();
    
    list.print();
    return 0;
}

  