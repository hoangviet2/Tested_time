//
//  Btick.cpp
//  Bai_thi_tp_2017_6
//
//  Created by Hoang Viet on 07/03/2021.
//

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <fstream>

int main() {
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("BTICK.INP");
    Oup.open("BTICK.OUT");
    if (Inp) {
        int a,b,c,d ;
        int kq {0} ;
        Inp>>a;
        Inp>>b;
        Inp>>c;
        Inp>>d;
        if(a==b){
            kq = d;
        }else if (a<b){
            kq = a*c;
        }else{
            kq = (a/b)*d+(a%d)*c;
        }
        Oup<<kq;
    }
    Inp.close();
    Oup.close();
    return 0;
}
