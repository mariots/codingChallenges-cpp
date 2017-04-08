//
//  main.cpp
//  tidyNumbers
//
//  Created by Mario Jimenez on 4/8/17.
//  Copyright © 2017 mariot. All rights reserved.
//
//  Google Code Jam Challenge
//
//  https://code.google.com/codejam/contest/3264486/dashboard#s=p1

#include <iostream>
#include <fstream>
#include "string"
using namespace std;

bool isTidyNumber(unsigned long int tidyNumber);

int main() {
    
    int testCases;
    unsigned long int tidyNumber = 0;
    string nameOfFile;
    
    cout << "What is the name  of the file?" << endl;
    cin >> nameOfFile;
    
    ifstream testCaseInput(nameOfFile);
    
    if (testCaseInput.is_open()) {
        
        testCaseInput >> testCases;
        
        cout << testCases;
        
        for (int test = 1; test <= testCases; test++) {
            
            testCaseInput >> tidyNumber;
            
            //Keep testing numbers until a tiddy number is found
            while(!isTidyNumber(tidyNumber)) {
                tidyNumber--;
            }
        }
         
        
    }

    
    
    return 0;
}

bool isTidyNumber(unsigned long int tidyNumber) {
    
    unsigned long int compareSmaller, compareLarger;
    const unsigned long int ten = 10;
    
    cout << "Original Tidy: " << tidyNumber << endl;
    
    while(tidyNumber / ten != 0) {
        
        compareLarger = tidyNumber % ten;
        tidyNumber /= ten;
        compareSmaller = tidyNumber % ten;
        
        cout << "TidyNumber: " << tidyNumber << endl;
        
        if(compareLarger < compareSmaller) {
            return false;
        }
    }
    
    return true;
}
