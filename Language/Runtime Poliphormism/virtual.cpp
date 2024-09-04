#include<cstdio>
#include<iostream>
using namespace std;

// struct base{
//    virtual  void message()
//     {
//         printf("that's baseclass\n");
//     }
// };
// struct derived:base{
//     void message() override
//     {
//         printf("that's derived class\n");
//     }
// };









//private and public in inheritence
class b{

    int a;
    protected:
    int b;
    void get_ab();
    int get_a();
    void show_a(); 

};
class d:protected b{
    int c;
    public:
    void mul();
    void display();
};
//base class
void b::get_ab()
{
    a=5;b=10;
}
int b::get_a()
{
    return a;
}
void b::show_a(){
    cout<<"a="<<a<<"\n";
}
//derived class
void d::mul()
{
    c=b*get_a();
}
void d::display(){
    show_a();
    cout<<"b="<<b<<"\n";
    cout<<"c="<<c<<"\n";
    
}
int main()
{
    // base b;
    // b.message();
    // derived d;
    // d.message();
    // base &e=d;
    // e.message();


    d demo;
    demo. get_ab();
    demo.show_a();
    demo.mul();
    demo.display();


}