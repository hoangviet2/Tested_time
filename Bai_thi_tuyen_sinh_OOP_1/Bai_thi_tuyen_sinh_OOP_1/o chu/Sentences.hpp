//
//  Sentences.hpp
//  Bai_thi_tuyen_sinh_OOP_1
//
//  Created by Hoang Viet on 21/02/2021.
//

#ifndef Sentences_hpp
#define Sentences_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Keyword.hpp"
#include "Space.hpp"
class Sentence {
private:
    std::string originalString;
    int lengthOfOrginalString;
    Keyword keyword;
    int fristCharIndex;
    //Space availableSpace;
public:
    Sentence();
    Sentence(std::string originalString):originalString{}{};
    Sentence(std::string originalString):originalString{originalString},lengthOfOrginalString{static_cast<int>(originalString.length())},keyword{pharse(originalString)},fristCharIndex{findFristletter(originalString)}{};
    Keyword pharse(std::string originalString);
    int findFristletter(std::string originalString);
    //Space calculate(std::string originalString);
};
#endif /* Sentences_hpp */
