#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,tem,i,c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>tem>>c;
        if(tem<c)
            cout<<"0"<<endl;
        else
            cout<<ceil((tem-c)/4.0)<<endl;
    }
    return 0;
}