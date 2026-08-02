#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int counter=1;
    int n;
    cout << "Get sum from 1 upto: ";
    cin>>n;
    if(n>0){
        if(n<1000){
            for(counter;counter<=n;counter++){
        sum=sum+counter;
        cout << "Sum is now: "<<sum<<endl;
    }
    cout << "Sum from 1 upto "<<n<<" is "<<sum<< endl;}
        else{ sum=(n*(n+1))/2;
        cout << "Sum from 1 upto "<<n<<" is "<<sum<< endl;}}
    else {
cout << "Please enter a +ve Number\n";
    } 
return 0;
}

/*
for if statements follow this:
if (conditon){
what to do;}
else{what to do;}

LOOPING:
for 'for' statement follow this
for (what to see, how to see, how it change) or we can say it as
for (initialisation, condition, update){
what to do}
*/