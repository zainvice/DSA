#include "Tree.hpp"
#include <iostream>
int main(){
    Tree tree;
    tree.insert(1, 500);
    tree.insert(1, 400);
    tree.insert(1, 450);
    tree.insert(1, 350);
    tree.insert(1, 600);
    tree.insert(1, 550);
    tree.insert(1, 700);
    tree.display();
}