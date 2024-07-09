#include <iostream>
using namespace std;
int main()
{
    int n,mp1,mp2,fd1,fd2,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>mp1>>mp2>>fd1>>fd2;
        if((mp1-fd1)<(mp2-fd2))
            cout<<"FIRST"<<endl;
        else if((mp1-fd1)>(mp2-fd2))
            cout<<"second"<<endl;
        else
            cout<<"any"<<endl;
    }
    return 0;
}