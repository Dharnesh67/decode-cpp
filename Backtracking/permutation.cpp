#include <bits/stdc++.h>
using namespace std;
void permutaation(string s, int j = 0) // function to print all the permutations of a string
// for non repeating characters
{
    // explain the code at each step
    if (j == s.length()) // base case
    {
        cout << s << endl; // print the string
    }
    for (int i = j; i < s.length(); i++) // loop through the string
    {
        swap(s[j], s[i]);       // swap the characters
        permutaation(s, j + 1); // call the function recursively
        swap(s[j], s[i]);       // swap the characters back
    }                           // backtracking
}
int main()
{
    string a = "abc";
    permutaation(a);
}