//
//  main.cpp
//  Bai_quan_3
//
//  Created by Hoang Viet on 16/02/2021.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
std::string pharse_longest (std::string);
std::string decrypte (std::string,std::string,std::string);
int main_1() {
    // insert code here...
    std::ifstream Inp;
    std::ofstream Oup;
    std::string aphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    std::string rule    {"DEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzABC"};
    std::string line {};
    Inp.open("str.INP");
    Oup.open("str.OUT");
    if(Inp){
        getline(Inp, line);
        Oup<<decrypte( rule, aphabet, pharse_longest(line));
    }
    Inp.close();
    Oup.close();
    return 0;
}
std::string pharse_longest (std::string base){
    std::string result {};
    std::stringstream ss {base};
    std::string word {};
    while (ss>>word) {
        if(word.length()>=result.length()){
            result = word;
        }
    }
    return result;
}
std::string decrypte (std::string rule ,std::string aphabet ,std::string base ){
    std::string result {};
    for (auto elem:base){
        if(rule.find(elem)!=std::string::npos){
            result += aphabet.at(rule.find(elem));
        }else{
            result+=elem;
        }
        
    }
    return result;
}
