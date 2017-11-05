#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    for(int i=1; i<=T; i++){
        int me,lift;
        cin>>me>>lift;
        printf("Case %d: ", i);
        int t=10+9;
        int d=abs(me-lift);
        cout<<t+d*4+me*4<<endl;
    }
}
