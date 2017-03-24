//
//  main.cpp
//  beautifulBinaryStrings
//
//  Created by Mario Jimenez on 3/23/17.
//  Copyright © 2017 mariot. All rights reserved.
//
//  https://www.hackerrank.com/challenges/beautiful-binary-string

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int n = 0, count = 0;
    string B;
    
    cout << "Enter the length of binary string" << endl;
    cin >> n;
    
    cout << "Enter a single binary string of length n." << endl;
    cin >> B;
    
    // Starting from the 2nd index, loop through the end of the string.
    for (int i = 2; i < n; i++) {
        
        // If the string matches the formate '010'.
        if(B[i-2] == '0' && B[i-1] == '1' && B[i] == '0') {
            
            // Change the last digit to a 1.
            B[i] = '1';
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
