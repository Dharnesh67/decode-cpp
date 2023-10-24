#include<iostream>
#include<vector>
using namespace std;
class player  {
  public:
  int health;
player(){
    cout<<"ye constructor h \n";
  }
 
 ~player(){
    cout<<"ye destructor h \n"; // scope kae bahar jayega object to destructor call hoga
  }
};
int main(){
     player amit;
     player ankit;
     player mess;

}