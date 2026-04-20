#ifndef LISTA_H_
#define LISTA_H_

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next=0;
    Node* prev=0;
};

class LDI
{
public:
    Node* head;
    LDI();
    void inserare(int value, int pos);
    void afisare()
    {
        Node* p=head;
        while(p)
        {
            cout<<p->data<<" ";
            p=p->next;

        }
        cout<<endl;
    }


};


#endif