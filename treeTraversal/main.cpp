#include "BinarySearchTree.h"

int main(){
    BinarySearchTree* myTree = new BinarySearchTree();

    myTree->insert(47);
    myTree->insert(21);
    myTree->insert(76);
    myTree->insert(18);
    myTree->insert(27);
    myTree->insert(52);
    myTree->insert(82);

    // myTree->DFSPreOrder();
    // myTree->DFSPostOrder();
    myTree->DFSInOrder();
}