//
//  Fraction.hpp
//  Bai_thi_tuyen_sinh_OOP_1
//
//  Created by Hoang Viet on 18/02/2021.
//

#ifndef Fraction_hpp
#define Fraction_hpp

#include <iostream>
class Fraction {
private:
    int denominator;
    int numerator;
    double dividevalue;
public:
    Fraction();
    Fraction(int denominator, int numerator):denominator{denominator},numerator{numerator},dividevalue{double(denominator)/double(numerator)}{std::cout<<"Object created"<<std::endl;};
    ~Fraction(){std::cout<<"Object Destroyed"<<std::endl;}
    int getnumerator() {return numerator;};
    int getdenominator() {return denominator;};
    double getdividevalue() {return dividevalue;};
    bool operator>(const Fraction &rhs) const  {
        if(this->dividevalue>rhs.dividevalue){
            return true;
        }
        return false;
    }
    
};
#endif /* Fraction_hpp */
