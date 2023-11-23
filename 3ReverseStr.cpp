#include <iostream>
using namespace std;

string reverseString(string str) 
{
  int n = str.length();

  for (int i = 0; i < n / 2; i++) {
    swap(str[i], str[n - i - 1]);
  }

  return str;
}
int main() {
  string str = "byteboard";
  string str1 = "X";
  string reversedStr = reverseString(str);
  string reversedStr1 = reverseString(str1);
  cout << reversedStr << endl;
  cout << reversedStr1 << endl;

  return 0;
}
