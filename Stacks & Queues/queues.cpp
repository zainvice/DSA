#include <array>
#include <iostream>
//1.Simple Queue
//2.Priority Queue
//3.Circular Queue
class array{

};
class Queue{
    private:
    int front;
    int rear;
    int size;
    int* array;
    public:
    Queue(){
        this->size=0;
        this->array=0;
        this->front=-1;
        this->rear=-1;
    };
    Queue(int size){
        this->size=size;
        this->array= new int[size];
        this->front=-1;
        this->rear=-1;
    }
    void enQueue(int value){
        this->rear=(this->rear+1)%this->size;
        
        this->array[rear]=value;

    }
    void deQueue(){
        this->front=(this->front+1)%this->size;
        array[front]=NULL;
    }
    void display(){
        for(int i=0; i<this->size; i++){
            std::cout<<array[i]<<" ";
        }
    }
    void deleteQueue(){
        delete[] array;
    }
};
int main(){
    Queue queue(10);
    queue.enQueue(1);
    queue.enQueue(5);
    queue.enQueue(8);
    queue.enQueue(3);
    queue.enQueue(6);
    queue.enQueue(13);
    queue.enQueue(12);
    queue.enQueue(54);
    queue.enQueue(12);
    queue.enQueue(54);
    std::cout<<"\nEeQueued : ";
    queue.display();
    queue.deQueue();
    queue.deQueue();
    queue.deQueue();
    std::cout<<"\n3 Values DeQueued : ";
    queue.display();
    queue.enQueue(12);
    queue.enQueue(54);
    queue.enQueue(12);
     std::cout<<"\nEeQueued : ";
    queue.display();
     queue.deQueue();
    std::cout<<"\n1 Value DeQueued : ";
    queue.display();
    queue.enQueue(36);
     std::cout<<"\nEeQueued : ";
    queue.display();
    //Calclate size
    queue.deleteQueue();
}
