#include "List.h"
#include <iostream>

int main(){
    List list;
    list.insertAthead(2);
    list.insertAthead(0);
    list.insertAttail(3);
    list.insertAttail(8);
    list.print();
    return 0;
}

  