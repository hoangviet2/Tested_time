//
//  main.cpp
//  Bai_thi_tp_2017_3
//
//  Created by Hoang Viet on 16/02/2021.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

int main_1() {
    // insert code here...
    std::ifstream inp;
    std::ofstream oup;
    inp.open("2MULT.INP");
    oup.open("2MULT.OUT");
    if (inp) {
        int num_a {};
        int num_b {};
        inp>>num_a;
        inp>>num_b;
        std::vector<int> vec_a {};
        std::vector<int> vec_b {};
        while (num_a>0) {
            vec_a.push_back(num_a%10);
            num_a /= 10;
        }
        while (num_b>0) {
            vec_b.push_back(num_b%10);
            num_b /=10;
        }
        int result {0};
        for(auto elem:vec_a){
            for(auto elems:vec_b){
                result += elem*elems;
            }
        }
        oup<<result;
    }
    inp.close();
    oup.close();
    return 0;
}
