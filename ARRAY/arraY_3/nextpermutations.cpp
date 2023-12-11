#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nextPermutation(vector<int> &a)
{
  int s = a.size();

  int idx = -1;
  for (int i = s - 2; i >= 0; i--)
  {
    if (a[i] < a[i + 1]) // change kha par aa rha h
    {
      idx = i;
      break;
    }
  }
  if (idx == -1)
  { // agar change nhi ho rha h to reverse maaro bas
    reverse(a.begin(), a.end());
  }

  else   // or agar change aa rha h to index ke aage ka reverse karo or 
  // phir index or ek aage ka number swap  maar do khatam question
  {
    reverse(a.begin() + idx + 1, a.end());
    int temp = a[idx];
    a[idx] = a[idx + 1];
    a[idx + 1] = temp;
  }
}
int main()
{
  vector<int> a;
  a = {1,2,3,4};
  nextPermutation(a);
  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
}
