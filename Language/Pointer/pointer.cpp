#include<cstdio>
int main(){
    //------pointer------
    // int a=10;
    // int* ptr=&a;//pointer 
    // *ptr=90;//dereferencing operator
    // printf("%d",*ptr);


    //--------class-------
    class dog{
        public:
        
        int pow;
        void show ()
        {
            
            printf("%d",pow);
        }
        void get(char x[],int p)
        {
            
            pow=p;

        }
    };
    dog lab;
    dog *lab_house=&lab;
    lab_house->pow=79;//member-of-pointer operator
    // (*lab_house).pow=101;
    lab_house->show();
    printf("\n%p",lab_house);

    // dog lab;
    
    // lab.pow=90;
    // lab.show();
    

}