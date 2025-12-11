/* Input Format 
In the question, they will mention whether it is a directed or undirected graph. The first line contains two space-separated integers n and m denoting the number of nodes and the number of edges respectively. Next m lines contain two integers u and v representing an edge between u and v. In the case of an undirected graph if there is an edge between u and v, it means there is an edge between v and u as well. Now the question arises if there is any boundation on the number of edges, i.e., the value of m? The answer is NO. If we add more edges, then the value of m will increase.

Graph Representations
After understanding the input format, let us try to understand how the graph can be stored. The two most commonly used representations for graphs are

Adjacency Matrix
Adjacency Lists
Adjacency Matrix
An adjacency matrix of a graph is a two-dimensional array of size n x n, where n is the number of nodes in the graph, with the property that a[ i ][ j ] = 1 if the edge (vᵢ, vⱼ) is in the set of edges, and a[ i ][ j ] = 0 if there is no such edge.

Consider the example of the following undirected graph,

Input:
5 6
1 2
1 3
2 4
3 4 
3 5 
4 5

Explanation:
Number of nodes, n = 5
Number of edges, m = 6
Next m lines represent the edges. */

The space needed to represent a graph using its adjacency matrix is n² locations. Space complexity = (n*n), It is a costly method as n² locations are consumed.

  // code is here
  int main()
{
    int n, m;
    cin >> n >> m;
    // adjacency matrix for undirected graph
    // time complexity: O(n)
    int adj[n+1][n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1  // this statement will be removed in case of directed graph
    }
    return 0;
}

/* we stored all the neighbors in the particular indexes. In this representation, for an undirected graph, each edge data appears twice. For example, nodes 1 and 2 are adjacent hence node 2 appears in the list of node 1, and node 1 appears in the list of node 2. So, the space needed to represent an undirected graph using its adjacency list is 2 x E locations, where E denotes the number of edges.

Space complexity = O(2xE)

This representation is much better than the adjacency matrix, as matrix representation consumes n² locations, and most of them are unused. */
