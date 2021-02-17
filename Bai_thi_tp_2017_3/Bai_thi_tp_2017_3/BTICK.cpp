//
//  BTICK.cpp
//  Bai_thi_tp_2017_3
//
//  Created by Hoang Viet on 16/02/2021.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

int main_2(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("BTICK.INP");
    Oup.open("BTICK.OUT");
    if(Inp){
        int times_trans {};
        int price_sing {};
        int times_gr {};
        int price_gr {};
        Inp>>times_trans;
        Inp>>times_gr;
        Inp>>price_sing;
        Inp>>price_gr;
        int result {0};
        if(times_trans == times_gr){
            result = price_gr;
        }else if(times_trans<times_gr){
            result = price_sing*times_trans;
        }else{
            result = ((times_trans/times_gr)*price_gr+(times_trans%times_gr)*price_sing);
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return 0;
}
