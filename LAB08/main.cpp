#include <iostream>
#include "Employee.h"

int main(){
    Queue queue;

    std::string name;
    std::string age;
    std::string position;
    int size;
    std::cout<<"Enter total Number of Empolyees: ";
    std::cin>>size;
    for(int i=0; i<size; i++){
        std::string data;
        std::cout<<"Enter Name of the Empolyee "<<i+1<<" !";
        std::cin>>name;
        std::cout<<"Enter age of the Empolyee!";
        std::cin>>age;
        std::cout<<"Enter position of the Empolyee!";
        std::cin>>position;
        data="Name: "+name+" Age: "+age+" Position: "+position;
        queue.enQueue(data);
    }
    int go;
    std::cout<<"\n\nEnter anything to display Queue!";
    std::cin>>go;
    queue.displayQueue();
    std::cout<<"\n\nEnter anything to DeQueue";
    std::cin>>go;
    std::cout<<"Removing..... \n";
    queue.deQueue();
    std::cout<<"\nEnter anything to display Queue again!";
    std::cin>>go;
    queue.displayQueue();
}