#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,tem,i,c;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>c;
        cout<<(c*50)-(((c*50)*20/100)+((c*50)*30/100)+((c*50)*20/100))<<endl;
    }
    return 0;
}