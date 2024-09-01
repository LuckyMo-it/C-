#include<iostream>
#include<cstdio>
using namespace std;
//   struct college{
//         char name[256];
//         int a;
//     };
//     void print(college* college_ptr)
//     {
//         printf("%s ",college_ptr->name);
//         printf("%d ",college_ptr->a);
//     }

    struct college{
        char name[90];
        int rating; 
    };
    void show(college* clg,int size)
    {   for(size_t i=0;i<size;i++){
        printf("%s ",clg[i].name);
        printf("%d ",clg[i].rating);}
    }
int main(){
    // int key[]{1,2,3};
    // int *key_addr=key;
    // printf("%d",*key_addr);
    // college best[]={{"iit",8},{"nit"},{"iiit",9}};  
    // print(&best[1]);//array decays to pointer
    // return 0;
    college ajmer_clg[]={{"aryan",8},{"decole",1},{"aryabhatt",0}};
    show(ajmer_clg,sizeof (ajmer_clg)/sizeof(college));

}