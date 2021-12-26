#include<bits/stdc++.h>
#include<list>
#include <queue>
using namespace std;

class Graph{
    int vertex;
    list<int> *l;

    public:
    Graph(int v){
    vertex=v;
    l=new list<int>[vertex];
    }

    void addNode(int i,int j){
    l[i].push_back(j);
    l[j].push_back(i);
    }

    void printNodes(){
    for(int i=0;i<vertex;++i){
        cout<<i<<"--->";
        for(auto nbrs:l[i]) cout<<nbrs<<",";
        cout<<endl;}
    }

    void bfs(int source){
    queue<int> bfsq;
    bool* visited = new bool[vertex]{0};

    bfsq.push(source);
    visited[source]=true;

    while(!bfsq.empty()){
        int first=bfsq.front();
        cout<<first<<"->";
        bfsq.pop();
        for(auto nbrs:l[first]){
            if(!visited[nbrs]){
                bfsq.push(nbrs);
                visited[nbrs]=true;
            }
        }

    }

    }

    void dfs(int source){
        bool *visited=new bool[vertex]{0};
        dfsHelper(source,visited);
    }

    void dfsHelper(int node,bool *visited){
        visited[node]=true;
        cout<<node<<"->";
        for(int nbr:l[node]){
            if(!visited[nbr]){
                dfsHelper(nbr,visited);
            }
        }


    }









};
