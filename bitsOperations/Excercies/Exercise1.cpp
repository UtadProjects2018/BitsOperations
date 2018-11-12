//
//  Exercise1.cpp
//  bitsOperations
//
//  Created by pc-laptop on 11/5/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "Exercise1.hpp"

void loadExercise1()
{
    // Practica 1.
    std::ostringstream exercise1_0;
    exercise1_0 << "Base 10 from 1010 is ... " << intFromBinary("1010");
    logExcercies(1, 0, exercise1_0.str(), false);
    
    // Practica 1.1
    std::ostringstream exercise1_1;
    exercise1_1 << "print int = 10 to binary... " << binaryFromInt(10);
    logExcercies(1, 1, exercise1_1.str(), true);
}
