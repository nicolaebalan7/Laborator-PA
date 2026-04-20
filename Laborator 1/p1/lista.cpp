#include"lista.h"


LDI::LDI()
{
    head=0;
}

void LDI::inserare(int value, int pos)
{
    Node* newNod =new Node;
    newNod->data=value;
    newNod->prev=0;
    newNod->next=0;
    if(head==0)
        head=newNod;
    else if (pos == 0)
    {
        newNod->next = head;
        head->prev = newNod;
        head = newNod;
    }
    else
    {
        int i = 0;
        Node* p = head;
        while(i < pos-1 && p->next != 0)
        {
            i++;
            p=p->next;
        }
        if(p->next != 0)
        {
            newNod->next=p->next;
            p->next->prev=newNod;
            p->next=newNod;
            newNod->prev=p;
        }
        else
        {
            p->next=newNod;
            newNod->prev=p;
        }    
    }

        

}