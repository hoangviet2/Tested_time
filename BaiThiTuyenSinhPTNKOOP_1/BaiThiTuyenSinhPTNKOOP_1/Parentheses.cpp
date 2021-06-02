//
//  Parentheses.cpp
//  BaiThiTuyenSinhPTNKOOP_1
//
//  Created by Hoang Viet on 07/03/2021.
//

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <map>
class Line {
private:
    std::string rawString;
    int numberOpen;
    int numberEnd;
    bool isValid;
    int changeNum;
public:
    Line(){};
    Line(std::string raw):rawString{raw},numberOpen{calculateLetter(changeRawToAbleString(raw), '(')},numberEnd{calculateLetter(changeRawToAbleString(raw), ')')},isValid{checkValid(changeRawToAbleString(raw))},changeNum{determinateChangeNum(isValid, numberOpen, numberEnd)}{};
    std::string changeRawToAbleString (std::string raw);
    int calculateLetter (std::string ableString,char letter);
    bool checkValid (std::string ableString);
    int determinateChangeNum (bool valid,int numberOpen,int numberEnd);
    int getChangeNum() {return changeNum;};
    ~Line(){};
};
std::string Line::changeRawToAbleString(std::string raw){
    std::string returnString {};
    for(auto elem:raw){
        if (!isspace(elem)) {
            returnString += elem;
        }
    }
    return returnString;
}
int Line::calculateLetter (std::string ableString,char letter){
    int returnNum {0};
    for(auto elem:ableString){
        if(letter == elem){
            ++returnNum;
        }
    }
    return returnNum;
}

bool Line::checkValid(std::string ableString){
    bool valid {false};
    for(auto elem:ableString){
        if(elem == '('){
            valid = false;
        }else{
            valid = true;
        }
    }
    return valid;
}
int Line::determinateChangeNum (bool valid,int numberOpen,int numberEnd){
    if(valid == true){
        return 0;
    }else if (numberOpen!=numberEnd){
        return -1;
    }else{
        return numberOpen;
    }
    
}
int main(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("PARENTHESES.INP");
    Oup.open("PARENTHESES.OUT");
    if(Inp){
        std::string rawString;
        getline(Inp, rawString);
        Line temp (rawString);
        Oup<<temp.getChangeNum();
    }
    Inp.close();
    Oup.close();
    return 0;
}
