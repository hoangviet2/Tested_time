//
//  Numbers.hpp
//  BaiThiTuyenSinhPTNKOOP_1
//
//  Created by Hoang Viet on 20/02/2021.
//

#ifndef Numbers_hpp
#define Numbers_hpp

#include <stdio.h>
class Numbers {
private:
    int frist;
    int second;
    int LeastCommonMultiple;
public:
    Numbers();
    Numbers(int frist,int second):frist{frist},second{second},LeastCommonMultiple{frist*second/findLCM(frist, second)} {};
    int findLCM(int numberA, int numberB);
    int getLargeGeneral(){return LeastCommonMultiple;};
    ~Numbers(){};
};
#endif /* Numbers_hpp */
