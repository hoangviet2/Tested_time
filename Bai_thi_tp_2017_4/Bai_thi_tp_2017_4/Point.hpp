//
//  Point.hpp
//  Bai_thi_tp_2017_4
//
//  Created by Hoang Viet on 16/02/2021.
//

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>
class Point {
private:
    int x_val;
    int y_val;
    int value;
   // int max_x;
   // int max_y;
public:
    Point();
    Point(int x,int y,int val):x_val{x},y_val{y},value{val}{};
  //  Point(int,int,int,int,int);
    ~Point(){std::cout<<"Bye bye Object";};
    bool operator<(const Point &rhs) const  {
        if((this->x_val-rhs.x_val) == -1 || (this->y_val-rhs.y_val) == -1){
            return true;
        }
        return false;
    }
    bool operator>(const Point &rhs) const  {
        if((this->x_val-rhs.x_val) == 1 || (this->y_val-rhs.y_val) == 1){
            return true;
        }
        return false;
    }
    bool operator!=(const Point &rhs) const  {
        if((this->y_val==rhs.y_val) && (this->x_val-rhs.x_val ==1 || this->x_val-rhs.x_val == -1)){
            return true;
        }
        return false;
    }
    bool operator==(const Point &rhs) const  {
        return this->value > rhs.value;
    }
};
#endif /* Point_hpp */
