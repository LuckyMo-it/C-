#include<iostream>
using namespace std;
int main(){
    class man{
        char name[100]="john";
        int age=90;
        
    };
    man indian[20];

    // indian[0].(*name)="";
    man*indianAddr=indian;
    printf("%p",indianAddr);
    printf("%p",indianAddr+5);

    
    return 0;
}