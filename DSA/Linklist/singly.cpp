#include <cstdio>
class linklist
{public:
    struct node
    {
        int data;
        node *next;
    } *p;
    linklist()
    {
        p=nullptr;
    }
    void append(int num);
    void show();
    void unshift(int num);
    void addat(int pos,int data);


}; 
void linklist::addat(int pos,int data)
{
    node*first,*second,*r,*temp;
    first=second=p;
    while(first!=nullptr)
    {
        
        if(first->data==pos)
        {
            r=new node;
            r->data=data;
            r->next=nullptr;
            temp=r;
            temp->next=first->next;
            first->next=temp;
            return;
        }
        second=first;
        first=first->next;

    }
    printf("data not found");
}
void linklist::unshift(int num)
{
    node*temp,*r;
    temp=p;
    if(temp==nullptr)
    {
        r=new node;
        r->data=num;
        r->next=nullptr;
        p=r;
        return;
    }

    r=new node;
    r->data=num;
    r->next=nullptr;
    temp=r;
    temp->next=p;
    p=temp;
    
}
void linklist::append(int num)
{
    node *temp,*r;
    temp=p;
    if(temp==nullptr)
    {
        r=new node;
        r->data=num;
        r->next=nullptr;
        
        p=r;
        return;
    }
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    r=new node;
    r->data=num;
    r->next =NULL;
    temp->next =r;
    temp=r;

    
}
void linklist::show()
{
    node *temp;
    temp=p;
    while(temp!=nullptr)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    linklist t;
    // t.append(90);
    // t.append(900);
    // t.append(80);
    // t.append(9);
    t.unshift(79);
    t.unshift(100);

    t.unshift(50);
    t.addat(100,500);
    t.show();
}