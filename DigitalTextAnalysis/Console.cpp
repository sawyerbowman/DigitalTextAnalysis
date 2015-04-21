//
//  Console.cpp
//  DigitalTextAnalysis
//
//  Created by Sawyer Bowman on 4/13/15.
//  Copyright (c) 2015 Sawyer Bowman. All rights reserved.
//

#include "Console.h"

/**
 *Initializes a new console
 */

Console::Console(string filename){
    this->book = new Reader(filename);
}

