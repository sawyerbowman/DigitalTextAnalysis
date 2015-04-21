//
//  main.cpp
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/13/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#include <iostream>
#include <stdio.h>

#include "Console.h"

using namespace std;

/**
 *Parse the command line args, and run the algorithm
 */

int main(int argc, const char * argv[]) {
    
    if (argc != 2){
        cout << "Please enter a filename for the text you'd like to analyze." << endl;
        exit(0);
    }
    
    string filename = argv[1];
    
    Console *console = new Console(filename);
    
    cout << "Terminado!" << endl;
    
    return 0;
}
