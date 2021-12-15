#include<iostream>
#include<string>
using namespace std;

/*
 * read in string s -> uppercase and lowercase
 * create string a[] to store word
 * filter character in string s and put into string a
 * print words from string a
*/

int main () {
  string s;
  getline (cin, s);
  char a[1000];
  int space = 0;
  for (size_t i = 0; i < s.length(); i++) {
    if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] == 32 && s[i - 1] != 32 && i > 0)) {
      a[space] = s[i];
      space++;
    }
  }

  for (int i = 0; i < space; i++) {
    if ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122) || (a[i] == 32 && i != space - 1))
    cout << a[i];
  }
  return 0;
}
