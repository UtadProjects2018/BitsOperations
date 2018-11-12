//
//  Exercise5.cpp
//  bitsOperations
//
//  Created by pc-laptop on 11/5/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "Exercise5.hpp"

void loadExercise5()
{
    // Practica 5.
    int a = 4;
    int b = -4;
    
    //5.1
    std::ostringstream exercise5_0;
    exercise5_0 << "Base 2 from a="<< a << " binary= "<< binaryFromInt(a) << std::endl;
    exercise5_0 << "Base 2 from b="<< b << " binary= "<< binaryFromInt(b) << std::endl;
    exercise5_0 << "Base 2 from a+b="<< a + b << " binary= "<< binaryFromInt(a+b) << std::endl;
    logExcercies(5, 0, exercise5_0.str(), false);
    
    //5.3
    char charValue = (char)255;
    unsigned char unsignedCharValue = (unsigned char)255;
    
    std::ostringstream exercise5_1;
    exercise5_1 << "Base 2 from charValue=" << charValue << " binary= "<< binaryFromChar(charValue) << std::endl;
    exercise5_1 << "Base 2 from unsignedCharValue=" << unsignedCharValue << " binary= "<< binaryFromChar(unsignedCharValue) << std::endl;
    logExcercies(5, 3, exercise5_1.str(), false);
    
    //5.4
    //output both are equal
    //Base 2 from charValue=\377 binary= 11111111
    //Base 2 from unsignedCharValue=\377 binary= 11111111
    
    //5.5
    char charValue2 = (char)128;
    unsigned char unsignedCharValue2 = (char)-128;
    
    std::ostringstream exercise5_5;
    exercise5_5 << "Base 2 from charValue=" << charValue2 << " binary= "<< binaryFromChar(charValue2) << std::endl;
    exercise5_5 << "Base 2 from unsignedCharValue=" << unsignedCharValue2 << " binary= "<< binaryFromChar(unsignedCharValue2) << std::endl;
    logExcercies(5, 5, exercise5_5.str(), true);
    
    //5.6
    //output both are equal
    //Base 2 from charValue=\200 binary= 11111111
    //Base 2 from unsignedCharValue=\200 binary= 11111111
}
