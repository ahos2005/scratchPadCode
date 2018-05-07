//
//  main.cpp
//  Repeated DNA Sequences
//
//  Created by Ahmed Elhosseiny on 5/6/18.
//  Copyright © 2018 Ahmed Elhosseiny. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<string> repeatedDNASequences(const string& input, int seqLength);


int main(int argc, const char * argv[]) {
    string input = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    vector<string> output;
    output = repeatedDNASequences(input, 10);
    for(int i = 0; i < output.size(); i++){
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0;
}

vector<string> repeatedDNASequences(const string& input, int seqLength){
    assert(seqLength < input.size());
    vector<string> result;
    unordered_set<string> strResult, strSet;
    unordered_set<string>::iterator strSetIter;
    string parser;
    string::iterator iter;
    
    for(int i = 0; i < seqLength; i++){
        parser.push_back(input[i]);
    }
    strSet.insert(parser);
    for(int i = seqLength; i < input.size(); i++){
        iter = parser.begin();
        parser.erase(iter);
        parser.push_back(input[i]);
        strSetIter = strSet.find(parser);
        if(strSetIter != strSet.end()){
            strResult.insert(parser);
        } else {
            strSet.insert(parser);
        }
    }
    for(auto iterate = strResult.begin(); iterate != strResult.end(); iterate++){
        result.push_back(*iterate);
    }
    return result;
}


/*
 AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT
 
 All DNA is composed of a series of nucleotides abbreviated as A, C, G, and T, for example: "ACGAATTCCG". When studying DNA, it is sometimes useful to identify repeated sequences within the DNA.
 
 Write a function to find all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule.
 */

