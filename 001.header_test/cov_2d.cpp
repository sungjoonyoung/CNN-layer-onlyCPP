#include<iostream>
#include<vector>
#include"sungso376_LA.hpp"
// #include"/equipment/sungso376_LA"
using namespace std;
int main(void){
    vector<vector<double>> X={
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,6.6},
    };
    vector<vector<double>> filter={
        {1,1,1},
        {1,1,1},
        {1,2,1},
    };
    vector<vector<double>> tmp=convolution_2D(X,filter);
    cout<<filter.size()<<"\n";
    for(int i=0;i<tmp.size();i++){
        for(int j=0;j<tmp[i].size();j++)cout<<tmp[i][j]<<" ";
        cout<<"\n";
    }
    tmp=convolution_2D(X,filter,2);
    cout<<filter.size()<<"\n";
    for(int i=0;i<tmp.size();i++){
        for(int j=0;j<tmp[i].size();j++)cout<<tmp[i][j]<<" ";
        cout<<"\n";
    }
}