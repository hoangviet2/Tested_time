//
//  DuongThang.cpp
//  Bai_thi_tuyen_sinh_OOP_1
//
//  Created by Hoang Viet on 17/02/2021.
//

#include "DuongThang.hpp"
int Triago::small_triago(){
//    if(numbers_line_1 == 1){
//        return 2*(2*numbers_line_2);
//    }else{
//        return (3*numbers_line_1)*(2*numbers_line_2);
//    }
    int total {1};
    for(int i{1}; i<=numbers_line_1+1; ++i){
        total *= i;
    }
    return total*(2*numbers_line_2);
}
