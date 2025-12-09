#include<iostream>
#include<fstream>
#include<vector>
#include<sungso376_image.hpp>
using namespace std;
auto conv_function(string image){
    ifstream fin(image, ios::binary);
    // ifstream fin(image);
    vector<vector<vector<double>>> con_data=image_func(fin);
    cout<<"A";
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            cout<<con_data[i][j].front()<<" ";
        }
        cout<<"\n";
    }
}
int main(void){
    for(int i=0;i<1;i++){
        /*
        convolution
        */
        string image="image_func.bmp";
        conv_function(image);
        

        /*
        NN
        */

    }

}