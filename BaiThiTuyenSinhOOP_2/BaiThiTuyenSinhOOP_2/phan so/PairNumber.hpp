//
//  PairNumber.hpp
//  BaiThiTuyenSinhOOP_2
//
//  Created by Hoang Viet on 21/02/2021.
//

#ifndef PairNumber_hpp
#define PairNumber_hpp

#include <stdio.h>
class Pair {
private:
    int numerator;
    int denominator;
    double value;
public:
    Pair();
    Pair(int numerator,int denominator):numerator{numerator},denominator{denominator},value{double(numerator)/double(denominator)}{};
    bool operator<(const Pair &rhs);
    bool operator>(const Pair &rhs);
    int getNumerator() {return numerator;};
    int getDenominator() {return denominator;};
    ~Pair(){};
};
#endif /* PairNumber_hpp */
