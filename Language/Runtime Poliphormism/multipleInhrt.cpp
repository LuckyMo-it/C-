#include <cstdio>
//-----multiple inheritence


// class data1{
//     public: 
//     int a;
//     void display()
//     {
//         printf("hello data1");
//     }
// };
// class data2{
//     public:
//     int b;
//     void display()
//     {
//         printf("hello data2");
//     }
// };
// class operation:public data1,public data2{
//     public:
//     int c;
//     void set(){a=9;b=5;}
//     void mul()
//     {
//         c=a*b;
//     }
//     void display()
//     {
//         data1::display();
//     }
// };


//-------ambiguity situation


// class grandparent
// {
// public:
//     void show(){
//         printf("hi iam grand parent");
//     }
// };
// class parent1:virtual public grandparent {
//     public:
// void dis(){
//     printf("display parent2");
// }
// };
// class parent2:public virtual grandparent{
// public:
// void dis(){
//     printf("display parent2");
// }
// };
// class child:public parent1,public parent2{
//     public:
// };


//abstract class

class abstract {
    public :
     virtual void spec()=0;
};
class derive:public abstract{
public :
    void spec(){
        printf("donald trump");
    }
};
class rep:public abstract{
    public:
    void spec()
    {
        printf("\nkamla harris");
    }
};
int main()
{
    // operation d;//multiple inheritence
    // d.set();
    // d.mul();
    // printf("%d",d.c);
    // d.data2::display();


    //ambiguity 
    // child d;
    // d.show();
    // d.parent1::dis();

    //abstract class
    derive d;
    d.spec();
    rep c;
    c.spec();
    
}