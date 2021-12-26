#include <bits/stdc++.h>
#include "graphs.h"
using namespace std;


int main(){
    Graph g(7);
    g.addNode(0,2);
    g.addNode(0,6);
    g.addNode(1,3);
    g.addNode(3,4);
    g.addNode(4,5);
    g.addNode(1,2);
    //g.printNodes();
    g.bfs(2);
    cout<<endl;
    g.dfs(2);



return 0;
}
