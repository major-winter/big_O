#include<iostream>
using namespace std;

string reversedString(string s, string &ans) {
  if (s.length() == 1) return ans += s[0];
  else {
    ans += s[s.length() - 1];
    s = s.substr(0, s.length() - 1);
    return reversedString(s, ans);
  }
}

int main () {
  string s;
  string ans;
  int n;
  cin >> n;
  cin >> s;
  reversedString(s, ans);
  if (ans == s) cout << "YES";
  else cout << "NO";
  return 0;
}
