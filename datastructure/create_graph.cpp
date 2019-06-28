/*
Description: this program will randomly generate a 2-D graph, with a given nodes and given density.

inputs:
number_of_nodes = number of nodes in the graph
probability= probability of a graph having an edge

output:
output would be a table with number_of_nodes rows and number_of_nodes columns.

if element (2,3) of table is true it means that there is an edge present between node 2 and node 3.

*/

#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>


using namespace std;
int number_of_nodes = 10;
float probability = 0.19;


bool prob(double probability)
{
    return rand() <  probability * ((double)RAND_MAX + 1.0);
}

int main()
{
    bool** graph;
    srand(time(0));
    graph = new bool*[number_of_nodes];
    for(int i=0; i<number_of_nodes;i++)
    {
        graph[i] = new bool[number_of_nodes];
    }
    cout<<"allocated space for graph"<<endl;

    for (int i = 0;i<number_of_nodes;i++)
    {
        for (int j = 0;j<number_of_nodes;j++ )
        {
            if (i==j)
            {
               graph[i][j]=false;// no loop
            }
            else
            {
                graph[i][j]=graph[j][i]=(prob(probability));
            }
        }
    }
    cout<<"filled graph with the probability of:"<<probability<<endl;

    cout<<"printing graph"<<endl;
    for (int i = 0;i<number_of_nodes;i++)
    {
        for (int j = 0;j<number_of_nodes;j++ )
        {
            cout<<graph[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}


