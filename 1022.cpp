#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++)
    {
        double r,l;
        cin>>r;
        l=2*r;
        printf("Case %d: %0.2lf\n", i, l*l-(2*acos(0)*r*r)+pow(10,-9));
    }
}
