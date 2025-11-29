#include<iostream>
#include<fstream>
#include"sungso376_STR.hpp"
using namespace std;
int main(void){
    string str="node(1).csv";
    ifstream fin(str);
    vector<vector<double>> layer=read_node(fin,2,3);
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)cout<<layer[i][j]<<" ";
        cout<<"\n";
    }
}