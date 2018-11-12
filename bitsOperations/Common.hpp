//
//  Common.hpp
//  bitsOperations
//
//  Created by pc-laptop on 10/31/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef Common_hpp
#define Common_hpp

#include <stdio.h>
#include <iostream>
#include <sstream>

#endif /* Common_hpp */

int intFromBinary(const std::string& number);
std::string binaryFromChar(char charValue);
std::string binaryFromInt(int x);
void printIntAsBinary(int x);
void logExcercies(int exerciseNumber, int subexerciseNumber, std::string exerciseLog, bool endExercise);
