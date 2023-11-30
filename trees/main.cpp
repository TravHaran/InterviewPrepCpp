#include<iostream>
#include "BinarySearchTree.h"
using namespace std;

int main(){
    BinarySearchTree* bst = new BinarySearchTree();
    cout<<"Root: "<<bst->root<<endl;

    bst->insert(4);
    cout<<"Root: "<<bst->root->value<<endl;
    bst->insert(5);
    cout<<"Left: "<<bst->root->right->value<<endl;
    cout<<"Contains 5: "<<bst->contains(6)<<endl;
}