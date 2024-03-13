#include <bits/stdc++.h>
using namespace std;

void permutaation(string s, int j = 0) // function to print all the permutations of a string
{

    if (j == s.length())
    {
        cout << s << endl;
    }
    unordered_set<char>st;
    for (int i = j; i < s.length(); i++) // loop through the string
    {
        if(st.count(s[i])) continue;
        st.insert(s[i]);
        swap(s[j], s[i]);       // swap the characters
        permutaation(s, j + 1); // call the function recursively
        swap(s[j], s[i]);       // swap the characters back
    }                           // backtracking
}
int main()
{
    string a = "aba";
    permutaation(a);
}