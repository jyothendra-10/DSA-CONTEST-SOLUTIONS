#include <iostream>
using namespace std;

int main() {
  int n1,n2;
  while(true){
      cin>>n1>>n2;
      if(n1==0 && n2==0)
        break;
      (n1<n2)? cout<<n1<<" "<<n2<<endl: cout<<n2<<" "<<n1<<endl;
  }
  return 0;
}