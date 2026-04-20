#pragma once

struct Node 
{
    int data;
    Node* left;
    Node* right;
};

struct Compare 
{
    bool operator()(Node* a, Node* b) 
    {
        return a->data > b->data; 
    }
};

int lep(Node* cap, int n);
Node* createNode(int val);
Node* LEP(int x[], int n);