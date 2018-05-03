//
//  main.cpp
//  Contact List
//
//  Created by Ahmed Elhosseiny on 4/28/18.
//  Copyright © 2018 Ahmed Elhosseiny. All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Node {
public:
    unordered_map<char, Node*> children;
    bool isCompleteWord;
    Node(){
        isCompleteWord = false;
    }
};

void add(string contact, Node* incNode);
int find(string contact, Node* incNode);

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    Node* root = new Node();
    for(int a0 = 0; a0 < n; a0++){
        string op;
        string contact;
        cin >> op >> contact;
        if(op == "add"){
            add(contact, root);
        } else if(op == "find"){
            cout<<find(contact, root)<<endl;
        }
    }
//    unordered_map<char, int> map;
//    unordered_map<char, int>::iterator iter;
//    string s = "strawberry";
//    int i = 5;
//    for(char c : s){
//        cout<<c<<" ";
//        map.insert(make_pair(c, i));
//        i *= 5;
//        iter = map.find(c);
//        if(iter != map.end()) cout<<"\nI "<<iter->second<<endl;
//
//    }
    
//    iter = map.find('s');
//    if(iter != map.end()) cout<<"\nI "<<iter->second<<endl;
//    iter = map.find('x');
//
//    if(iter != map.end()) cout<<"\nJ "<<iter->second<<endl;

    return 0;
}

void add(string contact, Node* incNode){
    Node* current = incNode;
    unordered_map<char, Node*>::iterator iter;
    for(unsigned int i = 0; i < contact.size(); i++){
        if(current == NULL){
            current = new Node();
        }
        Node* newNode = new Node();
        current->children.insert(make_pair(contact[i], newNode));
        if(i == contact.size()-1){
            newNode->isCompleteWord = true;
        }

        
    }
}

int find(string contact, Node* incNode){
    unordered_map<char, Node*>::iterator iter;
    Node* current = incNode;
    for(unsigned int i = 0; i < contact.size(); i++){
        cout<<"Looking at "<<contact[i]<<endl;
        iter = current->children.find(contact[i]);
        if(iter != current->children.end()){
            current = iter->second;
            if(current->isCompleteWord){
                return 1;
            } else if (i == contact.size()-1){
                return current->children.size();
            }
        } else {
            return 0;
        }
        
    }
    return 0;
}
