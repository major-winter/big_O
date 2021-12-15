#include<iostream>
#include<string>
using namespace std;

void findOccur(string &a, string &s3, int flag[]) {
  int index = -1;
  for (size_t i = 0; i < s3.length(); i++) {
    index = a.find(s3[i]);
    if (index >= 0) flag[index]++;
  }
}

void canConstructString(int flag[], string &s, string &a) {
  int index = -1;
  for (size_t i = 0; i < s.length(); i++) {
    index = a.find(s[i]);
    if (index >= 0) flag[index]--;
  }
}

void canConstruct(string &s1, string &s2, string &a, int flag[]) {
  int f = true;
  canConstructString(flag, s1, a);
  canConstructString(flag, s2, a);
  for (size_t i = 0; i < 26; i++) {
    if (flag[i] != 0) f = false;
  }

  if (f) cout << "YES";
  else cout << "NO";
}

int main () {
  string s1, s2, s3;
  getline(cin, s1);
  getline(cin, s2);
  getline(cin, s3);
  string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int flag[26];
  for (int i = 0; i < 26; i++) flag[i] = 0;

  findOccur(a, s3, flag);

  canConstruct(s1, s2, a, flag);

  return 0;
}
