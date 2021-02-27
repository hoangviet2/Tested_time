//
//  Triago.hpp
//  BaiThiTuyenSinhOOP_2
//
//  Created by Hoang Viet on 21/02/2021.
//

#ifndef Triago_hpp
#define Triago_hpp

#include <stdio.h>
class Triago {
private:
    int numbersOfLine1;
    int numbersOfLine2;
    int numbersOfSmallTriago;
public:
    Triago();
    Triago(int line1,int line2):numbersOfLine1{line1},numbersOfLine2{line2},numbersOfSmallTriago{2*line2*factorial(line1+1)}{};
    int factorial(int a);
    int getNumbersOfSmallTriago() {return numbersOfSmallTriago;};
    ~Triago(){};
};
#endif /* Triago_hpp */
