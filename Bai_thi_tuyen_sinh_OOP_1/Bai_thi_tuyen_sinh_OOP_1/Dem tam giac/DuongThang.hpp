//
//  DuongThang.hpp
//  Bai_thi_tuyen_sinh_OOP_1
//
//  Created by Hoang Viet on 17/02/2021.
//

#ifndef DuongThang_hpp
#define DuongThang_hpp

#include <iostream>

class Triago {
private:
    int numbers_line_1;
    int numbers_line_2;
public:
    Triago();
    Triago(int line_1,int line_2):numbers_line_1{line_1},numbers_line_2{line_2}{std::cout<<"Object created"<<std::endl;};
    ~Triago(){std::cout<<"Bye bye object"<<std::endl;};
    int small_triago();
};
#endif /* DuongThang_hpp */
