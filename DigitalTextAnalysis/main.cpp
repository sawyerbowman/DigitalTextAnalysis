//
//  main.cpp
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/13/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "Console.h"
#include "Character.h"
#include "Term.h"

using namespace std;

const string characters[7] = {"quijote", "sancho", "cura", "barbero", "sansón", "cervantes", "cide"};
const string terms[6] = {"libro", "texto", "leer", "ficción", "caballería", "realidad"};

/**
 *
 */

void saveResults(int chapter, string chapterName, string character, string term, int frequency){
    ofstream csvFile;
    csvFile.open("/Users/sawyerbowman/Desktop/don_quijote_results.csv", std::ios_base::app);

    csvFile << chapter << "," << chapterName << "," << character << "," << term << "," << frequency << endl;
    
    csvFile.close();
}

/**
 *
 */

void saveResults2(int chapter, string chapterName, string character, string term, int frequency){
    ofstream csvFile;
    csvFile.open("/Users/sawyerbowman/Desktop/don_quijote_results.txt", std::ios_base::app);
    
    csvFile << chapter << "\t" << chapterName << "\t" << character << "\t" << term << "\t" << frequency << endl;
    
    csvFile.close();
}


/**
 *
 */

void testing(Console* console){
    for (int i = 0; i < console->getBook()->getChapters().size(); i++){
        for (int c = 0 ; c < 7; c++){
            Character* character = new Character(characters[c], console->getBook()->getChapters());
            for (int t = 0; t < 6; t++){
                Term* term = character->findTermWithinChapters(terms[t], i, i);
                saveResults2(i, console->getBook()->getChapters()[i]->getChapterName(), characters[c], terms[t], term->getFrequency());
            }
        }
    }
}

/**
 *Parse the command line args, and run the algorithm
 */

int main(int argc, const char * argv[]) {
    
    if (argc != 2){
        cout << "Please enter a filename for the text you'd like to analyze." << endl;
        exit(0);
    }
    
    string filename = argv[1];
    
    Console *console = new Console(filename);
    
    testing(console);
    
    cout << "Terminado!" << endl;
    
    return 0;
}
