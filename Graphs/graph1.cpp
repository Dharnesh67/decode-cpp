#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int id;

    Node(int nodeId) : id(nodeId) {}
};

class Edge {
public:
    Node* source;
    Node* destination;

    Edge(Node* sourceNode, Node* destNode) : source(sourceNode), destination(destNode) {}
};

class Graph {
public:
    vector<Node*> nodes;
    vector<Edge*> edges;

    void addNode(int nodeId) {
        Node* newNode = new Node(nodeId);
        nodes.push_back(newNode);
    }

    void addEdge(Node* sourceNode, Node* destNode) {
        Edge* newEdge = new Edge(sourceNode, destNode);
        edges.push_back(newEdge);
    }

    void printEdgeList() {
        for (Edge* edge : edges) {
            cout << edge->source->id << " -> " << edge->destination->id << endl;
        }
    }

    ~Graph() {
        for (Node* node : nodes) {
            delete node;
        }
        for (Edge* edge : edges) {
            delete edge;
        }
    }
};

int main() {
    Graph graph;

    // Add nodes to the graph
    for (int i = 0; i < 5; i++) {
        graph.addNode(i);
    }

    // Add edges to the graph
    graph.addEdge(graph.nodes[0], graph.nodes[1]);
    graph.addEdge(graph.nodes[1], graph.nodes[2]);
    graph.addEdge(graph.nodes[2], graph.nodes[3]);
    graph.addEdge(graph.nodes[3], graph.nodes[4]);
    graph.addEdge(graph.nodes[4], graph.nodes[0]);
    graph.printEdgeList();

    return 0;
}
