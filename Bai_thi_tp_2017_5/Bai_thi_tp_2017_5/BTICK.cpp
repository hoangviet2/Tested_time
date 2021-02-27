//
//  BTICK.cpp
//  Bai_thi_tp_2017_5
//
//  Created by Hoang Viet on 25/02/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>

int main2(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("BTICK.INP");
    Oup.open("BTICK.OUT");
    if (Inp) {
        int times;
        int timesPerBox;
        int price;
        int pricePerBox;
        Inp>>times;
        Inp>>timesPerBox;
        Inp>>price;
        Inp>>pricePerBox;
        int result {0};
        if(times<timesPerBox){
            result = times*price;
        }else if(times == timesPerBox){
            result = pricePerBox;
        }else{
            result = (times/timesPerBox)*pricePerBox+(times%timesPerBox)*price;
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return 0;
}
