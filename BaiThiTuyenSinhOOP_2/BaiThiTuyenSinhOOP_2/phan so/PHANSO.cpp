//
//  PHANSO.cpp
//  BaiThiTuyenSinhOOP_2
//
//  Created by Hoang Viet on 21/02/2021.
//

#include <stdio.h>
#include <iostream>
#include <iostream>
#include "PairNumber.hpp"
#include <vector>
#include <fstream>
int main(){
    std::cout<<"hi"<<std::endl;
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("PHANSO.INP");
    Oup.open("PHANSO.OUT");
    if (Inp) {
        int size {};
        Inp>>size;
        std::vector<int> vectorDenominator {};
        std::vector<int> vectorNumerator {};
        for (int i {0}; i<size; ++i) {
            int temp {};
            Inp>>temp;
            vectorNumerator.push_back(temp);
        }
        for (int i {0}; i<size; ++i) {
            int temp {};
            Inp>>temp;
            vectorDenominator.push_back(temp);
        }
        std::vector<Pair> vectorPair {};
        for (int i {0}; i<size; ++i) {
            int numerator {vectorNumerator.at(i)};
            int denominator {vectorDenominator.at(i)};
            Pair temp (numerator,denominator);
            vectorPair.push_back(temp);
        }
        for (int i {0}; i<size-1; ++i) {
            for (int j {i+1}; j<size; ++j) {
                if(vectorPair.at(i)>vectorPair.at(j)){
                    Pair temp = vectorPair.at(i);
                    vectorPair.at(i) = vectorPair.at(j);
                    vectorPair.at(j) = temp;
                }
            }
        }
        for (auto elem:vectorPair) {
            Oup<<elem.getNumerator()<<" ";
        }
        Oup<<std::endl;
        for (auto elem:vectorPair) {
            Oup<<elem.getDenominator()<<" ";
        }
        std::cerr << "Time collapse : " << std::fixed << std::setprecision(3) << 1.000*clock()/CLOCKS_PER_SEC;
    }
    Inp.close();
    Oup.close();
    return 0;
}
