//
//  Num.cpp
//  Bai_quan_4
//
//  Created by Hoang Viet on 16/02/2021.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <set>
std::vector<int> times (int);
int main(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("NUM.INP");
    Oup.open("NUM.OUT");
   
    if (Inp) {
        int ind_count {};
        std::vector<int> vec_ind {};
        Inp>>ind_count;
        for (int i{0}; i<ind_count; ++i) {
            int temp {};
            Inp>>temp;
            vec_ind.push_back(temp);
        }
        std::vector<int> vec {times(7)};
        std::set<int> set {};
        for (auto elem:vec) {
            set.insert(elem);
        }
        vec.clear();
        for (auto elem:set) {
            vec.push_back(elem);
        }
        set.clear();
        for(auto elem:vec_ind){
            Oup<<vec.at(elem)<<std::endl;
        }
    }
    Inp.close();
    Oup.close();
    return 0;
}
std::vector<int> times (int limit){
    std::vector<int> result {};
    for (int x{0}; x<limit; ++x) {
        for (int y{0}; y<limit; ++y) {
            for (int z{0}; z<limit; ++z) {
                int temp {static_cast<int>(pow(3, z)*pow(5, y)*pow(7, x))};
                if (temp>0){
                    result.push_back(temp);
                }
            }
        }
    }
    return result;
}
