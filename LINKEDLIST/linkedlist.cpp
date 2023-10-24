#include <iostream>
#include <vector>    // some basics of classes
using namespace std; // it is important for linked list
class students
{
public:
    string name;
    int rno;
    int marks;
    students(string n, int r, int m)
    {
        // this is called the constructor this will help us in giving seperate values
        name = n;
        rno = r;
        marks = m;
    }
};
void change(students *s)
{
    s->name = "changed";
}
int main()
{

    students s("dharmesh", 100, 120);
    students *ptr = &s;
    cout << s.name << endl;
    (*ptr).name = "harsh";
    cout << s.name << endl;
    ptr->name = "kallu";
    cout << s.name << endl;
    change(&s);
    cout << s.name << endl;

    return 0;
}