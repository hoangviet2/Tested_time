//
//  number.cpp
//  Bai_quan_2
//
//  Created by Hoang Viet on 15/02/2021.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <set>
std::vector<int> times(int);
int main(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("num.INP");
    Oup.open("num.OUT");
    if(Inp){
        int num {};
        std::vector<int>  vec_ind {};
        std::vector<int> vec {times(7)};
        std::set<int> set {};
        for(auto elem:vec){
            set.insert(elem);
        }
        vec.clear();
        set.erase(set.begin());
        set.erase(set.begin());
        for(auto elem:set){
            vec.push_back(elem);
        }
        Inp>>num;
        for(int i{0};i<num;++i){
            int ind {};
            Inp>>ind;
            vec_ind.push_back(ind);
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
    std::vector<int> vec {};
    for(int x{0}; x<limits; ++x){
        for(int y{0}; y<limits; ++y){
            for(int z{0}; z<limits; ++z){
                int n = pow(3, z)*pow(5, y)*pow(7, x);
                vec.push_back(n);
            }
        }
    }
    return vec;
}
