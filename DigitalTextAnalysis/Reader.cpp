//
//  Reader.cpp
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/21/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#include "Reader.h"

/**
 *Reads in the entire file
 */

Reader::Reader(string fileName){
    ifstream problemFile(fileName);
    
    //String to hold each line
    string line;
    
    int count = 0;
    
    bool fin = false;
    
    //If file is valid, continue parsing
    if(problemFile.is_open()){
        getline(problemFile, line);
        while(!fin){
            string word;
            stringstream lineParser (line);
            lineParser >> word;
            
            //Go through and either assign properties or create chapters
            if (word == "Title:"){
                this->title = line.substr(0, line.size()-1);
                getline(problemFile, line);
            }
            else if (word == "Author:"){
                this->author = line.substr(0, line.size()-1);
                getline(problemFile, line);
            }
            else if (word == "Language:"){
                this->language = line.substr(0, line.size()-1);
                getline(problemFile, line);
            }
            else if (word == "PRÓLOGO" || word == "Capítulo"){
                //get out of chapter name and store it
                string chapterName = "";
                do {
                    chapterName += line.substr(0, line.size()-1);
                    getline(problemFile, line);
                } while (line != "\r");
                
                //create a chapter object object
                this->chapters.push_back(new Chapter(problemFile, line, chapterName));
                cout << "Added Chapter: " << count << endl;
                count++;
            }
            else if (line == "Fin\r"){
                fin = true;
            }
            else {
                getline(problemFile, line);
            }
        }
    }
}


