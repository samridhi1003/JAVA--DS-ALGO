// #include <iostream>
// using namespace std;

// int main(int args,char** argb)
// {
//     cout<<"helloworld";
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

    class path
    {
     public:
        int src;
        int nbr;

    
        path(int src, int nbr)
        {
            this->nbr = nbr;
            this->src = src;
        }
    };

    bool hasPath(vector<vector<path>> &graph, int src, int dest, bool visited[])
    {
        if (src == dest)
        {
            return true;
        }

        visited[src] = true;
        
        for (path* edge : graph[src])
        {
            if (visited[edge->nbr] == false)
            {
                bool hasnbrpath = hasPath(graph, edge->nbr, dest, visited);
                if (hasnbrpath == true)
                {
                    return true;
                }
            }
        }
        return false;
    }

    int main()
    {
        vector<vector<path >> edges;

        int noe, nov;
        cin >> noe;
        cin >> nov;
        int v1, v2;
        for (int i = 0; i < noe; i++)
        {
            cin >> v1;
            cin >> v2;
            edges[v1].push_back(path(v1, v2));
            edges[v2].push_back(path(v2, v1));
        }

        int src, dst;
        cin >> src;
        cin >> dst;
        bool visited[nov];
        bool path = hasPath(edges, src, dst, visited);
        cout<<path;

        return 0;
    }