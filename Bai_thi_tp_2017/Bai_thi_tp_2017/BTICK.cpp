//
//  BTICK.cpp
//  Bai_thi_tp_2017
//
//  Created by Hoang Viet on 15/02/2021.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

int main_2(){
    int solan {};
    int price_per_tick {};
    int ticks_per_gr {};
    int price_per_gr {};
    int kq {};
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("BTICK.INP");
    Oup.open("BTICK.OUT");
    if (Inp) {
        Inp>>solan;
        Inp>>ticks_per_gr;
        Inp>>price_per_tick;
        Inp>>price_per_gr;
        if(solan == ticks_per_gr){
            kq = price_per_gr;
        }else if(solan<ticks_per_gr){
            kq = solan*price_per_tick;
        }else{
            kq = ((solan%ticks_per_gr)*price_per_tick+(solan/ticks_per_gr)*price_per_gr);
        }
        Oup<<kq;
    }
    Inp.close();
    Oup.close();
    return 0;
}
