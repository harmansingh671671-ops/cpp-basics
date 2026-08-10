#include<iostream>
#include <iomanip>
using namespace std;
int main(){
int integer=12;
char character='A';
float mfloat=6.84f;
double mdouble=7.543211876987643;
bool mbool=true;
short mshort=5675;
long mlong=234567L;
long long mlonglong=9876543210LL;
cout <<"Interger: "<<integer<<endl;
cout <<"Character: "<<character<<endl;
cout <<"Float: "<<mfloat<<endl;
cout<< fixed <<setprecision(15);
cout <<"Double: "<<mdouble<<endl;
cout <<"Boolean: "<<mbool<<endl;
cout <<"Short: "<<mshort<<endl;
cout <<"Long: "<<mlong<<endl;
cout <<"Long Long: "<<mlonglong<<endl;


cout <<"Size of Integer: "<<sizeof(integer)<<" Bytes"<<endl; 
cout <<"Size of Character: "<<sizeof(character)<<" Bytes"<<endl; 
cout <<"Size of Float: "<<sizeof(mfloat)<<" Bytes"<<endl; 
cout <<"Size of Double: "<<sizeof(mdouble)<<" Bytes"<<endl; 
cout <<"Size of Boolean: "<<sizeof(mbool)<<" Bytes"<<endl; 
cout <<"Size of Short: "<<sizeof(mshort)<<" Bytes"<<endl;
cout <<"Size of Long: "<<sizeof(mlong)<<" Bytes"<<endl; 
cout <<"Size of Long Long: "<<sizeof(mlonglong)<<" Bytes"<<endl;  
    return 0;
}