//
//  TOP.cpp
//  Bai_thi_tp_2017_5
//  Created by Hoang Viet on 25/02/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
class Location{
private:
    int x;
    int y;
public:
    Location(){};
    Location(int,int);
    int getX(){return x;};
    int getY(){return y;};
    bool isNear(const Location &rhs) const;
    ~Location(){std::cout<<"Bye-bye location object"<<std::endl;};
};
Location::Location (int xVal,int yVal):x{xVal},y{yVal}{
    std::cout<<"Created a location [ "<<getX()<<" : "<<getY()<<" ]"<<std::endl;
}
bool Location::isNear(const Location &rhs) const{
    if ( ((abs(this->x-rhs.x)==1) && (abs(this->y-rhs.y) ==1 || abs(this->y-rhs.y) == 0)) || ((abs(this->y-rhs.y)==1) && (abs(this->x-rhs.x) ==1 || abs(this->x-rhs.x) == 0)) ) {
        return true;
    }
    return false;
}
class Point {
private:
    Location locationOfPoint;
    int value;
public:
    Point(){};
    Point(Location,int);
    int getValue(){return value;};
    bool operator>(const Point &rhs) const;
    ~Point(){std::cout<<"Bye-bye point object"<<std::endl;};
};
Point::Point (Location location,int Value):locationOfPoint{location},value{Value}{
    std::cout<<"Created a point with a value [ "<<locationOfPoint.getX()<<" : "<<locationOfPoint.getY()<<" : "<<getValue()<<" ]"<<std::endl;
}
bool Point::operator>(const Point &rhs) const{
    if (this->locationOfPoint.isNear(rhs.locationOfPoint) && this->value>rhs.value) {
        return true;
    }
    return false;
}
bool checkTop(std::vector<Point> element,Point point);
int main(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("TOP.INP");
    Oup.open("TOP.OUT");
    if(Inp){
        int numX {};
        int numY {};
        int result {0};
        Inp>>numX;
        Inp>>numY;
        std::vector<std::vector<Point>> matrix (numX ,std::vector<Point> (numY));
        std::vector<Point> matrixElement;
        for (int i {0} ; i<numX; ++i) {
            for (int j {0}; j<numY; ++j) {
                int temp {};
                Inp>>temp;
                Point tempPoint (Location(i, j), temp);
                matrix.at(i).at(j) = tempPoint;
            }
        }
        for (auto item:matrix) {
            for (auto elem:item) {
                matrixElement.push_back(elem);
            }
        }
        for(auto elem:matrixElement){
            if (checkTop(matrixElement, elem)) {
                ++result;
            }
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return 0;
}
bool checkTop(std::vector<Point> element,Point point) {
    bool result {false};
    for (auto elem:element) {
        if (point > elem) {
            result = true;
        }else{
            result = false;
        }
    }
    return result;
}
