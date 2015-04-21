//
//  Chapter.cpp
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/21/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#include "Chapter.h"

/**
 *Creates a new chapter object
 */

Chapter::Chapter(ifstream &problemFile, string line, string chapterName){
    this->chapterName = chapterName;
    this->paragraphCount = 0;
    
    //Get the next line after chapter declaration
    do {
        getline(problemFile, line);
    } while (line == "\r");
    
    //Count carriage returns (if 3 or more, new chapter!)
    int returnCount = 0;
    while (returnCount < 3){
        returnCount = 0;
        //If line is blank, skip to next line
        while (line == "\r"){
            returnCount++;
            if (returnCount >= 2){
                return;
            }
            getline(problemFile, line);
        }
        
        
        //create a Paragraph object
        this->paragraphs.push_back(new Paragraph(problemFile, line));
        this->paragraphCount++;
        
        getline(problemFile, line);
    }
}

