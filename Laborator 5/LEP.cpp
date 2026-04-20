#include <iostream>
#include <queue>
#include "LEP.h"

using namespace std;

Node* createNode(int val) 
{
    Node* p = new Node;

    p->data = val;
    p->left = p->right = NULL;

    return p;
}

int lep(Node* cap, int n)
{
    if(!cap) return 0;

    if (!cap->left && !cap->right)
        return cap->data * n;

    return lep(cap->left, n + 1) + lep(cap->right, n + 1);
}

Node* LEP(int x[], int n)
{
    priority_queue<Node*, vector<Node*>, Compare> prio_q;

    for (int i = 0; i < n; i++) 
        prio_q.push(createNode(x[i]));

    while (prio_q.size() > 1)
    {
        Node* a = prio_q.top(); 
        prio_q.pop();
        Node* b = prio_q.top(); 
        prio_q.pop();

        Node* t = createNode(a->data + b->data);
        t->left = a;
        t->right = b;

        prio_q.push(t);
    }

    return prio_q.top();
}

