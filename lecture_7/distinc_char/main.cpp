#include<iostream>
#include<string>
using namespace std;

/*
 * create a string which holds 52 characters in the alphabet
 * create an array of 52 elements. This array acts like a flag, each index represents a character in the alphabet.
 * If a character is found, its index in the array will be 1.
 * Iterate through the array and count all elements which have value = 1
 */

void findOccurrence(int flag[], string &a, string &s) {
  for (int i = 0; i < 52; i++) flag[i] = 0;
  int f;
  for (size_t i = 0; i < s.length(); i++) {
    f = a.find(s[i]);
    flag[f] = 1;
  }
}

int main () {
  string s;
  getline(cin, s);
  string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int flag[52];
  int count = 0;

  findOccurrence(flag, alpha, s);

  for (int i = 0; i < 52; i++) {
    if (flag[i]) count++;
  }

  cout << count;
  return 0;
}
