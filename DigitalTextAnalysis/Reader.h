//
//  Reader.h
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/21/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#ifndef __DigitalTextAnalysis__Reader__
#define __DigitalTextAnalysis__Reader__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "Chapter.h"

using namespace std;

class Reader{
public:
    //Constructor
    Reader(string fileName);
    
    vector<Chapter*> getChapters() { return this->chapters; }
    string getTitle() { return this->title; }
    string getAuthor() { return this->author; }
    string getLanguage() { return this->language; }
    
private:
    vector<Chapter*> chapters;
    string title;
    string author;
    string language;
};

#endif /* defined(__DigitalTextAnalysis__Reader__) */
