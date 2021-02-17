//
//  main.cpp
//  Bai_thi_quan_1
//
//  Created by Hoang Viet on 15/02/2021.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
std::string phare_longest (std::string);
std::string encrypte_text_by_rule (std::string,std::string,std::string);
int main_1() {
    std::ifstream Inp;
    std::ofstream Oup;
    std::string aphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    std::string rule    {"DEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzABC"};
    std::string base {};
    Inp.open("Input.txt");
    Oup.open("Output.txt");
    if(Inp){
        getline(Inp, base);
        Oup<<encrypte_text_by_rule(rule, aphabet, phare_longest(base));
    }else{
        std::cout<<"can not open file"<<std::endl;
    }
    Inp.close();
    Oup.close();
    return 0;
}
std::string phare_longest (std::string bare_string){
    std::string word {};
    std::stringstream ss {bare_string};
    std::string result {};
    while (ss>>word) {
        if (word.length()>=result.length()) {
            result = word;
        }
    }
    return result;
}
std::string encrypte_text_by_rule (std::string rule, std::string aphabet, std::string base){
    std::string result;
    for(auto elem:base){
        if(aphabet.find(elem)!=std::string::npos){
            result  += aphabet.at(rule.find(elem));
        }else{
            result +=elem;
        }
    }
    return result;
}
