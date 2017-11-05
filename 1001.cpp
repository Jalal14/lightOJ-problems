#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,i,a,b;
    cin>>T;
    for(i=1; i<=T; i++)
    {
        cin>>n;
        if(n<20)
        {
            a=n%10;
            b=n-a;
        }
        else
        {
            a=10;
            b=10;
        }
        cout<<a<<" "<<b<<endl;
    }
}
