//
//  main.cpp
//  numberSpiral
//
//  Created by Mario Jimenez on 3/12/17.
//  Copyright © 2017 mariot. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int tests, n;
    int * cols;
    
    cout << "Enter number of tests: " << endl;
    cin >> tests;
    
    cols = new int[tests];
    
    for (int t = 1; t <= tests; t++) {
        cout << "Enter number of columns: " << endl;
        cin >> cols[t];
    }
    
    for (int i = 0; i < tests; i++) {
        
        if(cols[i] % 2 != 1)
            continue;
        
        n = cols[i]/2 + 1;
        cout << 8*n*(n+1)*(2*n+1)/3 + 2*n*(n+1) + 4*n + 1 << endl;
    }
    
    return 0;
}
