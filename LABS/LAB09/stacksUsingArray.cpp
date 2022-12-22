
#include <iostream>
//Last In First Out
class Stack{
    private:
         char* values;
         int top;
         int bottom;
         int size;
    public:
         Stack(int size){
            this->top=-1;
            this->bottom=-1;
            values= new char[size];
            this->size=size;
         };
         void push(char value){
               bottom=bottom+1;
               this->values[bottom]=value;
         };
         void pop(){
               this->values[bottom]=NULL;
               bottom= bottom-1;
         };
         void display_stack(){
               for(int i=0; i<this->size; i++){
                    std::cout<<this->values[i]<<"\n";
               }
         }
         void prefix(){
         };
         void postfix(){

         };

};
int main(){
     Stack newstack(10);
     newstack.push('A');
     newstack.push('B');
     newstack.push('c');
     newstack.push('d');
     newstack.display_stack();
     newstack.pop();
     newstack.display_stack();
     return 0;
}