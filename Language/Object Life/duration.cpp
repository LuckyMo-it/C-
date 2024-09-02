#include<cstdio>

//-----------static variable
// static int rat_things_power=100;
// void power_up_rant_thing(int nucler_isotops){
//     rat_things_power+=nucler_isotops;
//     const auto waste_heat=rat_things_power*20;
//     if(waste_heat>10000)
//     {
//         printf("wanrnig! hog doggie\n");
//     }
// }






//----static member


// struct rat{
// static int rat_things_power;
// static thread_local int rat_hp=60;
// static void power_up_rant_thing(int nucler_isotops){
//     rat_things_power+=nucler_isotops;
//     const auto waste_heat=rat_things_power*20;
//     if(waste_heat>10000)
//     {
//         printf("wanrnig! hog doggie\n");
//     }
// }};
// int rat::rat_things_power=100;
// int rat::rat_hp=1000;





//----dynamic storage duration




int main()
{
    // printf("rat thing power:%d\n",rat_things_power);
    // power_up_rant_thing(100);
    // printf("rat thing power:%d\n",rat_things_power);
    // power_up_rant_thing(500);
    // printf("rat thing power:%d\n",rat_things_power);
     



     rat::power_up_rant_thing(100);
     rat::power_up_rant_thing(500);
}