#include <iostream>
#include "src/lib/solution.h"

using namespace std;

// Driver program to test above functions 
int main() 
{ 
    // build a BST with default size 11.
    BST b;
    b.push(8); 
    b.push(3); 
    b.push(10); 
    b.push(1); 
    b.push(6); 
    b.push(14); 
    b.push(4);
    b.push(7);
    b.push(13);
    b.print();



        //                     8
        //         3                   10
        //      1     6                     14
        //          4  7                   13
                                            
        // print out 8 3 10 1 6 14 4 7 13

    return 0; 
} 