//
//  Identifier.hpp
//  BaiThiTuyenSinhPTNKOOP_1
//
//  Created by Hoang Viet on 20/02/2021.
//

#ifndef Identifier_hpp
#define Identifier_hpp

#include <stdio.h>
class Identifier{
private:
    int times;
    int id;
public:
    Identifier();
    Identifier(int times,int id);
    int getTime(){return times;};
    int getId(){return id;};
    ~Identifier(){};
};
#endif /* Identifier_hpp */
