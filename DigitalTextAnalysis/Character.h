//
//  Character.h
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/13/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#ifndef __DigitalTextAnalysis__Character__
#define __DigitalTextAnalysis__Character__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <future>
#include <ctype.h>
#include <string>

#include "Chapter.h"
#include "Paragraph.h"
#include "Term.h"
#include "Constants.h"

using namespace std;

class Character {
public:
    //Constructor
    Character(string characterName, vector<Chapter*> chapters);
    
    //Return frequency of particular term associated with character within range
    int findTermsWithinChapters(vector<string> terms, int chapter1, int chapter2);
    
    //Return vector of terms associated with character within range
    vector<Term*> getAllTermsWithinChapters(int chapter1, int chapter2);
    
    //Getter
    string getName() { return this->characterName; }
    
private:
    string characterName;
    vector<Chapter*> chapters;
    
    bool isInParagraph(Paragraph* paragraph);
    bool fuzzyMatch(string string1, string string2);
    bool chaptersInRange(int chapter1, int chapter2);
    string lowerCase(string string1);

};

#endif /* defined(__DigitalTextAnalysis__Character__) */
