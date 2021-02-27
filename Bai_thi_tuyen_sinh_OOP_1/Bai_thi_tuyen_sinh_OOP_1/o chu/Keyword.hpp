//
//  Keyword.hpp
//  Bai_thi_tuyen_sinh_OOP_1
//
//  Created by Hoang Viet on 21/02/2021.
//

#ifndef Keyword_hpp
#define Keyword_hpp

#include <stdio.h>
class Keyword {
private:
    char keyword;
    int index;
public:
    Keyword();
    Keyword(char key,int indx):keyword{key},index{indx}{};
};
#endif /* Keyword_hpp */
