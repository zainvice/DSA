#include <iostream>
class setElement
{
    private:
        char symbol; // A character type symbol to hold the set symbol like A,B ,C
        int value; // an integer to hold the member of set
        setElement *next; // a pointer to hold the address of next address

    public:
        setElement(){
            this->value=0;
            this->symbol=' ';
            this->next=NULL;
        }
        setElement(int value, char symbol){
            this->value=value;
            this->symbol=symbol;
            this->next=NULL;
        }
        setElement(int value){
            this->value=value;
            this->symbol=NULL;
            this->next=NULL;
        }
        setElement(char symbol){
            this->value=NULL;
            this->symbol=symbol;
            this->next=NULL;
        }
        void setSymbol(char symbol){
            this->symbol=symbol;
        }
        void setValue(int value){
            this->value=value;
        }
        void setNext(setElement* next){
                this->next=next;
        }
        char GetSymbol(){
            return this->symbol;
        }
        int GetValue(){
            return this->value;
        }
        setElement* GetNext(){
            return this->next;
        }
        bool ischar(){
            if(this->value==NULL)
                return true;
            else 
                return false;
        }
        bool isNum(){
            if(this->symbol==NULL)
                return true;
            else 
                return false;
        }
};
class set
{
    private:
        setElement *firstElement;
        setElement *lastElement;
    public:
        set(){
            this->firstElement=NULL;
            this->lastElement=NULL;
        }
        set(setElement* firstElement, setElement* lasttElement){
            this->firstElement=firstElement;
            this->lastElement=lastElement;
        }
        void setFirstElement(char symbol, int element){
            setElement* temp= new setElement(element, symbol);
            if(isEmpty()){
                this->firstElement=temp;
                this->lastElement=temp;
            }
            else{
                temp->setNext(firstElement);
                firstElement=temp;
            }
        }
        void setFirstElement(char symbol){
            setElement* temp= new setElement(symbol);
            if(isEmpty()){
                this->firstElement=temp;
                this->lastElement=temp;
            }
            else{
                temp->setNext(firstElement);
                firstElement=temp;
            }
        }
        void setFirstElement(int element){
            setElement* temp= new setElement(element);
            if(isEmpty()){
                this->firstElement=temp;
                this->lastElement=temp;
            }
            else{
                temp->setNext(firstElement);
                firstElement=temp;
            }
        }

