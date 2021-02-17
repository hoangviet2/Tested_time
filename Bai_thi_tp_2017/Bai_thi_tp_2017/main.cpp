//
//  main.cpp
//  Bai_thi_tp_2017
//
//  Created by Hoang Viet on 15/02/2021.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

int main_1() {
    int num_a {};
    int num_b {};
    int reusult {0};
    std::vector<int> vec_num_a {};
    std::vector<int> vec_num_b {};
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("2MULT.INP");
    Oup.open("2MULT.OUT");
    if(Inp){
        Inp>>num_a;
        Inp>>num_b;
        while (num_a) {
            vec_num_a.push_back(num_a%10);
            num_a /= 10;
        }
        while (num_b) {
            vec_num_b.push_back(num_b%10);
            num_b /= 10;
        }
        for (auto elem:vec_num_a){
            for(auto elems:vec_num_b){
                reusult += elem*elems;
            }
        }
        Oup<<reusult;
    }
    Inp.close();
    Oup.close();
    return 0;
}
