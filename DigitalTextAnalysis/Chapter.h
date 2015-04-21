//
//  Chapter.h
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/21/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#ifndef __DigitalTextAnalysis__Chapter__
#define __DigitalTextAnalysis__Chapter__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "Paragraph.h"

using namespace std;

class Chapter{
public:
    //Constructor
    Chapter(ifstream &problemFile, string line, string chapterName);
    
private:
    vector<Paragraph*> paragraphs;
    string chapterName;
    int paragraphCount;
};

#endif /* defined(__DigitalTextAnalysis__Chapter__) */
