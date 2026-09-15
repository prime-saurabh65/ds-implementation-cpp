#include<iostream>
using namespace std;
#define INVALID_VERTEX;

class GraphMatrix
{
    private:
        int v_count;
        int e_count;
        int **adj;
    public:
        void createGraph(int,int);
        void printMatrix();
        void printAdjacentNodes(int);
        bool isIsolated(int);
        ~GraphMatrix();
};

void GraphMatrix::createGraph(int vno, int eno) {
    int u,v;
    v_count=vno;
    e_count=eno;
    adj = new int*[v_count];
    for(int i=0; i<v_count; i++) {
        adj[i] = new int[v_count];
    }
    for(int i=0; i<v_count; i++) {
        for(int j=0; j<v_count; j++) {
            adj[i][j]=0;
        }
    }
    for(int k=1; k<=e_count; k++) {
        cout<<"\nEnter node numbers connecting edges: ";
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}

void GraphMatrix::printMatrix() {
    cout<<"\n";
    for(int i=0; i<v_count; i++) {
        for(int j=0; j<v_count; j++) {
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void GraphMatrix::printAdjacentNodes(int v) {
    if(v<0 || v>=v_count) {
        throw INVALID_VERTEX;
    }
    for(int i=0; i<v_count; i++) {
        if(adj[v][i] == 1) {
            cout<<i<<" ";
        }
    }
}

bool GraphMatrix::isIsolated(int v) {
    bool flag=true;
    if(v<0 || v>=v_count) {
        throw INVALID_VERTEX;
    }
    for(int i=0; i<v_count; i++) {
        if(adj[v][i] == 1) {
            flag=false;
            // cout<<endl<<"V"<<i;
        }
    }
    return flag;
}
GraphMatrix::~GraphMatrix() {
    for(int i=0; i<v_count; i++) {
        delete adj[i];
    }
    delete []adj;
}

int main()
{
    
    return 0;
}