#include<cstdio>
// ----------this-------------
// class behav{public:
//     int a;
//         int b;

//     void show(int a=9000)
//     {
//         printf("%d\n%d",a,this->a);
//     }
// } ;


//------------------const---------------
//const argument
// void con_test(const char* str)
// {
//     printf("you cant change me my buddy %s",str);
//     // str[0]='p';//gives an error
// }

//------const variable
// const int a=90;

//-----member initializer list
//use for initialization of members specially const members
class how{public:
    const int a;
    int b;
    int c;
    const float d;
    how(int a,int b,int c,float d):a{a},b{b},c{c},d{d}{}//member initialization
    void show()const{
        printf("%d %d %d %f",a,b,c,d);
    }
};




int main()
{
    // behav that{8,7};
    // that.show();
    // con_test("mohit");
    how way(12,23,45,9.0);
    way.show();
}