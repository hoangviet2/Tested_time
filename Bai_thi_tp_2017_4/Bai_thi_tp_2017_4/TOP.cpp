//
//  TOP.cpp
//  Bai_thi_tp_2017_4
//
//  Created by Hoang Viet on 16/02/2021.
//

#include <iostream>
#include "Point.hpp"
#include <fstream>
#include <vector>
#include <cmath>
bool is_top (std::vector<Point>,Point);
int main_3(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("TOP.INP");
    Oup.open("TOP.OUT");
    if (Inp) {
        int row{};
        int col{};
        Inp>>row;
        Inp>>col;
        std::vector<std::vector<int>> vec(row,std::vector<int> (col));
        for (int i{0}; i<row; ++i) {
            for (int j {0}; j<col; ++j){
                int temp;
                Inp>>temp;
                vec[i][j] = temp;
            }
        }
        std::vector<Point> vec_point {};
        for (int i{0}; i<row; ++i) {
            for (int j {0}; j<col; ++j){
                Point temp_point (i,j,vec[i][j]);
                vec_point.push_back(temp_point);
            }
        }
        int result = 0;
        for (int i{0}; i<row; ++i) {
            for (int j {0}; j<col; ++j){
                Point temp_point (i,j,vec[i][j]);
                if (is_top(vec_point, temp_point)) {
                    ++result;
                }
            }
        }
        Oup<<result;
    }
    Inp.close();
    Oup.close();
    return 0;
}
bool is_top (std::vector<Point> vec_point,Point point) {
    std::vector<Point> vec_near {};
    for(auto elem:vec_point){
        if(point<elem || point>elem || point!=elem){
            vec_near.push_back(elem);
        }
    }
    for(auto elem:vec_near){
        if (point==elem) {
            continue;
        }else{
            return false;
        }
    }
    return true;
}
