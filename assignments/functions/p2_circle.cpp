#include <iostream >
using namespace std;
float AREA(int a)
{
 
return  a*a*3.14;    

}
int main()
{
    int n;
    cout<<"ENTER THE RADIUS OF CIRCLE :";
    cin >> n;
   cout<<AREA(n);
}