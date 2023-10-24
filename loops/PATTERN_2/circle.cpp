#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int radius;
   cout << "Enter radius of circle: ";
   cin >> radius;
   for(int y=-radius; y<=radius; y++) {
      for(int x=-radius; x<=radius; x++) {
         if(sqrt(x*x + y*y) <= radius) {
            cout << "*";
         } else {
            cout << " ";
         }
      }
      cout << endl;
   }
   return 0;
}
