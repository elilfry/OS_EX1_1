// We took the dijkstra algorithm from geeksforgeeks and modified it to the format we've been asked to:
#include <iostream>
#include <vector>
using namespace std;
#include <limits.h>

// Number of vertices in the graph

vector<vector<int>> loadGraph(size_t size){
    vector<vector<int>> graph(size, vector<int>(size, 0));
    //print the graph

    for(size_t i = 0; i<size; i++){
        for(size_t j = 0; j<size; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    int input;
    //Get the input weights and place them in the adjacency matrix
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            if(i != j){
                do{
                    cout << "Enter the weight of [" << i << "] -> [" << j << "] edge";
                    cin >> input;
                    if (input < 0){
                        cout << "Invalid input - The weight of the edge must be greater or equal to 0";
                    }
                    else{
                        graph[i][j] = (size_t)input;
                    }
                } while(input < 0);
            }
        }
    }
    

    //print the graph

    for(size_t i = 0; i<size; i++){
        for(size_t j = 0; j<size; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    
    
    return graph;
}

vector<vector<int>> getNewGraph(){
    cout << "Enter the amount of vertices in the graph";
    size_t numVertices;
    cin >> numVertices;

    //create a 2d array using vectors for dinamic allocation in runtime

    vector<vector<int>> graph(numVertices, vector<int>(numVertices, 0));
    //print the graph

    for(size_t i = 0; i<numVertices; i++){
        for(size_t j = 0; j<numVertices; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    //Get the input weights and place them in the adjacency matrix
    for (size_t i = 0; i < numVertices; i++) {
        for (size_t j = 0; j < numVertices; j++) {
            if(i != j){
                cout << "Enter the weight of [" << i << "] -> [" << j << "] edge:  \t";
                cin >> graph[i][j];
            }
        }
    }
    
    
    return graph;




    // // Create a new adjacency matrix
    // int** graph = new int*[numVertices];
    // for (int i = 0; i < numVertices; i++) {
    //     graph[i] = new int[numVertices];
    // }
    
    // // Initialize the adjacency matrix with 0s
    // for (int i = 0; i < numVertices; i++) {
    //     for (int j = 0; j < numVertices; j++) {
    //         graph[i][j] = 0;
    //     }
    // }
    
    // // Get the input weights and place them in the adjacency matrix
    // for (int i = 0; i < numVertices; i++) {
    //     for (int j = 0; j < numVertices; j++) {
    //         cout << "Enter the weight of [" << i << "] -> [" << j << "] edge";
    //         cin >> graph[i][j];
    //     }
    // }
    
    // delete graph;

    // return graph;
}

// A utility function to find the vertex with minimum
// distance value, from the set of vertices not yet included
// in shortest path tree
size_t minDistance(vector<int> dist, vector<bool> sptSet, size_t size)
{

    // Initialize min value
    int min = INT_MAX;
    size_t min_index;

    for (size_t v = 0; v < size; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}

// A utility function to print the constructed distance
// array
void printSolution(vector<int> dist)
{
    cout << "";
    cout << "Vertex \t Distance from Source" << endl;
    for (size_t i = 0; i < dist.size() ; i++)
        cout << i << " \t\t" << dist[i] << endl;
}

// Function that implements Dijkstra's single source
// shortest path algorithm for a graph represented using
// adjacency matrix representation
void dijkstra( vector<vector<int>> &graph, size_t src)
{
    //size of the graph
    size_t numVertices = graph.size();
    vector<int> dist(numVertices); // The output array.  dist[i] will hold the
                 // shortest
    
    // distance from src to i

    vector<bool> sptSet(numVertices); // sptSet[i] will be true if vertex i is
                    // included in shortest
   
    // path tree or shortest distance from src to i is
    // finalized

    // Initialize all distances as INFINITE and stpSet[] as
    // false
    for (size_t i = 0; i < numVertices; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (size_t count = 0; count < numVertices - 1; count++) {
        // Pick the minimum distance vertex from the set of
        // vertices not yet processed. u is always equal to
        // src in the first iteration.
        size_t u = minDistance(dist, sptSet, numVertices);

        // Mark the picked vertex as processed
        sptSet[u] = true;

        // Update dist value of the adjacent vertices of the
        // picked vertex.
        for (size_t v = 0; v < numVertices; v++)

            // Update dist[v] only if is not in sptSet,
            // there is an edge from u to v, and total
            // weight of path from src to  v through u is
            // smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v]
                && dist[u] != INT_MAX
                && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    // print the constructed distance array
    printSolution(dist);
}

// driver's code
int main()
{

    size_t size;

    cout << "Enter the amount of vertices in the graph\t";
    cin >> size;
    if (size < 1){
        cout << "Invaild input -The size of the graph must be greater than 0";
        return 0;
    }
    
   
   vector<vector<int>> graph1 = loadGraph(size);
    //vector<vector<int>> loadedGraph(size, vector<int>(size));


    //vector<vector<int>> graph1 = getNewGraph();

    // /* Let us create the example graph discussed above */
    // int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
    //                     { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
    //                     { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
    //                     { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
    //                     { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
    //                     { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
    //                     { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
    //                     { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
    //                     { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    // Function call

     cout << "input the shortest path source vertex\t";
     size_t src_ver;
     cin >> src_ver;

    dijkstra(graph1, src_ver);

    return 0;
}

