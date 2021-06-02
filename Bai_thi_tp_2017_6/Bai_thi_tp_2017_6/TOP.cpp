//
//  TOP.cpp
//  Bai_thi_tp_2017_6
//
//  Created by Hoang Viet on 06/03/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
class Cordinate {
private:
    int x;
    int y;
public:
    Cordinate();
    Cordinate(int x_val, int y_val):x{x_val},y{y_val}{};
    int getX(){return x;};
    int getY(){return y;};
    ~Cordinate(){std::cout<<"Destroy object"<<std::endl;};
};
class Point {
private:
    Cordinate location;
    int value;
public:
    Point();
    Point(Cordinate loca, int val):location{loca},value{val}{std::cout<<"Create object "<<"With value: "<<this->geValue()<<std::endl;};
    int geValue(){return value;};
    bool isNear(Point,Point);
    bool isTop(Point,std::vector<Point>);
};
bool Point::isNear(Point start, Point elem){
        if(start.location.getX() != elem.location.getX() && start.location.getY() != elem.location.getY() ){
            if (abs(start.location.getX() - elem.location.getX()) <2 && abs(start.location.getY() - elem.location.getX()) <2 ) {
                return true;
            }else{
                return false;
            }
        }
    return false;
}
bool Point::isTop(Point start, std::vector<Point> vec){
    for (auto elem:vec) {
        if (start.geValue()>elem.geValue()) {
            continue;
        }else{
            return false;
        }
    }
    return true;
}
int main1(){
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
        std::vector<Point> matrix {};
        for (int i {0} ; i<numX; ++i) {
            for (int j {0}; j<numY; ++j) {
                int temp ;
                Inp>>temp;
                matrix.push_back(Point(Cordinate(i, j), temp));
            }
        }
        for (auto elem:matrix) {
            std::vector<Point> nearPoint ;
            for (auto elems:matrix){
                if(elems.isNear(elem, elems)){
                    nearPoint.push_back(elems);
                }
            }
            if(elem.isTop(elem, nearPoint)){
                ++result;
            }
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return 0;
}
