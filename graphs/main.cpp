#include "Graph.h"

int main(){
    Graph* myGraph = new Graph();
    myGraph->addVertex("A");
    myGraph->addVertex("B");
    myGraph->addVertex("C");

    myGraph->addEdge("A", "B");
    myGraph->addEdge("A", "C");
    myGraph->addEdge("B", "C");
    myGraph->printGraph();
    cout<<endl;
    myGraph->removeVertex("A");
    myGraph->printGraph();
}