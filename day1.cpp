#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
     int X=0;
    while(t--){
       
        string s1;
        string s2("++X");
        string s3("X++");
        string s4("--X");
        string s5("X--");
        
       cin>>s1;
       if(s1==s2 || s1==s3){
           X= X+1;
       }
       else{
           X=X-1;
       }
       
    }
     cout<<X<<endl;
}
