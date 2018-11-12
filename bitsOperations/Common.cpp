//
//  Common.cpp
//  bitsOperations
//
//  Created by pc-laptop on 10/31/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "Common.hpp"
#include <cmath>


void printIntAsBinary(int x)
{
    std::string str = binaryFromInt(x);
    printf("%s\n", str.c_str());
}

int intFromBinary(const std::string& number)
{
    int result = 0;
    for(const char& character : number)
    {
        result <<= 1;
        if (character == '1')
        {
            result = result + 1;
        }
    }
    
    return result;
}


std::string binaryFromInt(int x)
{
    std::string result;
    int size = sizeof(x);
    unsigned int mascara = 0x80000000;
    for (int i = 0; i < size * 8; i++)
    {
        if (x & mascara)
        {
            result = result + "1";
        }
        else
        {
            result = result + "0";
        }
        
        mascara >>= 1;
    }
    
    return result;
}

void logExcercies(int exerciseNumber = 0, int subexerciseNumber = 0, std::string exerciseLog = "", bool endExercise = false)
{
    if (subexerciseNumber == 0)
    {
        printf("*********************************************\n");
        printf("*                Exercise # %d\n             \n", exerciseNumber);
        printf("*********************************************\n");
    }
    
    if (subexerciseNumber > 0)
    {
        printf("*********************************************\nSub Exercise #%d.%d\n", exerciseNumber, subexerciseNumber);
        printf("*********************************************\n");
    }
    
    printf("%s\n\n", exerciseLog.c_str());
    
    if (endExercise)
    {
        printf("*********************************************\n");
        printf("*                End Exercise # %d\n         \n", exerciseNumber);
        printf("*********************************************\n\n");
    }
}

std::string binaryFromChar(char charValue)
{
    std::string result;
    int size = sizeof(charValue);
    unsigned int mascara = 0x80000000;
    for (int i = 0; i < size * 8; i++)
    {
        if (charValue & mascara)
        {
            result = result + "1";
        }
        else
        {
            result = result + "0";
        }
        
        mascara >>= 1;
    }
    
    return result;
}
