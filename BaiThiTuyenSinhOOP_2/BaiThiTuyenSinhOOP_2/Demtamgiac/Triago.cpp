//
//  Triago.cpp
//  BaiThiTuyenSinhOOP_2
//
//  Created by Hoang Viet on 21/02/2021.
//

#include "Triago.hpp"
int Triago::factorial(int num){
    if (num==1) {
        return 1;
    }
    return num*factorial(num-1);
}
