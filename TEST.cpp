/*
Problem: TEST - Life, the Universe, and Everything
Platform: SPOJ
Difficulty: Easy

Description:
Read integers from input and print them.
Stop processing when the number 42 is encountered.

Approach:
Brute-force input reading using a loop.
Stop when 42 appears.

Time Complexity: O(n)
Space Complexity: O(1)
*/



#include <iostream>
using namespace std;

int main() {
    int n;
    
    while (cin >> n) {   
        if (n == 42)    
            break;       
        
        cout << n << endl;  
    }
    
    return 0;
}