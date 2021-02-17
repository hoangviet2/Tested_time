//
//  BTICK_2.cpp
//  Bai_thi_tp_2017_4
//
//  Created by Hoang Viet on 16/02/2021.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include "Traveler.hpp"

int main() {
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("BTICK.INP");
    Oup.open("BTICK.OUT");
    if (Inp) {
        int a {};
        int b {};
        int c {};
        int d {};
        int result = 0;
        Inp>>a;
        Inp>>b;
        Inp>>c;
        Inp>>d;
        if (a==b) {
            Travel reslt(true, false, a/b);
            result = reslt.cost();
            Oup<<result;
        }else if(a<b){
            Travel reslt(false, true, a);
            result = reslt.cost();
            Oup<<result;
        }else{
            Travel reslt_vele(false, true,a%b);
            Travel reslt_vethang(true,false,a/b);
            result = reslt_vele.cost()+ reslt_vethang.cost();
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return 0;
}
