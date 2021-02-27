//
//  Numbers.cpp
//  BaiThiTuyenSinhPTNKOOP_1
//
//  Created by Hoang Viet on 20/02/2021.
//

#include "Numbers.hpp"
int Numbers::findLCM(int numberA, int numberB){
    if (numberA == 0 || numberB == 0){
        return numberA + numberB;
    }
    while (numberA != numberB){
        if (numberA > numberB){
            numberA -= numberB;
        }else{
            numberB -= numberA;
        }
    }
    return numberA;
}
