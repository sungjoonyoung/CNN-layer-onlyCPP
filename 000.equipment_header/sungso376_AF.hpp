/*
header for activate function
*/
#pragma once
#include<iostream>
#include<vector>
#include<sungso376_LA.hpp>
using namespace std;

//sigmod
template <typename T1>
auto sigmoid(T1 x){
    double tmp=exp(x);
    tmp/=exp(x)+1;
    return tmp;
}

template <typename T1>
auto ReLU(T1 x)->decltype(x){
    return max(x,(T1)0);
}

template <typename T1>
auto sotfmax(vector<T1> &x){
    vector<T1> sftmax_vector(x.size());
    long double mother=0;
    for(auto c:x)mother+=exp(c);
    for(int i=0;i<sftmax_vector.size();i++)
        sftmax_vector[i]=exp(x[i])/mother;
    return sftmax_vector;
}

/*
derivative
*/

//sigmod
template <typename T1>
auto derivative_sigmoid(T1 x){
    double tmp=sigmoid(x);
    tmp*=(1-tmp);
    return tmp;
}

template <typename T1>
auto derivative_ReLU(T1 x)->decltype(x){
    return ((x > 0) ?( 1.0) : (0.0));
}







// // 또는 C++11 이후의 트레일링 반환(Trailing return) 구문을 사용하여
// // 반환형을 더 유연하게 지정할 수도 있습니다.
// template <typename T1, typename T2>
// auto add_flexible(T1 a, T2 b) -> decltype(a + b) {
//     return a + b;
// }
