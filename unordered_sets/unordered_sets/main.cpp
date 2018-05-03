//
//  main.cpp
//  unordered_sets
//
//  Created by Ahmed Elhosseiny on 4/23/18.
//  Copyright © 2018 Ahmed Elhosseiny. All rights reserved.
//

#include <iostream>
#include <unordered_set>
using namespace std;

int main(int argc, const char * argv[]) {
    unordered_set<string> uSet = {"Red", "Green", "Blue"};
    
    unordered_set<string>::const_iterator iter = uSet.find("Alpha");
    
    if(iter != uSet.end()){
        cout<<"Found it!"<<endl;
    } else {
        cout<<"Not found!"<<endl;
    }
    
    return 0;
}
