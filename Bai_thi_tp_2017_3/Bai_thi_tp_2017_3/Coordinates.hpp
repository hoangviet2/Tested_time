//
//  Coordinates.hpp
//  Bai_thi_tp_2017_3
//
//  Created by Hoang Viet on 16/02/2021.
//

#ifndef Coordinates_hpp
#define Coordinates_hpp

#include <iostream>
class Coordinates {
private:
    int x;
    int y;
public:
    Coordinates ();
    Coordinates (int x, int y):x{x},y{y}{std::cout<<"Created Coordinates with x: "<<x<<" :y: "<< y <<std::endl;};
    ~Coordinates(){std::cout<<"Destroyed Object Coordinates!!!"<<std::endl;};
    bool operator<(const Coordinates &rhs) const  {
        if(((this->x-rhs.x) >= -2 && (this->x-rhs.x)<=-1)|| ((this->y-rhs.y) >= -2 && (this->y-rhs.y)<=-1)){
            return true;
        }
        return false;
    }
    bool operator>(const Coordinates &rhs) const  {
        if(((this->x-rhs.x) >= 2 && (this->x-rhs.x)<=1)|| ((this->y-rhs.y) >= 2 && (this->y-rhs.y)<=1)){
            return true;
        }
        return false;
    }
    bool operator!=(const Coordinates &rhs) const  {
        if((this->y==rhs.y) && (this->x-rhs.x ==1 || this->x-rhs.x == -1 || this->x-rhs.x == 2 || this->x-rhs.x == -2)){
            return true;
        }
        return false;
    }
};

#endif /* Coordinates_hpp */
