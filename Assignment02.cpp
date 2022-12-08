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
    void inputValue(int value){
        int values;
        std::cout<<"How many values in your set?";
        std::cin>>values;
        for (int i = 0; i < values; i++)
        {
            if(values>1)
                 std::cin>>value;
            if(i==0){
           
               setLastElement(value);}
           
           else
               {
                  setLastElement(',', value);
                  }
           
           
        }
           
           
           
        }
    set Union (const set& setA, const set& setB){
            setElement* temp= setA.firstElement;
            setElement* temp2= setB.firstElement->GetNext();
            setElement* comp= setA.lastElement;
            setElement* comp2= setB.lastElement;
            while(temp!=NULL){
                if(temp==comp)
                    break;
                else{
                  if(temp->ischar()) {
                    std::cout<<" "<< temp->GetSymbol();
                    temp=temp->GetNext();}
                  else if (temp->isNum()){
                    std::cout<<" "<<temp->GetValue();
                    temp=temp->GetNext();
                  }
                  else{
                    std::cout<<temp->GetSymbol()<<" "<<temp->GetValue();
                    temp=temp->GetNext();
                  }
                  }
                
            }
            while(temp2!=NULL){
               if(temp2->ischar()) {
                    std::cout<<" "<< temp2->GetSymbol();
                    temp2=temp2->GetNext();}
                  else if (temp2->isNum()){
                    std::cout<<", "<<temp2->GetValue();
                    temp2=temp2->GetNext();
                  }
                  else{
                    std::cout<<temp2->GetSymbol()<<" "<<temp2->GetValue();
                    temp2=temp2->GetNext();

            }
            }
            

        };
    void intersection (const set& setA, const set& setB){
            setElement* temp= setA.firstElement;
            setElement* temp2= setB.firstElement;
            int sizeA= count(setA);
            int sizeB= count(setB);
            for (int i = 0; i < sizeA; i++)
            {
                for (int j = 0; j < sizeB; j++)
                {
                    if(temp->ischar()&&temp2->ischar()){
                        std::cout<<" "<<temp->GetSymbol();
                        temp2=temp2->GetNext();
                        temp=temp->GetNext();
                        }
                    else{

                        if(temp->GetValue()==temp2->GetValue()){
                            if(temp->isNum()){
                                std::cout<<" "<<temp->GetValue();
                                temp=temp->GetNext();
                                temp2=temp2->GetNext();
                            }
                            else{
                                std::cout<<", "<<temp->GetValue();
                                temp=temp->GetNext();
                                temp2=temp2->GetNext();
                            }
                        }
                    }
                }
                temp=temp->GetNext();
                
            }
            
            
    };
    void difference (const set& setA, const set& setB){
        setElement* temp= setA.firstElement;
            setElement* temp2= setB.firstElement;
            while(temp!=NULL||temp2!=NULL){
                if(temp->ischar()||temp2->ischar()){
                    std::cout<<" "<<temp->GetSymbol();
                    temp=temp->GetNext();
                    temp2=temp2->GetNext();
                }
                else{
                        if(temp->GetValue()==temp->GetValue()){
                             temp=temp->GetNext();
                             temp2=temp2->GetNext();
                        }
                        else{
                            if(temp->isNum()){
                                std::cout<<" "<<temp->GetValue();
                                temp=temp->GetNext();
                                temp2=temp2->GetNext();
                            }
                            else{
                                std::cout<<", "<<temp->GetValue();
                                temp=temp->GetNext();
                                temp2=temp2->GetNext();
                            }
                            }
                    }
            }
    };
    set removeDuplication(const set& setA, const set& setB){
            setElement* temp= setA.firstElement;
            setElement* Duplicate= setB.firstElement;
            int sizeA=count(setA);
            int sizeB=count(setB);
            for (int i = 0; i < sizeA; i++)
             {

              for (int j = 0; j < sizeB; j++)
                   {
                        if(temp->ischar()&&Duplicate->ischar()){
                            temp=temp->GetNext();
                            Duplicate=Duplicate->GetNext();
                        }
                        else if(temp->GetValue()==Duplicate->GetValue()){
                               remove(temp->GetValue());
                               remove(Duplicate->GetValue());
                         }
                         else{
                            Duplicate=Duplicate->GetNext();
                         }
                     }
                            
                        temp=temp->GetNext(); 
                       
                 }
       
    
    };
    int count (){
        setElement* temp= firstElement;
        int size=0;
        while(temp!=NULL){
            if(temp->ischar())
                temp= temp->GetNext();
            else{
                 size++;
                 temp= temp->GetNext();}
        }
        return size;
    };
    int count (const set& setA){
        setElement* temp= setA.firstElement;
        int size=0;
        while(temp!=NULL){
                 size++;
                 temp= temp->GetNext();
                 }
        
        return size;
    };
    void sortSet(){
          
            
            int i=0;
            int size= count();
            int* array= new int[size];
            setElement* temp= firstElement;
            setElement* temper= firstElement->GetNext();
            for (int step = 0; step < size; step++){
                  for (int i = 0; i < size-step; i++)
                  {
                    if(temp->ischar()&&temper->ischar()){
                        goto takenext;
                    }
                    else if(temp->GetValue()>temper->GetValue()){
                          int temp2= temp->GetValue();
                          temp->setValue(temper->GetValue());
                          temper->setValue(temp2);
                          
                        //  std::swap(a[i],a[i+1]);
                      }
                       takenext:
                     temp=temp->GetNext();
                    temper=temper->GetNext();

                  } 
                   
                }
            /*while(temp!=NULL){
                if(temp->ischar()){
                    temp=temp->GetNext();
                }
                else{
                      array[i]=temp->GetValue();
                      i++;
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
                    if(size%=2)
                        temp->setValue(array[i]);
                    else
                        temp->setValue(array[i+1]);
                    i++;
                    temp=temp->GetNext();
                }
               
            }*/
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
        void remove(int data){
            setElement* target= new setElement(data);
            setElement* previous= new setElement();
            if(target->GetValue()==firstElement->GetValue()){
                   setElement* temp= firstElement->GetNext();
                   setElement* temp2= firstElement;
                   firstElement=temp;
                   temp2->setNext(NULL);
                  

            }
             else if(target->GetValue()==lastElement->GetValue()){
                    setElement* temp=firstElement;
                    while(true){
                        
                        if(previous->GetNext()==lastElement){
                            break;
                        }
                        else{
                            previous=temp->GetNext();
                            temp=temp->GetNext();
                        }
                    }
                    setElement* temp2= previous;
                    setElement* temp3= lastElement;
                    lastElement=temp2;
                    temp2->setNext(NULL);
                    delete temp3;
                    
                    
                   
            }
            else{
                    target=search(data);
                    setElement* temp=firstElement;
                    
                    
                    if(target!=NULL){
                        while(true){
                         if(previous->GetNext()==target){
                            break;
                             }
                             else{
                            previous=temp;
                            temp=temp->GetNext();
                             }
                       
                        }
                        setElement* temp2= target->GetNext();
                        setElement* temp3= previous;
                        temp3->setNext(temp2);
                        target->setNext(NULL);
                        delete target;
                    }
                    else{
                      //  throw "Not found!";
                    }
            }
            };

            setElement* search(int data){
                setElement* temp= firstElement;
                 while(temp!= NULL){
                     if(data==temp->GetValue())
                     {
                         return temp;
                     }
                     temp= temp->GetNext();
                  }
              return temp;
              };
    
    };

 
