//
//  TOP.cpp
//  Bai_Thi_tp_2017_2
//
//  Created by Hoang Viet on 15/02/2021.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <set>
bool is_top (std::vector<std::vector<int>>,int,int,int,int);
int main(){
    std::ifstream Inp;
    std::ofstream Oup;
    Inp.open("TOP.INP");
    Oup.open("TOP.OUT");
    int result {0};
    int row {};
    int col {};
    if(Inp){
        Inp>>row;
        Inp>>col;
        std::vector<std::vector<int>> vec (row,std::vector<int> (col) );
        for (int i{0}; i<row; ++i){
            for (int j{0}; j<col; ++j) {
                int temp {};
                Inp>>temp;
                vec[i][j] = temp;
            }
        }
        std::set<int> set;
        for (int i{0}; i<row; ++i){
            for (int j{0}; j<col; ++j) {
                if(is_top(vec, row, col, i, j)){
                    //++result;
                    set.insert(vec[i][j]);
                }
            }
        }
        std::vector<int> vec_result {};
        for(auto elem:set){
            vec_result.push_back(elem);
        }
        Oup<<vec_result.size();
    }
    Inp.close();
    Oup.close();
    return 0;
}
bool is_top (std::vector<std::vector<int>> matrix,int row,int col,int ind_row,int ind_col){
    if (ind_row == 0 && ind_col == 0){
        if(matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1] /*&& matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] */ && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]){
            return true;
        }else if(/*matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1] &&*/ matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] /*&& matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]*/){
            return true;
        }else{
            return false;
        }
    }else if(ind_row == 0 && ind_col == col-1){
        if(/*matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && */ matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && /*matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] &&*/ matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] /*&& matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]*/){
            return true;
        }else{
            return false;
        }
    }else if(ind_row == row-1 && ind_col ==0){
        if(/*matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] &&*/ matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && /*matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] &&*/ matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] /* && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1]*/){
            return true;
        }else{
            return false;
        }
    }else if(ind_row == row-1 && ind_col == col-1){
        if(/*matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1]  && */ matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] /*&& matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] */&& matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] /*&& matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col]*/){
            return true;
        }else{
            return false;
        }
    }else if (ind_row!=0 && ind_col==0 ){
        if( matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col]  && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]  && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col]){
            return true;
        }else{
            return false;
        }
    }else if (ind_row!=0 && ind_col==col-1 ){
        if(matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1]  && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1]){
            return true;
        }else{
            return false;
        }
    }else if(ind_row==0 && ind_col!=0){
        if( matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1]  && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col]){
            return true;
        }else{
            return false;
        }
    }else if (ind_row==row-1 && ind_col!=0){
        if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1]  && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col]){
            return true;
        }else{
            return false;
        }
    }else{
        if(matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1]  && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1]  && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col+1]){
            return true;
        }else if(matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col-1] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row+1][ind_col] && matrix[ind_row][ind_col]>matrix[ind_row-1][ind_col+1] && matrix[ind_row][ind_col]>matrix[ind_row][ind_col+1]){
            return true;
        }else {
            return false;
        }
    }
    
    return true;
}
