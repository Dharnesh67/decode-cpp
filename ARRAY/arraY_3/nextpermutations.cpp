// #include <iostream>
// #include <vector>
// #include <algorithm> // leet  code >>31
// using namespace std;

// void nextPermutation(vector<int> &a)
// {
//   int n = a.size();
//   int idx = -1;
//   // 1 finding pivot  (where change occurs)
//   for (int i = n - 2; i >= 0; i--)
//   {
//     if (a[i] < a[i + 1])
//     {
//       idx = i;
//       break;
//     }
//   }
//   if (idx == -1)
//   { // if our array is already  the answer
//     reverse(a.begin(), a.end());
//     return;
//   }
//   //  2 sort  and reverse the array  after pivot index
//   reverse(a.begin() + idx + 1, a.end());
//   // 3finding just greater element
//   int j = -1;
//   for (int i = idx + 1; i < n; i++)
//   {
//     if (a[i] > a[idx])
//     {
//       j = i;
//       break;
//     }
//   }
//   // 3idx se ek baad vale index se reverse karo array ko

//   // swapping the pivot index thing
//   int temp = a[idx];
//   a[idx] = a[j];
//   a[j] = temp;

// }

// int main()
// {
//   vector<int> a;
//   a = {1, 2, 3};
//   nextPermutation(a);
//   for (int i = 0; i <a.size(); i++)
//   {
//     cout<<a[i]<<" ";
//   }

//   return 0;
// }

/* mere haath ka code*/
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
