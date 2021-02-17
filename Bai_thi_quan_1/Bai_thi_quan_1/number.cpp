//
//  number.cpp
//  Bai_thi_quan_1
//
//  Created by Hoang Viet on 15/02/2021.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <set>
#include <vector>
std::vector<int> times (int);
int main(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("num.INP");
    Oup.open("num.OUT");
    if(Inp){
        int num {};
        std::vector<int> vec_ind {};
        Inp>>num;
        for(int i {0}; i<num;++i){
            int temp {};
            Inp>>temp;
            vec_ind.push_back(temp);
        }
        std::vector<int> vec {times(7)};
        std::set<int> set {};
        for(auto elem:vec){
            set.insert(elem);
        }
        set.erase(set.begin());
        set.erase(set.begin());
        vec.clear();
        for (auto elem:set) {
            vec.push_back(elem);
        }
        for(auto elem:vec_ind){
            Oup<<vec.at(elem)<<std::endl;
        }
    }
    Inp.close();
    Oup.close();
    return 0;
}
std::vector<int> times (int limits){
    std::vector<int> result;
    for(int x{0}; x<limits; ++x){
        for(int y{0}; y<limits; ++y){
            for (int z{0}; z<limits; ++z) {
                int temp_result = pow(3, z)*pow(5, y)*pow(7, x);
                result.push_back(temp_result);
            }
        }
    }
    return result;
}
