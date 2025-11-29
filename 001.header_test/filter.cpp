#include<iostream>
#include<fstream>
#include"sungso376_STR.hpp"
using namespace std;
int main(void){
    string str="filter(1).csv";
    ifstream fin(str);
    vector<vector<vector<double>>> filter
    =read_filter_3D(fin,3,3,2);
    for(int d=0;d<2;d++){
        cout<<d<<":\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)cout<<filter[d][i][j]<<" ";
            cout<<"\n";
        }
    }
    cout<<"A\n";
    fin.close();
    fin.open(str);
    vector<vector<double>> filter2=read_filter_2D(fin,3,3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)cout<<filter2[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\nA\n\n";
}