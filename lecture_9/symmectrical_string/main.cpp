#include<iostream>
using namespace std;

string reversedString(string &s, string &ans, int &strLen) {
  if (strLen == 1) return ans += s[0];
  else {
    ans += s[strLen - 1];
    strLen--;
    return reversedString(s, ans, strLen);
  }
}

int main () {
  string s;
  string ans;
  int n;
  cin >> n;
  cin >> s;
  reversedString(s, ans, n);
  if (ans == s) cout << "YES";
  else cout << "NO";
  return 0;
}
