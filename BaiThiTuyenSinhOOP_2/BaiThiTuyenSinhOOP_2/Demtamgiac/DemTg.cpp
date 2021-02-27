//
//  DemTg.cpp
//  BaiThiTuyenSinhOOP_2
//
//  Created by Hoang Viet on 21/02/2021.
//

#include <iostream>
#include <fstream>
#include "Triago.hpp"
int main01(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("DEMTG.INP");
    Oup.open("DEMTG.OUT");
    if (Inp) {
        int dgloai1 {};
        int dgloai2 {};
        Inp>>dgloai1;
        Inp>>dgloai2;
        Triago tamgiac (dgloai1, dgloai2);
        Oup<<tamgiac.getNumbersOfSmallTriago();
    }
    Inp.close();
    Oup.close();
    return 0;
}
