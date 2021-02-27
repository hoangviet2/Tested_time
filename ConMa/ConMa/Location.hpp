//
//  Location.hpp
//  ConMa
//
//  Created by Hoang Viet on 22/02/2021.
//

#ifndef Location_hpp
#define Location_hpp

#include <stdio.h>
#include <iostream>
class Location {
private:
    int x;
    int y;
public:
    Location();
    Location(int xVal,int yVal);
    int getxValue(){return x;};
    int getyValue(){return y;};
    ~Location(){};
};
#endif /* Location_hpp */
