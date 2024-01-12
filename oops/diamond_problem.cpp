#include<bits/stdc++.h>
using namespace std;
class parent
{
public:
    parent(){ cout << "parent class"<<endl;  }
};
class child1 : public parent
{
public:
    child1(){
        cout<<"child class"<<endl;
    }
};
class child2 : public parent
{
public:
    child2(){
        cout<<"child class"<<endl;
    }
};
class gchild : public child1 ,public child2,public parent
{
public:
    gchild(){
        cout<<"grand child class";
    }
};
int main(){
    gchild n;
}