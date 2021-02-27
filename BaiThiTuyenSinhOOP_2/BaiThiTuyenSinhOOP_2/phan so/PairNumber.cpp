//
//  PairNumber.cpp
//  BaiThiTuyenSinhOOP_2
//
//  Created by Hoang Viet on 21/02/2021.
//

#include "PairNumber.hpp"
bool Pair::operator<(const Pair &rhs){
    if (this->value<rhs.value) {
        return true;
    }
    return false;
}
bool Pair::operator>(const Pair &rhs){
    if (this->value>rhs.value) {
        return true;
    }
    return false;
}
