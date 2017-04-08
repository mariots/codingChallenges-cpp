//
//  main.cpp
//  CountingSheep
//
//  Created by Mario Jimenez on 3/25/17.
//  Copyright © 2017 mariot. All rights reserved.
//

#include <iostream>
#include <unordered_set>
using namespace std;



int main(int argc, const char * argv[]) {
    
    unordered_set<int> seenNumbers = {};
    
    int testCases, smallStart, iterator = 1;
    
    cout << "Enter number of Test Cases: " << endl;
    cin >> testCases;
    
    while(testCases < 1 || testCases > 100) {
        cout << "Enter 1 <= N <= 100 test cases" << endl;
        cin >> testCases;
    }
    
    for(int i = 0; i < testCases; i++) {
        
        cout << "Enter a single integer: " << endl;
        cin >> smallStart;
        
        // Check for proper test cases
        while(smallStart < 0 || smallStart > 200) {
            cout << "Enter 1 <= N <= 200: " << endl;
            cin >> smallStart;
        }
        
        
        // Loop until seenNumbers has the individual digits 0..9
        while(seenNumbers.size() < 10) {
            
            // After we have N, loop over until we see all digits 0..9
            while(smallStart > 0) {
                seenNumbers.insert(smallStart % 10);
                smallStart /= 10;
            }
            
            smallStart *= iterator; //Multiply smallStart
            iterator++; //Iterate iterator
            
            cout << "seenNumbers size: " << seenNumbers.size() << endl;
        }
        
    }
    
    
    return 0;
}
