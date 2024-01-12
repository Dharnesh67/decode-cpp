#include <bits/stdc++.h>
using namespace std;
class fruits
{
public:
    string name;
    string color;
};
class rectangle
{
public:
    int l;
    int b;
    rectangle() // default constructor
    {
        l = 1;
        b = 1;
    }
    rectangle(int x, int y) // parameterised constructor
    {
        l = x;
        b = y;
    }
    ~rectangle()  //destructor
    {
        cout<<" destructor is called"<<endl;
    }
private:
    int x=23;
protected:
    
};
int main()
{
    fruits mango;
    mango.color = "red";
    mango.name = "mangof";
    rectangle r =  rectangle(2,3);
    rectangle R; 
    cout<<r.l<<" "<<R.l<<endl;
    cout << mango.color;
}