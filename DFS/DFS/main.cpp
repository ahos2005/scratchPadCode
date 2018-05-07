//
//  main.cpp
//  DFS
//
//  Created by Ahmed Elhosseiny on 5/6/18.
//  Copyright © 2018 Ahmed Elhosseiny. All rights reserved.
//

#include <iostream>
#include <set>
#include <map>
using namespace std;


class Node
{
public:
    int id;
    set<Node> adjacent;
    
    Node(int incID) {
        id = incID;
    }
};

class Graph {
public:
    map<int, Node> nodeLookup;
    Node* getNode(int id){
        nodeLookup.find(id);
    }
};


void addEdge(int source, int dest){
//    Node* s = getNode(
}

int main(int argc, const char * argv[]) {

    return 0;
}


