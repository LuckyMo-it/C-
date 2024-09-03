#include <cstdio>
#include <stdexcept>
using namespace std;
//------------try catch block--------------
// struct groucho{
//     void forget(int x)
//     {
//         if(x==0xFACE)
//         {
//             throw runtime_error{"i'd be glad to make an exception"};//throwing error which check by try block
//         }
//         printf("forgot 0x%x\n",x);
//     }
// };


//------inheritence-------
class superclass{
    public:
    int x=10;
};
class subclass:public superclass{
    public:
    int y=10;
    int foo(){
        return x+y;
    }
};
int main()
{
    // groucho obj;
    // try{//getting exception from throw
    //     obj.forget(0xc0de);
    //     obj.forget(0xFACE);
    //     obj.forget(0xaaa);
    // }
    // catch(const runtime_error& e)//catching exception from try block
    // {
    //     printf("exception caught with message %s\n",e.what());
    // }
    subclass t;
    printf("%d",t.foo());
}
