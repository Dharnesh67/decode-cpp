#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  string a;
  getline(cin, a);
  int n = a.length();
  vector<string>b;
  for (int i = 0; i <n; i++)
  {
    b.push_back(a.substr(i,i+1));

  }
   for (int i = 0; i <n; i++)
  {