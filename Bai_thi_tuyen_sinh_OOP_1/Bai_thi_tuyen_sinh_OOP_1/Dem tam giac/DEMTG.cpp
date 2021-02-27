//
//  DEMTG.cpp
//  Bai_thi_tuyen_sinh_OOP_1
//
//  Created by Hoang Viet on 17/02/2021.
//

#include <iostream>
#include <vector>
#include <fstream>
#include "DuongThang.hpp"


int main_1(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("DEMTG.INP");
    Oup.open("DEMTG.OUT");
    if(Inp){
        int num_line_1 {};
        Inp>>num_line_1;
        int num_line_2 {};
        Inp>>num_line_2;
        Triago tamgiac (num_line_1, num_line_2);
        Oup<<tamgiac.small_triago();
    }
    
    Inp.close();
    Oup.close();
    return 0;
}
