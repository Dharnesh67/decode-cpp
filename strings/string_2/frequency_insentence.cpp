#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std; // lleet 242
int main()
{

    string s = " the the r dharmesh raikwar dhddaihdi hhihdiq the is is is is  the" ;
   
    stringstream str(s);
    string st; // string without spaces
    vector<string> v;

    while (str >> st)
    {
        v.push_back(st); // ek ek words alag  alag access karke v me store karwa rhe h
    }
    sort(v.begin(), v.end()); // vector kop sort kardo
    int count = 1;
    int maxcount = 1;
   
    for (int i = 1; i < v.size(); i++)
    {
       
        if (v[i] == v[i - 1])
        {
            count++;
            
        }
        else count =1;
       
       if(maxcount<count) maxcount= count;
    }
    count  =1;
      for (int i = 1; i < v.size(); i++)
    {
       
        if (v[i] == v[i - 1])
        {
            count++;
            
        }
        else count =1;
       
       if(count==maxcount) {
        cout<< maxcount<<"  "<< v[i]<<endl;
       }
    }

}