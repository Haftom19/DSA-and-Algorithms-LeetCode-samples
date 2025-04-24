/*
**BFS**:

   -represent the graph using Adjancency list
   -intialize a visted array to keep track of visited nodes
   - Uses a queue.

   **DFS**
   -Represent adjacency  list
   -intialize visited array
   -iterative and recursive implementation
*/

#include<iostream>
#include<vector>
#include<queue>


using namespace std;

//defined the function for BFS
/*int start: The starting node for the BFS traversal.

vector<vector<int>>& adjList: The adjacency list representation of the graph. Each index in the outer vector represents a node, and the inner vector contains its neighbors.

vector<bool>& visited: A boolean array to track whether a node has been visited during the traversal.*/


void BFS( int start, vector<vector<int>>& adj,vector<bool>& visited)
{
 
   queue<int>q;          //queue for storing nodes
   visited[start]=true;  //marking the first node as visited
   q.push(start);        //enqueuing the first node 


   while (!q.empty())
   {
      int node = q.front();  //get the first node from queue
      q.pop();             //dequeue the node 
      cout<<node<<" ";     //processing the node 
      
      //visit all neighbours of the node 

      for (int neighbour : adj[node])  //loop through the neighbours
      {
         if (!visited[neighbour])  //if it is not visited
         {
             visited[neighbour]=true; //mark as visted
             q.push(neighbour);  //enque the neighbour
         }
         
      }
      
   }

   cout <<endl;  //print new line after traversal.
   
}

int main ()
{
   int vertices = 6;  //number of of vertices in the graph
   vector <bool>visited(vertices,false);

   vector<vector<int>> adjList = {{1,2},
                                 {0,3,4},
                                 {0,5},
                                 {1},
                                 {1},
                                 {2}}; 

BFS(0,adjList,visited);

return 0;

}




