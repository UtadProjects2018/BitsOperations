//
//  Exercise4.cpp
//  bitsOperations
//
//  Created by pc-laptop on 11/5/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "Exercise4.hpp"

void loadExercise4()
{
    // Practica 4.
    //4.1
    std::ostringstream exercise4_1;
    exercise4_1 << "456 % 1 ->" << 456 % 1 << std::endl;
    exercise4_1 << "456 % 10 ->" << 456 % 10 << std::endl;
    exercise4_1 << "456 % 1000 ->" << 456 % 1000 << std::endl;
    logExcercies(4, 0, exercise4_1.str(), false);
    
    //4.2
    std::ostringstream exercise4_2;
    for (int i = 0; i <= 10; i ++)
    {
        exercise4_2 << "i=" << i << " i % 2 = " << i % 2 << std::endl;
    }
    logExcercies(4, 1, exercise4_2.str(), true);
}
