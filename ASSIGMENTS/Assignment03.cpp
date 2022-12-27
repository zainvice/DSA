#include <iostream>
#include <string>
#include <fstream>
class process{
    private:
        std::string process_name;
        int process_id;
        int time_required;
        int Priority;
        int CPU_counter;
        std::string status;
    public:
        process(){
            this->process_name="";
            this->process_id=NULL;
            this->time_required=NULL;
            this->Priority=NULL;
            this->CPU_counter=NULL;
            this->status="";
        }
        process(std::string process_name, int process_id, int time_required, int Priority, int CPU_counter, std::string status){
            this->process_name=process_name;
            this->process_id=process_id;
            this->time_required=time_required;
            this->Priority=Priority;
            this->CPU_counter=CPU_counter;
            this->status=status;
        }
        void setPriority(int Priority){
            this->Priority=Priority;
        }
        int getPriority(){
            return this->Priority;
        }
        void setStatus(std::string status){
            this->status=status;
        }
        std::string getStatus(){
            return this->status;
        }
        int get_time(){
            this->time_required=this->time_required-this->CPU_counter;
            return this->time_required;
        }
        std::string getProcess(){
            return " | "+this->process_name+" | "+std::to_string(this->process_id)+" | "+std::to_string(this->time_required)+" | "+std::to_string(this->Priority)+" | "+std::to_string(this->CPU_counter)+" | "+this->status;
        }


};
class CPU{
    public:
    int execute_process(const process& p){
        process pr=p;
        if(pr.getStatus()=="Waiting"){
            pr.setStatus("Running");
        }
        else if(pr.getStatus()=="Running"){
            std::cout<<"The process is already running!\n";
        }
        else{
            std::cout<<"The process has been completed!\n";
        }
    }
};
class Node{
    private:
        process p;
        Node* previous;
        Node* next;
    public: 
        Node(const process &p){
            this->p=p;
            this->previous=NULL;
            this->next=NULL;
        }
        Node(){
          
            this->previous=NULL;
            this->next=NULL;
        }
        void set_previous(Node* previous){
            this->previous=previous;
        }
        void set_next(Node* next){
            this->next=next;
        }
        Node* get_previous(){
            return this->previous;
        }
        Node* getNext(){
            return this->next;
        }
        void setProcess(const process &p){
            this->p=p;
        }
        process getProcess(){
            return this->p;
        }

};
class LinkedList{
        private:
        Node* head;
        public:
        void setHead(Node* head){
            this->head=head;
        }
        Node* getHead(){
            return this->head;
        }
        void remove(){
            Node* target=head;
            Node* temp= head->getNext();
            head=temp;
            target->set_next(NULL);
            delete target;
        }
        int ProcessCounter(){
            Node* temp=head;
            int counter=0;
            while(temp!=NULL){
                counter++;
            }
            return counter;
        }
        void checkPriorSort(){
            Node* temp=head;
            int size=ProcessCounter();
            for (int i = 0; i < size-1; i++)
            {
                 int firstindex= i;
                 for (int j = i+1; j < size; j++)
                 {
                    if(temp-><a[firstindex])
                            firstindex=j;
                 }
                     std::swap(a[firstindex], a[i]);
             }
        }

};