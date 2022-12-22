#include <iostream>
#include "stack.h"
int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.displayStack();
    std::cout<<"After poping \n";
    stack.pop();
    stack.displayStack();
}