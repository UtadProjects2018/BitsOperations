//
//  Exercise2.cpp
//  bitsOperations
//
//  Created by pc-laptop on 11/5/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "Exercise2.hpp"


void loadExercise2()
{
    // Practica 2.
   //2.1
    int numberToApplyNotOperator = 2;
    std::ostringstream exercise2_1;
    exercise2_1 << "Applying NOT to the following base ten number " << numberToApplyNotOperator << std::endl;
    exercise2_1 << binaryFromInt(numberToApplyNotOperator) << std::endl;
    exercise2_1 << "After Applying NOT ";
    exercise2_1 << binaryFromInt(~numberToApplyNotOperator);
    logExcercies(2, 0, exercise2_1.str(), false);
    
    
    //2.2
    std::ostringstream exercise2_2;
    int numberToApplyShiftOperator1 = 10<<1;
    exercise2_2 << "10 shift << 1  " << numberToApplyShiftOperator1 << std::endl;
    exercise2_2 << binaryFromInt(numberToApplyShiftOperator1) << std::endl;;
    
    int numberToApplyShiftOperator2 = 10<<2;
    exercise2_2 << "10 shift << 2  " << numberToApplyShiftOperator2 << std::endl;
    exercise2_2 << binaryFromInt(numberToApplyShiftOperator2) << std::endl;;
    
    int numberToApplyShiftOperator5 = 10<<5;
    exercise2_2 << "10 shift << 5  " << numberToApplyShiftOperator5 << std::endl;
    exercise2_2 << binaryFromInt(numberToApplyShiftOperator5) << std::endl;
    
    int numberToApplyShiftOperator6 = 10<<6;
    exercise2_2 << "10 shift << 6  " << numberToApplyShiftOperator6 << std::endl;
    exercise2_2 << binaryFromInt(numberToApplyShiftOperator6) << std::endl;
    
    logExcercies(2, 2, exercise2_2.str(), false);
    
    //2.3
    std::ostringstream exercise2_3;
    int signedNumber = intFromBinary("11111111111111111111111111111111");
    unsigned int unsignedNumber = intFromBinary("11111111111111111111111111111111");
    exercise2_3 << "signed= " << signedNumber << std::endl;
    logExcercies(2, 3, exercise2_3.str(), false);
    printf("unsigned as signed=%d\n", unsignedNumber);
    printf("unsigned as unsigned=%u\n", unsignedNumber);
    
    //2.3.1
    printf("shift left signedNumber << 1 =%d\n", signedNumber << 1);
    printf("shift left unsignedNumber << 1 =%d\n", unsignedNumber << 1);
    
    printf("shift right signedNumber >> 1 =%d\n", signedNumber >> 1);
    printf("shift right unsignedNumber >> 1 =%d\n", unsignedNumber >> 1);
    
    //2.3.2
    printf("+ 1 to signed number : %d\n", signedNumber + 1);
    unsigned int zero = 0;
    printf("- 1 to usigned zero: %u\n", zero - 1);
    
    //2.3.3
    int pink    = 0xCC6699;
    int red     = 0xFF0000;
    int green   = 0x00FF00;
    int blue    = 0x0000FF;
    
    printf("red= %d\n", (pink & red) >> 16);
    printf("green= %d\n", (pink & green) >> 8);
    printf("blue= %d\n", (pink & blue));
    
    logExcercies(2, 3, "", true);
}