int main(){
    set setA;
    set setB;
    int setsize=0;
    int value;
    /*std::cout<<"\nEnter your set size ? ";
    std::cin>>setsize;
    if(setsize!=0)
        
        std::cout<<"Enter values 1 by 1 press enter after each: ";
    */
   setA.setFirstElement('{');
   value=40; 
   for(int i=0; i<5; i++)
    {
         //std::cin>>value;
        if(i==0){
            setA.setLastElement(value);}
        else
            {setA.setLastElement(',', value-5);}
        value=value-3;
        
    }
    setA.setLastElement('}');
    setB.setFirstElement('{');
    value=14; 
   for(int i=0; i<8; i++)
    {
         //std::cin>>value;
        if(i==0){
            setB.setLastElement(value);}
        else
            {setB.setLastElement(',', value+5);}
        value=value+3;
        
    }
    setB.setLastElement('}');
    std::cout<<"Your set A: ";
    setA.print();
    std::cout<<"\nYour set B: ";
    setB.print();
    //setA.sortSet();
    //std::cout<<"\nAfter sorting:  ";
    //setA.print();
    //setB.sortSet();
    //std::cout<<"\nAfter sorting:  ";
    //setB.print();
    std::cout<<"\nTaking Union: of Set A and Set B:";
    setA.Union(setA, setB);
    //std::cout<<"\nTaking difference: of Set A and Set B:";
    //setA.difference(setA, setB);
    //std::cout<<"\nTaking Intersection: of Set A and Set B:";
    //setA.intersection(setA, setB);
    setA.sortSet();
    setA.print();
    std::cout<<"\nRemoving Duplications: of Set A and Set B:";
    setA.removeDuplication(setA, setB);
    setA.print();
    setB.print();
    /*setA.setFirstElement('{');
    setA.setLastElement(50);
    setA.setLastElement(',',11);
    setA.setLastElement(',',20);
    setA.setLastElement(',',40);
    setA.setLastElement('}');
    setA.print();
    std::cout<<"\nSorting set: ";
    setA.sortSet();
    setA.print();
     std::cout<<"\nRemoving Duplication: ";
    setA.removeDuplication();
    setA.print();*/
}