        bool isEmpty(){
            if(firstElement==NULL)
                return true;
            else
                return false;
        }
        void setLastElement(char symbol, int element){
            setElement* temp= new setElement(element, symbol);
            if(isEmpty()){
                this->firstElement=temp;
                this->lastElement=temp;
            }
            else{
                lastElement->setNext(temp);
                lastElement=temp;
            }
        }
         void setLastElement(char symbol){
            setElement* temp= new setElement(symbol);
            if(isEmpty()){
                this->firstElement=temp;
                this->lastElement=temp;
            }
            else{
                lastElement->setNext(temp);
                lastElement=temp;
            }
        }
        void setLastElement(int element){
            setElement* temp= new setElement(element);
            if(isEmpty()){
                this->firstElement=temp;
                this->lastElement=temp;
            }
            else{
                lastElement->setNext(temp);
                lastElement=temp;
            }
        }
        setElement* getFirstElement(){
            return this->firstElement;
        }
        setElement* getLastElement(){
            return this->lastElement;
        }
        void inputValue(){

        }
        set Union (const set& setA, const set& setB){
            /*setElement* temp= setA.firstElement->GetNext();
            setElement* temp2= setB.firstElement->GetNext();
            setElement* comp= setA.lastElement;
            setElement* comp2= setB.lastElement;
            while(temp!=NULL){
                if(temp==comp)
                    break;
                else
                  std::cout<<""<< temp;
                  temp=temp->GetNext();
                
            }
            while(temp2!=NULL){
                std::cout<<temp2;
                temp2=temp2->GetNext();
            }*/
            setElement* temp= setA.firstElement;
            temp=setB.firstElement;
            print();
            

        };
        set intersection (const set& , const set&);
        set difference (const set& , const set&);
        set removeDuplication(){
            //NO NEED FOR THIS LOGIC BUT MIGHT COME IN HANDY
            /*setElement* temp= firstElement;
            setElement* previous= new setElement();
            setElement* temp2= firstElement->GetNext();
            previous->setNext(firstElement);
            while(temp!=NULL){
                if(temp2==temp){
                      setElement* temp3= firstElement->GetNext();
                      firstElement->setNext(NULL);
                      delete firstElement;
                      firstElement=temp3;
                     }
                else if(temp2==lastElement){
                    while(true){
                        
                        if(previous->GetNext()==lastElement){
                            break;
                        }
                        else{
                            previous=temp;
                            temp=temp->GetNext();
                        }
                    }
                    setElement* temp3= previous;
                    delete lastElement;
                    lastElement=temp3;
                    lastElement->setNext(NULL);
                    }
                else{
                    while(true){
                        
                        if(previous->GetNext()==temp){
                            break;
                        }
                        else{
                            previous=temp;
                            temp=temp->GetNext();
                        }
                    }
                }
            }*/
            setElement* temp= firstElement;
            int i=0;
            int array[100];
            int size=0;
            while(temp!=NULL){
                if(temp->ischar()){
                    temp=temp->GetNext();
                }
                else{
                      array[i]=temp->GetValue();
                      i++;
                      size++;
                      temp=temp->GetNext();
                }
            }
            int target=0;
            for(int i=0; i<size; i++){
                if(array[0]==array[i+1]){
                    target=array[0];
                    break;
                }
                else
                    i--;
            }
           for(i=0; i<size; i++)
             {
                 if(array[i]==target)
                 {
                     for(int j=i; j<(size-1); j++)
                        array[j] = array[j+1];
                        i--;
                        size--;
                  }
            }
            i=0;
            temp= firstElement;
            while(temp!=NULL){
                if(temp->ischar()){
                    temp=temp->GetNext();
                }
                else{
                    temp->setValue(array[i]);
                    i++;
                    temp=temp->GetNext();
                }
               
            }
       
    
        };
    void sortSet(){
            setElement* temp= firstElement;
            int i=0;
            int array[100];
            int size=0;
            while(temp!=NULL){
                if(temp->ischar()){
                    temp=temp->GetNext();
                }
                else{
                      array[i]=temp->GetValue();
                      i++;
                      size++;
                      temp=temp->GetNext();
                }
            }
            for (int step = 0; step < size; step++){
                  for (int i = 0; i < size-step; i++)
                  {
                      if(array[i]>array[i+1]){
                         int temp= array[i];
                          array[i]=array[i+1];
                          array[i+1]=temp;
                        //  std::swap(a[i],a[i+1]);
                      }
                                       
                  } 
                }
            i=0;
            temp= firstElement;
            while(temp!=NULL){
                if(temp->ischar()){
                    temp=temp->GetNext();
                }
                else{
                    temp->setValue(array[i]);
                    i++;
                    temp=temp->GetNext();
                }
               
            }
        };
        void print(){
            setElement* temp= firstElement;
            while(temp!=NULL){
                if(temp->ischar())
                    std::cout<<" "<<temp->GetSymbol();
                else if(temp->isNum())
                    std::cout<<" "<<temp->GetValue();
                else
                    std::cout<<temp->GetSymbol()<<" "<<temp->GetValue();
                temp=temp->GetNext();
            }
        };

};
int main(){
    set setA;
    set setB;
    int setsize=0;
    int value;
    std::cout<<"\nEnter your set size ? ";
    std::cin>>setsize;
    if(setsize!=0)
        setA.setFirstElement('{');
        std::cout<<"Enter values 1 by 1 press enter after each: ";
    for(int i=0; i<setsize; i++)
    {
        std::cin>>value;
        if(i==0)
            setA.setLastElement(value);
        else
            setA.setLastElement(',', value);
    }
    setA.setLastElement('}');
    std::cout<<"Your set A: ";
    setA.print();
    setA.sortSet();
    std::cout<<"\nAfter sorting:  ";
    setA.print();
    /*set setUnion;
    setA.setFirstElement(',',3);
    setA.setFirstElement(5);
    setA.setFirstElement('{');
    setA.setLastElement(',',4);
    setA.setLastElement('}');
    setB.setFirstElement(',',3);
    setB.setFirstElement(5);
    setB.setFirstElement('{');
    setB.setLastElement(',',4);
    setB.setLastElement('}');
    setA.print();
    std::cout<<"\nSorting set: ";
    setA.sortSet();
    setA.print();
     std::cout<<"\nRemoving Duplication: ";
    setA.removeDuplication();
    setA.print();*/
}