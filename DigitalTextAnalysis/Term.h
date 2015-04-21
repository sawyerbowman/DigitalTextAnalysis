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
#include <future>
#include <string>
#include <utility>

#include "Chapter.h"
#include "Paragraph.h"
#include "Constants.h"

using namespace std;

class Term {
public:
    //Constructor
    Term(string term, int frequency);
    
    //Getters
    string getTerm() { return this->term; }
    int getFrequency() { return this->frequency; }
    void setFrequency(int frequency) { this->frequency = frequency; }
    
    void findWithinChapters(vector<Chapter*> chapters, int chapter1, int chapter2);
    
private:
    string term;
    int frequency;
    
    bool chaptersInRange(vector<Chapter*> chapters, int chapter1, int chapter2);
    string lowerCase(string string1);
    
};

#endif /* defined(__DigitalTextAnalysis__Term__) */
