#include <iostream>
#include<string>
#include <vector>
using namespace std;
void permu(string a, int i, string ans)
{
    if (i == a.size())
    {
        cout<<ans;
        return;
    }
    

}
int main()
{
    string a = "abc";
    permu(a, 0, "");
}
