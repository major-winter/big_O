#include<iostream>
using namespace std;

int main () {
  int a[5000];
  int o[5000];
  int d[5000];
  int n;
  cin >> n;
  int maxApples = 0, maxOranges = 0;
  int index = 0;
  int ans = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i] >> o[i];
    if (a[i] > maxApples) maxApples = a[i];
  }

  for (int i = 0; i < n; i++) {
    if (a[i] == maxApples) {
      d[index] = i;
      index++;
    }
  }

  for (int i = 0; i < index; i++) {
    if (o[d[i]] > maxOranges) {
      maxOranges = o[d[i]];
      ans = d[i] + 1;
    }
  }
  
  cout << ans;
  return 0;
}
