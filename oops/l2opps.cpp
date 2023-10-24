#include<iostream>
#include<vector>
using namespace std;
class player  {
    private:
  int health;
  int score;
  public:
  int gethealth(){
    return health;
  }
 void sethealth(int health){
    player::health = health; // player method
  }
  int getscore(){
    return score;
  }
void setscore(int score){
   this->score = score; // this function
  }
  
};
int main(){
     player amit;

     amit.sethealth(100);
     amit.setscore(10);
    cout<<amit.gethealth()<<endl;
     cout<<amit.getscore();

   

}