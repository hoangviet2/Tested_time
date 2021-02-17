//
//  main.cpp
//  Bai_thi_tp_2017_4
//
//  Created by Hoang Viet on 16/02/2021.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

int main_1() {
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("2MULT.INP");
    Oup.open("2MULT.OUT");
    if (Inp) {
        int num_a {};
        std::vector<int> vec_a {};
        Inp>> num_a;
        while (num_a>0) {
            vec_a.push_back(num_a%10);
            num_a/=10;
        }
        int num_b {};
        std::vector<int> vec_b {};
        Inp>> num_b;
        while (num_b>0) {
            vec_b.push_back(num_b%10);
            num_b/=10;
        }
        int result {0};
        for (auto elem:vec_a) {
            for(auto elems:vec_b){
                result += elem*elems;
            }
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return 0;
}
