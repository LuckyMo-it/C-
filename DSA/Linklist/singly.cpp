#include<iostream>
#include<cstdio>
class node{
    public:
    int data;
    node* next;
    node()
    {
        next=nullptr;
    }
};
class linklist{public:
    node *p=new node;
    
    void append(int num);
    void show();
};
void linklist::show()
{
    node *temp;
    temp=p;
    while(temp!=nullptr)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    

    
}
void linklist::append(int num)
{
    node *temp,*r;
    if(p==nullptr)
    {
        temp=new node;
        temp->data=num;
    }
    else
    {
        temp=p;
        while(temp->next!=nullptr)
            temp=temp->next;
        r=new node;
        r->data=num;
        temp->next=r;
    }
}
int main()
{
    linklist test;
    test.append(23);
    test.append(20);
    test.append(11);
    test.append(90);
    test.show();
}