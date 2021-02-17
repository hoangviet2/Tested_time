//
//  Traveler.cpp
//  Bai_thi_tp_2017_4
//
//  Created by Hoang Viet on 16/02/2021.
//

#include "Traveler.hpp"
#include <cmath>
#include <iostream>
int Travel::cost(){
    if (is_vethang==true) {
        return solan*120;
    }else if(is_vele==true){
        return solan*17;
    }
    return 0;
}
