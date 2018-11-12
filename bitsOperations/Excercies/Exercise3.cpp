//
//  Exercise3.cpp
//  bitsOperations
//
//  Created by pc-laptop on 11/5/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "Exercise3.hpp"
#include <math.h>

void loadExercise3()
{
    // Practica 3.
    //3.1
    std::ostringstream exercise3_1;
    exercise3_1 << "square root for -1 ->" << sqrt(-1);
    // output: nan (Not a number)
    logExcercies(3, 0, exercise3_1.str(), false);
    float sqrtNegativeNumber = sqrt(-1);
    printf("%f isnan:%s isinf:%s\n",sqrtNegativeNumber, isnan(sqrtNegativeNumber) ?
           "true":"false",isinf(sqrtNegativeNumber) ? "true":"false");
    //3.2
    std::ostringstream exercise3_2;
    exercise3_2 << "divide 0/0 ->" << 0/0;
    // output: 32088 (garbage), Xcode shows a warning "Division by zer0 is undefined."
    logExcercies(3, 2, exercise3_2.str(), false);
    float zeroDivision = 0/0;
    printf("%f isnan:%s isinf:%s\n",zeroDivision, isnan(zeroDivision) ?
           "true":"false",isinf(zeroDivision) ? "true":"false");
    
    //3.3
    std::ostringstream exercise3_3;
    exercise3_3 << "divide 1.0f/0.0f ->" << 1.0f/ 0.0f;
    float divisionFloat = 1.0f/ 0.0f;
    printf("%f isnan:%s isinf:%s\n",divisionFloat, isnan(divisionFloat) ?
           "true":"false",isinf(divisionFloat) ? "true":"false");
    // output: inf
    logExcercies(3, 3, exercise3_3.str(), true);
}
