#include <iostream>
#include <math.h>
using namespace std;


void coeff(int h,int intial,int final)
{
    float e_n=intial/final;

    float power=pow(e_n,2);

    cout<<"power value\n"<<power<<'\n';

    float newh=h*power;

    // e_n=intial/final;

    cout<<newh;
}


int main()
{
    int height;
    int initial;
    int final;
    cin>>height>>initial>>final;
    coeff(height,initial,final);
}