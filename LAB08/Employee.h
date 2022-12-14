#include "EmployeeList.h"
class Queue{
    private:
        List list;
    public:
            Queue(){
                  List newlist;
                  list=newlist;
              };
              
            void enQueue(std::string data){
                 
                  list.insertAttail(data);
          
              }
            void deQueue(){
                   list.remove(list.getHead()->getData());
              }
            void displayQueue(){
                    list.print();
              }
            int countQueue(){
                    return list.count();
            }
};