//
//  main.cpp
//  Bai_Thi_tp_2017_2
//
//  Created by Hoang Viet on 15/02/2021.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
int main_1() {
    ifstream Inp;
    ofstream Oup;
    Inp.open("2MULT.INP");
    Oup.open("2MULT.OUT");
    if(Inp){
        int num_a {};
        int result = 0;
        vector<int> num_a_vec {};
        Inp>>num_a;
        int num_b {};
        vector<int> num_b_vec {};
        Inp>>num_b;
        while (num_a>0) {
            num_a_vec.push_back(num_a%10);
            num_a/=10;
        }
        while (num_b>0) {
            num_b_vec.push_back(num_b%10);
            num_b/=10;
        }
        for(auto elem:num_a_vec){
            for(auto elems:num_b_vec){
                result+= elem*elems;
            }
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return 0;
}
