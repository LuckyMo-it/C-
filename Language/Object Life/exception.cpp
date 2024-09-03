#include <cstdio>
#include <stdexcept>
using namespace std;
struct groucho{
    void forget(int x)
    {
        if(x==0xFACE)
        {
            throw runtime_error{"i'd be glad to make an exception"};
        }
        printf("forgot 0x%x\n",x);
    }
};
int main()
{
    groucho obj;
    try{
        obj.forget(0xc0de);
        obj.forget(0xFACE);
        obj.forget(0xaaa);
    }
    catch(const runtime_error& e)
    {
        printf("exception caught with message %s\n",e.what());
    }
}