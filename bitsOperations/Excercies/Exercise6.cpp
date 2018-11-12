//
//  Exercise6.cpp
//  bitsOperations
//
//  Created by pc-laptop on 11/5/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "Exercise6.hpp"
#include <math.h>

void loadExercise6()
{
    // Practica 6.
    
    //6.1
    float point2 = 0.2f;
    logExcercies(6, 0, "", false);
    printf("%1.16f\n", point2);
    
    //6.2
    //output
    // 0.2000000029802322 puts a large decimals value
    //6.3
    float point3 = 0.1f;
    printf("%1.16f\n", point3);
    
    //6.4, 6.5, 6.6
    float sum = 0;
    for (int i = 0; i < 100; ++i)
    {
        sum += point3;
    }
    float product = point3 * 100;
    std::ostringstream exercise6_5;
    exercise6_5 << "sum="<< sum << " product= "<< product << std::endl;
    logExcercies(6, 4, exercise6_5.str(), false);

    if(sum == product)
    {
        printf("the numbers are equal\n");
    }
    else
    {
        printf("the numbers are not equal using a regular comparison\n");
    }


    if(abs(sum - product) < 0.0001f)
    {
        printf("the numbers are equal\n");
    }
    
    int intSum = static_cast<int>(sum);
    int intProduct = static_cast<int>(product);
    
    if(intSum == intProduct)
    {
        printf("After casting to INT value, the numbers are equal\n");
    }
}
