//
//  PAIRLCM.cpp
//  BaiThiTuyenSinhPTNKOOP_1
//
//  Created by Hoang Viet on 20/02/2021.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "Numbers.hpp"
int main01(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("PAIR.INP");
    Oup.open("PAIR.OUT");
    if (Inp) {
        std::vector<Numbers> vectorNumbers {};
        int numElem {};
        Inp>>numElem;
        int zero {0};
        for (int i {numElem}; i>=0; --i) {
            vectorNumbers.push_back(Numbers(zero, i));
            ++zero;
        }
        
        for (int i {0}; i<numElem-1; ++i) {
            for (int j {i+1}; j<numElem; ++j) {
                if(vectorNumbers.at(i).getLargeGeneral()<vectorNumbers.at(j).getLargeGeneral()){
                    Numbers temp {vectorNumbers.at(i)};
                    vectorNumbers.at(i) = vectorNumbers.at(j);
                    vectorNumbers.at(j) = temp;
                }
            }
        }
        Oup<<vectorNumbers.at(0).getLargeGeneral();
    }
    Inp.close();
    Oup.close();
    return 0;
}
