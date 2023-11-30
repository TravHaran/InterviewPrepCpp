#include <iostream>
#include "ItemInCommon.h"

using namespace std;

void test() {
    {
        cout << "\n----- Test: Has Items In Common -----\n";
        vector<int> vect1 = {1, 2, 3, 4, 5};
        vector<int> vect2 = {5, 6, 7, 8, 9};
        cout << "EXPECTED: True\n";
        cout << "RETURNED: " << (itemInCommon(vect1, vect2) ? "True\n" : "False\n");
        cout << (itemInCommon(vect1, vect2) ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: No Items In Common -----\n";
        vector<int> vect1 = {1, 2, 3, 4, 5};
        vector<int> vect2 = {6, 7, 8, 9, 10};
        cout << "EXPECTED: False\n";
        cout << "RETURNED: " << (itemInCommon(vect1, vect2) ? "True\n" : "False\n");
        cout << (!itemInCommon(vect1, vect2) ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: Both Vectors Empty -----\n";
        vector<int> vect1 = {};
        vector<int> vect2 = {};
        cout << "EXPECTED: False\n";
        cout << "RETURNED: " << (itemInCommon(vect1, vect2) ? "True\n" : "False\n");
        cout << (!itemInCommon(vect1, vect2) ? "PASS\n" : "FAIL\n");
    }

    {
        cout << "\n----- Test: One Vector Empty -----\n";
        vector<int> vect1 = {1, 2, 3, 4, 5};
        vector<int> vect2 = {};
        cout << "EXPECTED: False\n";
        cout << "RETURNED: " << (itemInCommon(vect1, vect2) ? "True\n" : "False\n");
        cout << (!itemInCommon(vect1, vect2) ? "PASS\n" : "FAIL\n");
    }
    
}

int main(){
    test();
}


/* 
    EXPECTED OUTPUT:
    ----- Test: Has Items In Common -----
    EXPECTED: True
    RETURNED: True
    PASS
    ----- Test: No Items In Common -----
    EXPECTED: False
    RETURNED: False
    PASS
    ----- Test: Both Vectors Empty -----
    EXPECTED: False
    RETURNED: False
    PASS
    ----- Test: One Vector Empty -----
    EXPECTED: False
    RETURNED: False
    PASS

*/