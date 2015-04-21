//
//  Term.cpp
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/13/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#include "Term.h"

/**
 *
 */

Term::Term(string term, int frequency){
    this->term = term;
    this->frequency = frequency;
}

/**
 *
 */

void Term::findWithinChapters(vector<Chapter*> chapters, int chapter1, int chapter2){
    //Check and see if user entered valid chapter numbers
    if (chaptersInRange(chapters, chapter1, chapter2)){
        //iterate across every chapter
        for (int i = chapter1; i <= chapter2; i++){
            Chapter* curChapter = chapters[i];
            //get each paragraph from each chapter
            for (Paragraph* paragraph : curChapter->getParagraphs()){
                //for every word in the paragraph
                for (string word : paragraph->getText()){
                    if (lowerCase(word) == lowerCase(this->term)){
                        this->frequency++;
                    }
                }
            }
        }
    }
}

/**
 *
 */

bool Term::chaptersInRange(vector<Chapter*> chapters, int chapter1, int chapter2){
    if (chapter1 >= 0 && chapter1 < chapters.size() && chapter2 >= 0 &&
        chapter2 < chapters.size() && chapter2 >= chapter1){
        return true;
    }
    return false;
}

/**
 *
 */

string Term::lowerCase(string string1){
    transform(string1.begin(), string1.end(), string1.begin(), ::tolower);
    return string1;
}



