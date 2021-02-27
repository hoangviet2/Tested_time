//
//  ConMa.hpp
//  ConMa
//
//  Created by Hoang Viet on 22/02/2021.
//

#ifndef ConMa_hpp
#define ConMa_hpp
#include "Location.hpp"
#include <stdio.h>
#include <vector>
class Knight {
private:
    Location knightLocation;
    std::vector<Location> knightMove;
public:
    Knight();
    Knight(Location location):knightLocation{location},knightMove{findMove(knightLocation)}{};
    std::vector<Location> findMove(Location knightLocation);
    bool checkKnightMove(Location location, Location knightLocation);
    void showMove();
    ~Knight(){};
};
#endif /* ConMa_hpp */
