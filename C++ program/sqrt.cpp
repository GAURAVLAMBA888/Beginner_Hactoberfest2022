// This program finds the sqrt of a number without using sqrt function
#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cout<<"Enter num:";
    cin>>n;
    int i=1;
    while(ans <= n){
        i++;
        ans = i*i;
    }
    i--;
    cout<<"The root is "<<i;
}
