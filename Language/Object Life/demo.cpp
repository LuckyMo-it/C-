#include<cstdio>
#include<stdexcept>
void gg(int a)
{
    if(a==60) 
        throw std::runtime_error{"this is exception"};
    printf("%d \n",a);
}
int main()
{
try{
    gg(70);
    gg(60);
    gg(1000);

}
catch(const std::runtime_error& e){
    printf("%s",e.what());
}
}