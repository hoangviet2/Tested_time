//
//  CayVaNhungNguoiBan.cpp
//  BaiThiHSGTpHCM202101
//
//  Created by Hoang Viet on 21/03/2021.
//

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <fstream>
#include <vector>
#include <set>
#include <cmath>
class Corrdinate {
private:
    int x;
    int y;
public:
    Corrdinate(){};
    Corrdinate(int xValue, int yValue):x{xValue},y{yValue}{std::cout<<"Created corrdinate"<<std::endl;};
    int getX() {return x;};
    int getY() {return y;};
    ~Corrdinate(){std::cout<<"An corrdinate has been gone!!!"<<std::endl;};
};
class Tree {
private:
    Corrdinate corrdinate;
    int height;
    int group;
public:
    Tree(){};
    Tree(Corrdinate corr,int heightValue);
    ~Tree(){std::cout<<"destroyed object"<<std::endl;};
    int getHeight(){return height;};
    Corrdinate getcorr (){return corrdinate;};
    void setHeight(int);
};
Tree::Tree(Corrdinate corr,int heightValue){
    corrdinate = corr;
    if((corr.getX()/2)>=(corr.getY()/2)){
        group = corr.getX()/2;
    }else{
        group = corr.getY()/2;
    }
}
void Tree::setHeight(int heightValue){
    height = heightValue;
}
int main(){
    std::ifstream Inp;
    std::ofstream Oup;
    std::cout<<1/2<<std::endl;
    Inp.open("CHEVUON.INP");
    Oup.open("CHEVUON.OUT");
    if(Inp){
        int x;
        int y;
        std::set<int> heightValue;
        std::vector<Tree> jungle {};
        Inp>>x;
        Inp>>y;
        for (int i{0}; i<x; ++i) {
            for (int j{0}; i<y; ++j) {
                int temp;
                Inp>>temp;
                heightValue.insert(temp);
                jungle.push_back(Tree(Corrdinate(i, j), 0));
            }
        }
        
    }
    Inp.close();
    Oup.close();
    return 0;
}
