//
//  main.cpp
//  Bai_quan_4
//
//  Created by Hoang Viet on 16/02/2021.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
std::string pharse (std::string);
std::string decrypte  (std::string,std::string,std::string);

int main_1() {
    // insert code here...
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("STR.INP");
    Oup.open("STR.OUT");
    std::string aphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghjiklmnopqrstuvwxyz"};
    std::string rule    {"DEFGHIJKLMNOPQRSTUVWXYZabcdefghjiklmnopqrstuvwxyzABC"};
    if(Inp){
        std::string line{};
        getline(Inp, line);
        Oup<<decrypte(rule, aphabet, pharse(line));
    }
    Inp.close();
    Oup.close();
    return 0;
}

std::string pharse (std::string base){
    std::string result {};
    std::string word {};
    std::stringstream ss{base};
    while (ss>>word) {
        if(result.length()<word.length()){
            result = word;
        }
    }
    return result;
}
std::string decrypte (std::string rule,std::string aphabet,std::string base){
    std::string result {};
    for(auto elem:base){
        if(rule.find(elem)!=std::string::npos){
            result+=aphabet.at(rule.find(elem));
        }else{
            result+=elem;
        }
        
    }
    return result;
}
