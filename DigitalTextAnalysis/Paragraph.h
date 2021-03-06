//
//  Paragraph.h
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/21/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#ifndef __DigitalTextAnalysis__Paragraph__
#define __DigitalTextAnalysis__Paragraph__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class Paragraph{
public:
    //Constructor
    Paragraph(ifstream &problemFile, string line);
    
    //Getters
    vector<string> getText() { return this->text; }
    int getWordCount() { return this->wordCount; }
    bool getIsDialogue() { return this->isDialogue; }
    
private:
    vector<string> text;
    int wordCount;
    bool isDialogue;
    
};

#endif /* defined(__DigitalTextAnalysis__Paragraph__) */
