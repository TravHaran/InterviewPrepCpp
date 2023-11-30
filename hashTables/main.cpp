#include <iostream>
#include "HashTable.h"
using namespace std;

int main(){
    HashTable* ht = new HashTable();
    ht->set("nails", 100);
    ht->set("tile", 50);
    ht->set("lumber", 80);

    ht->set("bolts", 200);
    ht->set("screws", 140);

    ht->printTable();

    cout<<"Lumber: "<<ht->get("lumber")<<endl;
    cout<<"Bolts: "<<ht->get("bolts")<<endl;
    cout<<"Hammer: "<<ht->get("hammer")<<endl;

    vector<string> myKeys = ht->keys();
    for(auto key: myKeys){
        cout<<key<<" ";
    }
    cout<<endl;
}