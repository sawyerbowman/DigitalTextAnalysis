//
//  Term.h
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/13/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#ifndef __DigitalTextAnalysis__Term__
#define __DigitalTextAnalysis__Term__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Term {
public:
    //Constructor
    Term();
    
private:
    string term;
    int frequency;
    
};

#endif /* defined(__DigitalTextAnalysis__Term__) */
