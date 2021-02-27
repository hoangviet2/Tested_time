//
//  Sentences.cpp
//  Bai_thi_tuyen_sinh_OOP_1
//
//  Created by Hoang Viet on 21/02/2021.
//

#include "Sentences.hpp"
Keyword Sentence::pharse (std::string originalString){
    for(auto character:originalString){
        if (!isdigit(character)) {
            return Keyword(character, originalString.find(character));
        }
    }
    return Keyword('0', 0);
}
int Sentence::findFristletter(std::string originalString){
    int it = originalString.find('1');
    return it;
}
