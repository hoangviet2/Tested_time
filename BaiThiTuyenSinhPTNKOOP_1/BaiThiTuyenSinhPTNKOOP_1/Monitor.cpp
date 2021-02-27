//
//  Monitor.cpp
//  BaiThiTuyenSinhPTNKOOP_1
//
//  Created by Hoang Viet on 20/02/2021.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include "Identifier.hpp"
#include <map>

int main(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("MONITOR.INP");
    Oup.open("MONITOR.OUT");
    if (Inp) {
        int size {};
        Inp>>size;
        std::map<int, std::vector<int>> id;
        std::set<int> set;
        for (int i {0}; i<size; ++i) {
            int temp {};
            Inp>>temp;
            id[temp].push_back(i);
        }
        for (auto elem:id) {
            if (elem.second.size() >1) {
                int temp {elem.second.at(elem.second.size()-1)-elem.second.at(0)};
                id[elem.first].clear();
                id[elem.first].push_back(temp);
            }else{
                int temp {0};
                id[elem.first].clear();
                id[elem.first].push_back(temp);
            }
        }
        std::map<int, int> idAndTimes;
        for (auto elem:id) {
            idAndTimes[elem.first] = elem.second.at(0);
            set.insert(elem.second.at(0));
        }
        for (auto elem:idAndTimes) {
            std::cout<<*set.rbegin()<<std::endl;
            if(elem.second == *set.rbegin()){
                Oup<<elem.first<<std::endl;
                Oup<<elem.second+1;
            }
        }
    }
    Inp.close();
    Oup.close();
    return 0;
}
