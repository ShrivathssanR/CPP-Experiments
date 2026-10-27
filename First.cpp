#include<iostream>
#include<string>
using namespace std;
class A
{
    private:
    int rollno;
    string name;
    public:
    A(int r,string s)
    {
       rollno=r;
       name=s; 

    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"RollNo:"<<rollno;
    }
};
int main()
{
   A a(100,"ABC");
   a.display();

}