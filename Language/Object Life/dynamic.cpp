#include<cstdio>
int main()
{
    int *ptr=new int{2};
    int *arr=new int[5];
    for(int i=0;i<=4;i++,arr++)
    {
        *arr=i+1;
    }
    printf("%d ",*ptr);
    printf("%d ",*arr);
    arr-=5;//because pointer forwarded 
    for(int i=0;i<=4;i++,arr++)
    {
    printf("\n%d ",*arr);
        
    }
    delete ptr;
    delete[] arr;
    
}