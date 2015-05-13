//
//  Character.cpp
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/13/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#include "Character.h"

/**
 *
 */

Character::Character(string characterName, vector<Chapter*> chapters){
    this->characterName = characterName;
    this->chapters = chapters;
}

/**
 *
 */

int Character::findTermsWithinChapters(vector<string> terms, int chapter1, int chapter2){
    //Check and see if user entered valid chapter numbers
    int termsFrequency = 0;
    if (chaptersInRange(chapter1, chapter2)){
        //iterate across every chapter
        for (int i = chapter1; i <= chapter2; i++){
            Chapter* curChapter = this->chapters[i];
            //get each paragraph from each chapter
            for (Paragraph* paragraph : curChapter->getParagraphs()){
                //check if user is mentioned in paragraph
                if (isInParagraph(paragraph)){
                    //for every word in the paragraph
                    for (string word : paragraph->getText()){
                        for (string term : terms){
                            if (lowerCase(word) == lowerCase(term)){
                                termsFrequency++;
                            }
                        }
                    }
                }
            }
        }
    }
    
    return termsFrequency;
    
}

///**
// *
// */
//
//vector<Term*> Character::getAllTermsWithinChapters(int chapter1, int chapter2){
//    //Check and see if user entered valid chapter numbers
//    vector<Term*> terms;
//    if (chaptersInRange(chapter1, chapter2)){
//        //iterate across every chapter
//        for (int i = chapter1; i <= chapter2; i++){
//            Chapter* curChapter = this->chapters[i];
//            //get each paragraph from each chapter
//            for (Paragraph* paragraph : curChapter->getParagraphs()){
//                //check if user is mentioned in paragraph
//                if (isInParagraph(paragraph)){
//                    //for every word in the paragraph
//                    for (string word : paragraph->getText()){
//                        //if stopword, keep going
//                        if (find(stopwords.begin(), stopwords.end(), word) != stopwords.end()){
//                            continue;
//                        }
//                        //we have this term already, update its count
//                        else if (find(terms.begin(), terms.end(), word) != terms.end()){
//                            int index = find(terms.begin(), terms.end(), word) != terms.end();
//                            terms[index]->setFrequency(terms[index]->getFrequency()+1);
//                        }
//                        //not a term we have encountered yet
//                        else {
//                            terms.push_back(new Term(word, 1));
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return terms;
//}

/**
 *
 */

bool Character::chaptersInRange(int chapter1, int chapter2){
    if (chapter1 >= 0 && chapter1 < this->chapters.size() && chapter2 >= 0 &&
        chapter2 < chapters.size() && chapter2 >= chapter1){
        return true;
    }
    return false;
}

/**
 *
 */

bool Character::isInParagraph(Paragraph* paragraph){
    for (string word : paragraph->getText()){
        if (fuzzyMatch(lowerCase(this->characterName), lowerCase(word))){
            return true;
        }
    }
    return false;
}

/**
 *
 */

bool Character::fuzzyMatch(string string1, string string2){
//    if (string1.find(string2) || string2.find(string1)){
//        return true;
//    }
    if (string1 == string2){
        return true;
    }
    return false;
}

/**
 *
 */

string Character::lowerCase(string string1){
    transform(string1.begin(), string1.end(), string1.begin(), ::tolower);
    return string1;
}

