//
//  main.cpp
//  euler018
//
//  Created by Mario Jimenez on 2/25/17.
//  Copyright © 2017 mariot. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int testCases = 0;
    int rows = 0;
    int element = 0;
    
    cout << "First line contains T, the number of testcases." << endl;
    cin >> testCases;
    
    //Loop for the number of test cases being provided
    for(int test = 1; test <= testCases; test++){
        
        //Get number of rows for the triangle
        cin >> rows;
        
        cout << endl << "Rows: " << rows << endl;
        
        int pyramid[rows][rows];
        
        //For each row in the pyramid
        for (int i = 0; i < rows; i++){
            
            //For each column
            for(int j = 0; j < i+1; j++){
                //Get element
                cin >> element;
                cout << element << " ";
                pyramid[i][j] = element;
            }
            
            cout << endl;
        }
        
        // # | Pyrammid is set up
        
        
        // Bottom up
        //
        // Starting from the second to last row, for each of the elements in the row
        // take the higher of the last rows children
        // and add it to the current element.
        //
        
        for (int i = rows - 1; i >= 0; i--) {
            
        }
        
        
        
    }
    
    cout << endl;
    
    
    return 0;
}
