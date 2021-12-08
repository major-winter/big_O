#include<iostream>
using namespace std;

int main () {
  int a[1000];
  int n;
  cin >> n;

  for (int i = 1; i < 100000; i++) {
    int flag = false;
    for (int j = 0; j < n; j++) {
      cin >> a[j];
      if (i == a[j]) flag = true;
    }
    if (!flag) {
      cout << i;
      break;
    }
  }
  return 0;
}
