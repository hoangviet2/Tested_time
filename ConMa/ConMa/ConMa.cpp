//
//  ConMa.cpp
//  ConMa
//
//  Created by Hoang Viet on 22/02/2021.
//

#include "ConMa.hpp"
#include "Location.hpp"
#include <vector>
std::vector<Location>  Knight::findMove(Location knightLocation){
    std::vector<Location> result {};
    for (int i {knightLocation.getxValue()-2}; i<=knightLocation.getxValue()+2; ++i) {
        for (int j {knightLocation.getyValue()-2}; j<=knightLocation.getyValue()+2; ++j) {
            if(checkKnightMove(Location(i, j),knightLocation)){
                result.push_back(Location(i, j));
            }
        }
    }
    return result;
}
void Knight::showMove(){
    std::cout<<"[ ";
    for (auto elem:knightMove) {
        if (elem.getxValue()>=0 && elem.getyValue()>=0 && elem.getxValue()<=8 && elem.getyValue()<=8) {
            std::cout<<elem.getxValue()<<" : "<<elem.getyValue()<<std::endl;
        }
    }
    std::cout<<" ]";
}
bool Knight::checkKnightMove(Location location , Location knightLocation){
    if(location.getxValue()==knightLocation.getxValue()-2 || location.getxValue()==knightLocation.getxValue()+2 || location.getyValue()==knightLocation.getyValue()-2 || location.getyValue()==knightLocation.getyValue()+2){
        if(location.getxValue()!=knightLocation.getxValue() && location.getyValue()!=knightLocation.getyValue()){
            if((location.getxValue()==knightLocation.getxValue()-2 && location.getyValue()==knightLocation.getyValue()-2) || (location.getxValue()==knightLocation.getxValue()+2 && location.getyValue()==knightLocation.getyValue()+2) || (location.getxValue()==knightLocation.getxValue()+2 && location.getyValue()==knightLocation.getyValue()-2) || (location.getxValue()==knightLocation.getxValue()-2 && location.getyValue()==knightLocation.getyValue()+2)){
                return false;
            }else{
                return true;
            }
        }
    }
    return false;
}

