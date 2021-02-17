//
//  BTICK.cpp
//  Bai_thi_tp_2017_4
//
//  Created by Hoang Viet on 16/02/2021.
//
#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

int main_2() {
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
        if (a == b) {
            result = d;
        }else if (a < b){
            result = a*c;
        }else{
            result = ((a/b)*d+(a%b)*c);
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return 0;
}
