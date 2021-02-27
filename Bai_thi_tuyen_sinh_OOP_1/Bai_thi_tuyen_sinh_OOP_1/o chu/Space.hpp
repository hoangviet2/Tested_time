//
//  Space.hpp
//  Bai_thi_tuyen_sinh_OOP_1
//
//  Created by Hoang Viet on 21/02/2021.
//

#ifndef Space_hpp
#define Space_hpp
#include <string>
#include <stdio.h>
#include <iostream>
class Space {
private:
    int indexFrist;
    int indexLast;
public:
    Space();
    Space(int indFrist,int indLast):indexFrist{indFrist},indexLast{indLast}{std::cout<<"Space created";};
};
#endif /* Space_hpp */
