#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{ // highest frequencyy of number
    int count = 0;
    string s ; // frequency character  is
    cin>>s;
    int max = 0;
    // asaan methed
    vector<int> a(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        int ascii = (int)s[i];
        a[ascii - 97]++; // +97 se dekhenge naa a= 97
    }
    int idx = 0;
    for (int i = 0; i < 26; i++)
    {
        // traversing in array
        // to find max
        if (max < a[i])
        {
            max = a[i];
            idx = i;
        }
    }
     cout << char(idx + 97) << " " << max;
    // for (int i = 0; i < 26; i++)
    // { // traversing for printing
    //     if (a[i] == max)
    //     {
    //         cout << char(i + 97) << " " << max;
    //     }
    // } loop se bhi kar sakte h orr index ko save karke bhi

    // bekar method
    //  for (int i = 0; i < s.size(); i++)
    //  {
    //      char ch = s[i];
    //      int count = 1;
    //      for (int j = i + 1; j < s.size(); j++)
    //      {
    //          if (s[i] == s[j])
    //          {
    //              count++;
    //          }
    //      }
    //      if (max < count)
    //      {
    //          max = count; /* code */
    //          cout<<ch << max<<endl;
    //      }
    //  }
}