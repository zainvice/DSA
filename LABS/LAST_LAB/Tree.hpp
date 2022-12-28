#include <iostream>
#include <string>
#include "TreeNode.hpp"
class Tree{
    private:
        TreeNode* root;
    public:
        Tree(){
            this->root=NULL;
        }
        void insert(int size, int key){
            
           
            if(isEmpty()){
                TreeNode* temp= new TreeNode(size, key);
                this->root=temp;
            }
            else{
                TreeNode* temp= root;
                 TreeNode* parent=root;
                while(temp!=NULL){
                     if(temp->getKey()==key){
                         break;
                     }
                     else if(temp->getKey()>key){
                        parent=temp;
                        temp=temp->getLeft();
                     }
                     else if(temp->getKey()<key){
                         parent=temp;
                         temp=temp->getRight();   
                     }
                     
                }
                if(parent->getKey()>key){
                     TreeNode* temp2= new TreeNode(size, key);
                     parent->setLeft(temp2);
                }
                else if(parent->getKey()<key){
                    TreeNode* temp2= new TreeNode(size, key);
                     parent->setRight(temp2);
                }
            }

        }
        void insertData(int key){
            TreeNode* temp= root;
            std::string s;
            while((temp!=NULL)){
                    if(temp->getKey()==key){
                        std::cout<<"Enter 1st value! ";
                        getline(std::cin, s);
                        temp->enterData(s);
                        break;
                    }
                    else if(temp->getKey()<key){
                        temp=temp->getRight();
                    }
                    else {
                        temp=temp->getLeft();
                    }
            }
        }
        void inOrder(TreeNode* n){
            if(n!=NULL){
                inOrder(n->getLeft());
                std::cout<<"Key: "<<n->getKey()<<" Data: "<<n->getData()<<"\n";
                inOrder(n->getRight());
            }
        }
        void PreOrder(TreeNode* n){
             if(n!=NULL){
                std::cout<<"Key: "<<n->getKey()<<" Data: "<<n->getData()<<"\n";
                inOrder(n->getLeft());
                inOrder(n->getRight());
            }
            
        }
        void PostOrder(TreeNode* n){
             if(n!=NULL){
                inOrder(n->getLeft());
                inOrder(n->getRight());
                std::cout<<"Key: "<<n->getKey()<<" Data: "<<n->getData()<<"\n";
            }
            
        }
        void display(){
            TreeNode* base=root;
            int choice;
            std::cout<<"Enter\n 1 for InOrder\n 2 for PreOrder\n 3 for PostOrder \n"; std::cin>>choice;
            switch (choice)
            {
                case 1:
                inOrder(base);
                break;
                case 2:
                PreOrder(base);
                case 3:
                PostOrder(base);
            }
        }
        bool isEmpty(){
            if(this->root==NULL){
                return true;
            }
            else {  
                return false;
            }
        }
        void remove(){

        }

};