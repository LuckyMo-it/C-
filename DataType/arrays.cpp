#include<cstdio>
using namespace std;
int main(){
    // initialization
    int array[]={1,2,3,4};
    char eng[]="a book is better than 100 friends";
    char16_t chn[]=u"\u4e66";
    char bell=7;
    printf("%c",bell);
    printf("%s %s\n",eng, chn);
    //range based / for each    looping
    for(size_t i:array)
    {
        printf("%d ",i);
    }
    return 0;
}