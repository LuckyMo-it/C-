#include <cstdio>
int main()
{   //---auto---  compiler helps you to identify datatype 
    auto answer{42};
    auto foot{12L};
    auto root=5.0f;
    auto cheeseburger=10.0;
    auto confess{false};
    auto cheese{"string"};
    printf("%lf ",root);
    printf("%s ",cheese);
    printf("%d ",answer);



    //auto and reference types
    auto year{2019};
    auto &year_ref=year;
    const auto& year_cref=year;
    auto *year_ptr=&year;
    const auto* year_cprt=&year;
    printf("\n%p",year); 
    printf("\n%p",year_ref); 
    printf("\n%p",year_ptr); 


}