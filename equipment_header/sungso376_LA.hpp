#include<iostream>
#include<vector>
using namespace std;

//inner product
template <typename T1, typename T2>
auto inner_product(vector<T1>& a, vector<T2>& b) -> decltype(a[0] * b[0]){
    if(a.size()!=b.size()){
        cout<<"\n%%%%inner product에서 백터 사이드 다름%%%%\n\n";
        return 0;
        // if(a.size()!=b.size())return NULL; 뭐 그냥 귀찮아 나중에 해
    }

    using ResultType = decltype(a[0] * b[0]);
    ResultType norm = 0;

    for(int i=0;i<a.size();i++){
        norm+=a[i]*b[i];
    }
    return norm;
}




// // 또는 C++11 이후의 트레일링 반환(Trailing return) 구문을 사용하여
// // 반환형을 더 유연하게 지정할 수도 있습니다.
// template <typename T1, typename T2>
// auto add_flexible(T1 a, T2 b) -> decltype(a + b) {
//     return a + b;
// }
