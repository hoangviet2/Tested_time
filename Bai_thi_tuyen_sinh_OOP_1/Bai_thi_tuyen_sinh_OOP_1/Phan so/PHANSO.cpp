//
//  PHANSO.cpp
//  Bai_thi_tuyen_sinh_OOP_1
//
//  Created by Hoang Viet on 17/02/2021.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <set>
#include "Fraction.hpp"

int main_3(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("PHANSO.INP");
    Oup.open("PHANSO.OUT");
    if (Inp) {
        
        int size {};
        std::vector<int> vecdenominator;
        std::vector<int> vecnumerator;
        Inp>>size;
        for (int i{0}; i<size; ++i) {
            int temp {};
            Inp>>temp;
            vecdenominator.push_back(temp);
        }
        for (int i{0}; i<size; ++i) {
            int temp {};
            Inp>>temp;
            vecnumerator.push_back(temp);
        }
        std::vector<Fraction> vectorElem {};
        for (int i{0}; i<size; ++i) {
            Fraction temp (vecdenominator.at(i), vecnumerator.at(i));
            vectorElem.push_back(temp);
        }
        for (int i {0}; i<size-1; ++i) {
            for (int j {i+1}; j<size; ++j) {
                if(vectorElem.at(i)>vectorElem.at(j)){
                    Fraction temp {vectorElem.at(i)};
                    vectorElem.at(i) = vectorElem.at(j);
                    vectorElem.at(j) = temp;
                }
            }
        }
        for(auto element:vectorElem){
            Oup<<element.getdenominator()<<" ";
        }
        Oup<<std::endl;
        for(auto element:vectorElem){
            Oup<<element.getnumerator()<<" ";
        }
    }
    Inp.close();
    Oup.close();
    return 0;
}
