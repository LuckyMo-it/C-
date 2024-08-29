#include<iostream>
#include<cstdio>
using namespace std;
  struct college{
        char name[256];
        int a;
    };
    void print(college* college_ptr)
    {
        printf("%s ",college_ptr->name);
        printf("%d ",college_ptr->a);
    }
int main(){
    // int key[]{1,2,3};
    // int *key_addr=key;
    // printf("%d",*key_addr);
    college best[]={{"iit",8},{"nit"},{"iiit",9}};  
    print(&best[1]);//array decays to pointer
    return 0;
}
