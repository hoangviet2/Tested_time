//
//  Location.cpp
//  ConMa
//
//  Created by Hoang Viet on 22/02/2021.
//

#include "Location.hpp"
Location::Location (int xVal,int yVal){
    if (xVal>=0 && yVal>=0 && xVal<=8 && yVal<=8) {
        x = xVal;
        y = yVal;
    }else{
        x = -100;
        y = -100;
    }
    
}
