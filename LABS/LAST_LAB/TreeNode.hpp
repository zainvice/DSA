#include <iostream>
class TreeNode{
    private:
        std::string* array;
        int key=0;
        int NodeSize;
        TreeNode* left;
        TreeNode* right;
    public:
        TreeNode(){
            this->key=this->key+1;
            this->array= new std::string[10];
            this->left=NULL;
            this->right=NULL;
            this->NodeSize=10;
            for(int i=0; i<NodeSize; i++){
                array[i]=" ";
            }
        }
        TreeNode(int size, int key){
            this->key=key;
            this->array= new std::string[size];
            this->NodeSize=size;
            this->left=NULL;
            this->right=NULL;
            for(int i=0; i<NodeSize; i++){
                array[i]=" ";
            }
        }
        void setLeft(TreeNode* left){
            this->left=left;

        }
        void setRight(TreeNode* right){
             this->right=right;
        }
        TreeNode* getLeft(){
            return this->left;
        }
        TreeNode* getRight(){
            return this->right;
        }
        int getKey(){
            return this->key;
        }
        void setKey(int key){
           this->key= key;
        }
        void enterData(std::string data){
            std::string input= data;
            for(int i=0; i<NodeSize; i++){
                array[i]=input;
                std::cout<<"Enter " <<i+2<<" value! ";
                getline(std::cin, input);
                std::cout<<"\n";
            }
        }
        std::string getData(){
            std::string result="";
            for(int i=0; i<NodeSize; i++){
                result= result + this->array[i];
            }
            return result;
        }
};