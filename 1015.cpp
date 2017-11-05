#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        int N;
        cin>>N;
        long long int sum=0;
        int dust;
        while(N--){
            cin>>dust;
            if(dust<=0){
                dust=0;
            }
            sum+=dust;
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
}
