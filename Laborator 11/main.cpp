#include <iostream>
#include <queue>
using namespace std;

#define NMAX 100

struct Nod 
{
    int elem;
    Nod* succ;
};

struct Digraf 
{
    int n;
    Nod* cap[NMAX];
    int imdegree[NMAX];
};

void adaugaArc(Digraf& A, int u, int v) 
{
    Nod* nou = new Nod();
    nou->elem = v;
    nou->succ = A.cap[u];
    A.cap[u] = nou;
    A.imdegree[v]++;
}

bool sortareTopologica(Digraf& A, int sol[], int& lungSol) 
{
    queue<int> C;
    lungSol = 0;

    for (int i = 0; i < A.n; i++) 
    {
        if (A.imdegree[i] == 0)
            C.push(i);
    }

    while (!C.empty()) 
    {
        int u = C.front();
        C.pop();
        sol[lungSol++] = u;

        Nod* l = A.cap[u];
        while (l != nullptr) 
        {
            A.imdegree[l->elem]--;
            if (A.imdegree[l->elem] == 0)
                C.push(l->elem);
            l = l->succ;
        }
    }

    if (lungSol != A.n)
        return false; 

    return true;
}

int main() 
{
    Digraf A;
    int m; 

    cout << "Numar noduri: ";
    cin >> A.n;
    cout << "Numar arce: ";
    cin >> m;

    for (int i = 0; i < A.n; i++) 
    {
        A.cap[i] = nullptr;
        A.imdegree[i] = 0;
    }

    cout << "Introduceti arcele u->v: \n";
    for (int i = 0; i < m; i++) 
    {
        int u, v;
        cin >> u >> v;
        adaugaArc(A, u, v);
    }

    int sol[NMAX];
    int lungSol;

    if (sortareTopologica(A, sol, lungSol)) 
    {
        cout << "Sortare topologica: ";
        for (int i = 0; i < lungSol; i++)
            cout << sol[i] << " ";
        cout << endl;
    } 
    else 
    {
        cout << "Graful contine un ciclu!\n";
    }

    return 0;
}