#include <iostream>
#include <stack>
#include <vector>

using namespace std;
void DFS(int start, vector<vector<int>> &adj, vector<bool> &visited) // iterative DFS function
{

    stack<int> s;  // satck for storing nodes
    s.push(start); // pushing thee starting node

    //visited[start] = true; // the starting node is visited

    while (!s.empty())
    {
        int node = s.top(); // get the top node of the stack
        s.pop();            // pop the node from the stack

        if (!visited[node])
        {
            visited[node] = true; // mark as it is visted
            cout << node << " ";  // print the node

            for (int neighbours : adj[node]) // push unvisited neighbours
            {
                if (!visited[neighbours])
                {
                    s.push(neighbours);
                }
            }
        }
    }
    cout<<endl;
}

int main()
{
    int vertices = 6;
    vector<vector<int>> adjList = {{1, 2},
                                   {0, 3, 4},
                                   {0, 5},
                                   {1},
                                   {1},
                                   {1}

    };

    vector<bool> visited(vertices, false);

    DFS(0, adjList, visited);
    
    return 0;
}
