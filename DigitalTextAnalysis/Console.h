//
//  Console.h
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/13/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#ifndef __DigitalTextAnalysis__Console__
#define __DigitalTextAnalysis__Console__

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "Constants.h"
#include "Reader.h"

using namespace std;

class Console {
public:
    //Constructor
    Console(string filename);
    
    //Asks the user what action to perform
    void analyze();
    
private:
    Reader* book;
    
    void mostFrequentWords();
    void quotesBySpeaker();
    void trendForWord();
    

    
};

#endif /* defined(__DigitalTextAnalysis__Console__) */
