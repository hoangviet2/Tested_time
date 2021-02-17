//
//  Traveler.hpp
//  Bai_thi_tp_2017_4
//
//  Created by Hoang Viet on 16/02/2021.
//

#ifndef Traveler_hpp
#define Traveler_hpp

#include <stdio.h>
class Travel {
private:
    bool is_vethang;
    bool is_vele;
    int solan ;
public:
    Travel();
    Travel(bool is_vethang, bool is_vele, int solan):is_vethang{is_vethang},is_vele{is_vele},solan{solan}{};
    ~Travel(){};
    int cost ();
};
    
#endif /* Traveler_hpp */
