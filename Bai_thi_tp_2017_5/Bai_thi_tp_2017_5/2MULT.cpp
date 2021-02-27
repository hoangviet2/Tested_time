//
//  2MULT.cpp
//  Bai_thi_tp_2017_5
//
//  Created by Hoang Viet on 25/02/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>

int main1(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("2MULT.INP");
    Oup.open("2MULT.OUT");
    if (Inp) {
        int numA {};
        std::vector<int> vectorNumA {};
        int numB {};
        std::vector<int> vectorNumB {};
        Inp>>numA;
        Inp>>numB;
        while (numA>0) {
            vectorNumA.push_back(numA%10);
            numA/=10;
        }
        while (numB>0) {
            vectorNumB.push_back(numB%10);
            numB/=10;
        }
        int result {0};
        for(auto elem:vectorNumA){
            for(auto elems:vectorNumB){
                result += elem*elems;
            }
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return 0;
}
