#include<iostream>
#include<cstdio>

class first{
    public:
    int a;
};
class second:public first{
    public:
    void get()
    {
        a=90;
    }
};
class third:public second {
    public:
    int  sqrt(){
        return a*a;
    }
};
int main()
{
    third a;
    a.get();
    std::cout<<a.sqrt();
}