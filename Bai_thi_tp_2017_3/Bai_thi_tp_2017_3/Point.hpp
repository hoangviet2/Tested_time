//
//  Point.hpp
//  Bai_thi_tp_2017_3
//
//  Created by Hoang Viet on 16/02/2021.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>
#include "Coordinates.hpp"
class Point {
private:
    Coordinates coordinates;
    double value;
public:
    
    Point();
    Point(double value, Coordinates coordinates):value{value},coordinates{coordinates}{std::cout<<"Created object with value: "<<value<<std::endl;};
    ~Point(){std::cout<<"Object destroyed!!!"<<std::endl;};
    bool operator<(const Point &rhs) const  {
        if(this->coordinates<rhs.coordinates){
            return true;
        }
        return false;
    }
    bool operator>(const Point &rhs) const  {
        if(this->coordinates>rhs.coordinates){
            return true;
        }
        return false;
    }
   
    bool operator!=(const Point &rhs) const  {
        if(this->coordinates!=rhs.coordinates){
            return true;
        }
        return false;
    }
    bool operator==(const Point &rhs) const  {
        return this->value > rhs.value;
    }
};
#endif /* Point_hpp */
