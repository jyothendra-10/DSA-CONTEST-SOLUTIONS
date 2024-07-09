
#include <iostream>
using namespace std;

int main() {
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  if (n1 <= n2 && n1 <= n3) {
    cout << n1 << " ";
    if (n2 <= n3)
      cout << n2 << " " << n3<<endl;
    else
      cout << n3 << " " << n2<<endl;
  } else if (n2 <= n1 && n2 <= n3) {
    cout << n2 << " ";
    if (n1 <= n3)
      cout << n1 << " " << n3<<endl;
    else
      cout << n3 << " " << n1<<endl;
  } else {
    cout << n3 << " ";
    if (n1 <= n2)
      cout << n1 << " " << n2<<endl;
    else
      cout << n2 << " " << n1<<endl;
  }

  return 0;
}