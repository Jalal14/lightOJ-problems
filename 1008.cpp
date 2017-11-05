#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        long long int s;
        cin>>s;
        long long int sqr=sqrt(s);
        long int rem=s-(sqr*sqr);
        cout<<"Case "<<i<<": ";
        if(sqr%2==0){
            if(s==sqr*sqr){
                cout<<sqr<<" 1"<<endl;
            }else{
                if(rem<=sqr+1){
                    cout<<sqr+1<<" "<<rem<<endl;
                }else{
                    cout<<2*sqr-rem+2<<" "<<sqr+1<<endl;
                }
            }
        }else{
            if(s==sqr*sqr){
                cout<<"1"<<" "<<sqr<<endl;
            }else{
                if(rem<=sqr+1){
                    cout<<rem<<" "<<sqr+1<<endl;
                }else{
                    cout<<sqr+1<<" "<<2*sqr-rem+2<<endl;
                }
            }
        }
    }
}
