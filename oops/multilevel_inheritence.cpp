#include <bits/stdc++.h>
using namespace std;
class player
{
public:
    player(){ cout << "parent class"<<endl;  }
};
class name : public player
{
public:
    name(){
        cout<<"child class"<<endl;
    }
};
class gchild : public name
{
public:
    gchild(){
        cout<<"grand child class";
    }
};
using namespace std;
int main()
{
    gchild amit;
} 