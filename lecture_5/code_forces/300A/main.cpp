#include<iostream>
using namespace std;

void append (int a[], int &n, int x) {
  n++;
  a[n - 1] = x;
}

int pop (int n[], int &l) {
  int element = n[l - 1];
  l--;
  return element;
}

int main () {
  int n;
  cin >> n;
  int a[100];
  int b[100];
  int c[100];
  int d[100];
  int lenB = 0, lenC = 0, lenD = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] < 0) append(b, lenB, a[i]);
    if (a[i] > 0) append(c, lenC, a[i]);
    if (a[i] == 0) append(d, lenD, a[i]);
  }
  
  if (lenB % 2 == 0) {
    int a = pop(b, lenB);
    append(d, lenD, a);
  }
  if (lenC == 0) {
    for (int i = 0; i < 2; i++) {
      int a = pop(b, lenB);
      append(c, lenC, a);
    }
  }
  cout << lenB << " ";
  for (int i = 0; i < lenB; i++) {
    cout << b[i] << " ";
  }
  cout << endl;
  cout << lenC << " ";
  for (int i = 0; i < lenC; i++) {
    cout << c[i] << " ";
  }
  cout << endl;
  cout << lenD << " ";
  for (int i = 0; i < lenD; i++) {
    cout << d[i] << " ";
  }
  return 0;
}
