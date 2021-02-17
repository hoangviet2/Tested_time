//
//  main.cpp
//  Bai_quan_2
//
//  Created by Hoang Viet on 15/02/2021.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
std::string pharse (std::string);
std::string decrpte (std::string,std::string,std::string);
int main_1() {
    // insert code here...
    std::ifstream Inp;
    std::ofstream Oup;
    std::string aphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    std::string rule    {"DEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzABC"};
    Inp.open("str.INP");
    Oup.open("str.OUT");
    if(Inp){
        std::string line {};
        getline(Inp, line);
        Oup<<decrpte(rule, aphabet, pharse(line));
    }
    Inp.close();
    Oup.close();
    return 0;
}
std::string pharse (std::string base){
    std::stringstream ss {base};
    std::string result {};
    std::string word {};
    while (ss>>word) {
        if(result.length()<word.length()){
            result = word;
        }
    }
    return result;
}
std::string decrpte (std::string rule,std::string aphabet,std::string base){
    std::string result  {};
    for(auto elem:base){
        if (rule.find(elem)!=std::string::npos){
            result += aphabet.at(rule.find(elem));
        }else{
            result+=elem;
        }
    }
    return result;
}
