//
//  BTICK.cpp
//  Bai_Thi_tp_2017_2
//
//  Created by Hoang Viet on 15/02/2021.
//

#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;
int main_2(){
    int kq {0};
    int times {};
    int price_per_single {};
    int tick_per_gr {};
    int price_per_gr {};
    ifstream Inp;
    ofstream Oup;
    Inp.open("BTICK.INP");
    Oup.open("BTICK.OUT");
    if(Inp){
        Inp>>times;
        Inp>>tick_per_gr;
        Inp>>price_per_single;
        Inp>>price_per_gr;
        if (times==tick_per_gr){
            kq = price_per_gr;
        }else if (times<tick_per_gr){
            kq = price_per_single*times;
        }else{
            kq = ((times/tick_per_gr)*price_per_gr+(times%tick_per_gr)*price_per_single);
        }
        Oup<<kq;
    }
    Inp.close();
    Oup.close();
    return 0;
}
