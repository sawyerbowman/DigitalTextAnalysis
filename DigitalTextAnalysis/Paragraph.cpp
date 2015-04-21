//
//  Paragraph.cpp
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/21/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#include "Paragraph.h"

/**
 *Creates a new paragraph
 */

Paragraph::Paragraph(ifstream &problemFile, string line){
    this->wordCount = 0;
    
    //While it's not a new line, continue adding to text vector
    while (line != "\r"){
        line = line.substr(0, line.size()-1);
        string word;
        stringstream lineParser (line);
        while (lineParser >> word){
            this->text.push_back(word);
            this->wordCount++;
        }
        getline(problemFile, line);
    }
}


