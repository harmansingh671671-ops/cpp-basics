#include<iostream>
using namespace std;
int main(){
int a,b;
int q,r;
cout << "Enter 2 Numbers with a space: ";
cin>>q>>r;
a=min(q,r);
b=max(q,r);

int n;
for(n=a+1;n<b;n++){
    int i=2;
    for(i;i<n;i++){
        if (n%i==0){
            break;
        }
    }
    if (i==n){
        cout << n<<" is a prime Number\n";
    }

}
return 0;
}