#include<iostream>
#include<string>
using namespace std;
/*
 * create a flag to mark which char should be capitalized
 */
int main () {
  string s;
  getline(cin, s);
  int flag = 0;

  for (size_t i = 0; i< s.length(); i++) {
    if (s[i] == '.' && s[i + 1] == ' ') flag = 1;
    if (flag) {
      s[i + 2] = toupper(s[i + 2]);
      flag = 0;
    }
  }
  cout << s;
  return 0;
}
