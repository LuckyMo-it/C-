#include<iostream>
using namespace std;
//-----------constructor in inherintence



// class base{public:
//     int  a;
//     base(int a)
//     {   this->a=a;
//         cout<<this->a;
//     }
// };
// class derive:public base {public:
//     derive(int a,int b):base(b)//this send b as parameter in base class's constructor
//     {
//         cout<<endl<<a*a<<endl;
//     }
// };



//------nesting of class
class base{
    public:
    base (int a)
    {
        cout<<a<<endl;
    }
    
};
class c{
    public:
    base d;
    c(int a,int b):d(b){
        cout <<a<<endl;
    }
};
int main()
{
    // derive demo(56,78);
    c h(90,100);

}