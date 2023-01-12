#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     int i=1;
     int sum=0;
     while(i<=n){
         sum = sum + ((n-i+1)*(n-i+1));
         i=i+2;
     }
     cout<<sum<<endl;
    }
    return 0;
}