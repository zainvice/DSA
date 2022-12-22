#include "List.h"
#include <iostream>

int main(){
    List list;
    int array[100];
    list.insertAthead(2);
    list.insertAthead(0);
    list.insertAttail(3);
    list.insertAttail(8);
    list.print();

    list.remove(3);
    std::cout<<"After Removing\n";
    list.print();
    return 0;
}

  