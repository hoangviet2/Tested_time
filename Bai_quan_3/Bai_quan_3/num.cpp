//
//  num.cpp
//  Bai_quan_3
//
//  Created by Hoang Viet on 16/02/2021.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <set>
std::vector<int> times (int);
int main (){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("NUM.INP");
    Oup.open("NUM.OUT");
    if(Inp){
        int ind_count {};
        std::vector<int> ind {};
        Inp>>ind_count;
        for (int i{0}; i<ind_count; ++i) {
            int temp {};
            Inp>>temp;
            ind.push_back(temp);
        }
        std::vector<int> vec_res {times(7)};
        std::set<int> set {};
        for(auto elem:vec_res){
            set.insert(elem);
        }
        vec_res.clear();
        for (auto elem:set){
            vec_res.push_back(elem);
        }
        for(auto elem:ind){
            Oup<<vec_res.at(elem-1)<<std::endl;
        }
    }
    Inp.close();
    Oup.close();
    return 0;
}
std::vector<int> times (int limits){
    std::vector<int> result {};
    for (int x {0}; x<limits; ++x) {
        for (int y {0}; y<limits; ++y) {
            for (int z {0}; z<limits; ++z) {
                int temp {};
                temp = pow(3, z)*pow(5, y)*pow(7, x);
                if (temp>1){
                    result.push_back(temp);
                }
            }
        }
    }
    return result;
}
