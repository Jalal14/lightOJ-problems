#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++){
        long long int a,b,c;
        cin>>a>>b>>c;
        printf("Case %d: ", i);
        if(a*a+b*b==c*c){
            cout<<"yes\n";
        }else if(a*a+c*c==b*b){
            cout<<"yes\n";
        }else if(b*b+c*c==a*a){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }
}
