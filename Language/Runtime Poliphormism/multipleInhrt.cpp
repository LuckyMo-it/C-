#include <cstdio>
class data1{
    public: 
    int a;
};
class data2{
    public:
    int b;
};
class operation:public data1,public data2{
    public:
    int c;
    void set(){a=9;b=5;}
    void mul()
    {
        c=a*b;
    }
};
int main()
{
    operation d;
    d.set();
    d.mul();
    printf("%d",d.c);
}