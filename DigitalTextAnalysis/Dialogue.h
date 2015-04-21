//
//  Dialogue.h
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/13/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#ifndef __DigitalTextAnalysis__Dialogue__
#define __DigitalTextAnalysis__Dialogue__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Dialogue {
public:
    //Constructor
    Dialogue();
    
private:
    string speaker;
    vector<string> involvedCharacters;
    int length;
    vector<string> references;
    vector<string> themes;
    
    
};

#endif /* defined(__DigitalTextAnalysis__Dialogue__) */
