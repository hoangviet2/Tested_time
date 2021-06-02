//
//  Count.cpp
//  BaiThiHSGTpHCM202101
//
//  Created by Hoang Viet on 20/03/2021.
//

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
std::vector<std::string> pharse (std::string);
std::vector<std::string> calculate (std::vector<std::string>);
int repeatedLetter (std::string);
int repetedWord (std::string, std::vector<std::string>);
bool checkexist (std::vector<std::string>,std::string);
int main02(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("DEMTU.INP");
    Oup.open("DEMTU.OUT");
    if(Inp){
        std::vector<std::string> vectorString {};
        std::vector<std::string> result {};
        while(!Inp.eof()){
            std::string string;
            getline(Inp,string);
            vectorString.push_back(string);
        }
        std::cout<<"end of file" <<std::endl;
        for(auto string:vectorString){
            std::vector<std::string> tempresult = calculate(pharse(string));
            for (auto elem:tempresult){
                result.push_back(elem);
            }
        }
        Oup<<result.size()<<std::endl;
        for (auto elem:result){
            Oup<<elem<<" ";
        }
        std::cout<<"end of program"<<std::endl;
    }
    Inp.close();
    Oup.close();
    return 0;
}
std::vector<std::string> pharse (std::string base){
    std::vector<std::string> result {};
    std::stringstream ss {base};
    std::string word {};
    while (ss>>word) {
        result.push_back(word);
    }
    return result;
}
std::vector<std::string> calculate (std::vector<std::string> word){
    std::vector<std::string> result {};
    if (word.size() != 0){
        for (auto elem:word){
            int repeatedwordTime = repetedWord(elem, word);
            if (repeatedwordTime > 1){
                result.push_back(elem);
            }
        }
        for(auto elem:word){
            int repeatedTime = repeatedLetter(elem);
            if (repeatedTime>elem.length()) {
                result.push_back(elem);
            }
        }
    }
    return result;
}
bool checkexist (std::vector<std::string> vector,std::string defination){
    for(auto elem:vector ){
        if (defination == elem) {
            return false;
        }
    }
    return true;
}
int repeatedLetter (std::string pharse){
    std::string tempPharse {pharse};
    int result {0};
    for(auto elem:tempPharse){
        for (auto elems:tempPharse) {
            if (elem==elems) {
                ++result;
            }
        }
    }
    return result;
}
int repetedWord (std::string word, std::vector<std::string> vec){
    int result {0};
    for (auto elem:vec){
        if (word == elem){
            ++result;
        }
    }
    return result;
}
