//
//  main.cpp
//  ScratchPadCode
//
//  Created by Ahmed Elhosseiny on 4/19/18.
//  Copyright © 2018 Ahmed Elhosseiny. All rights reserved.
//

#include <iostream>
#include "LinkedList.hpp"

using namespace std;

vector<vector<int>> subsetsWithDup(vector<int>& nums);
void helper(vector<vector<int>>& incVector, vector<int>& nums, unsigned long start, unsigned long end);

string sort(string& incStr);
void mergeSort(string& incStr, unsigned long start, unsigned long end);

int main(int argc, const char * argv[]) {
    
    vector<int> v;
    
//    for(unsigned int i = 0; i < 6; i++){
//        v.push_back(i);
//    }
//    LinkedList ll(v);
//
//    ll.print();
//    ll.reverse();
//    ll.print();
//    ll.insertElementSet(v);
//    v.push_back(7);
//    ll.insertElementSet(v);
//    ll.print();

//    vector<int> nums;
//    nums.push_back(1);
//    nums.push_back(2);
//    nums.push_back(2);
//    subsetsWithDup(nums);

    string str1 = "intention", str2 = "execution";
    sort(str1);
    
    return 0;
}

string sort(string& incStr)
{
    string output;
    mergeSort(incStr, 0, incStr.size()-1);
    return output;
}

void mergeSort(string& incStr, unsigned long start, unsigned long end)
{
    if(end < start)
        return;
//    cout<<"Start:"<<start<<endl;
//    cout<<"End:"<<end<<endl;
    if(end == start){
        cout<<incStr[start];
        return;
    }
    mergeSort(incStr, start, (end+start)/2);
    mergeSort(incStr, ((end+start)/2)+1, end);
}

void merge(string& incStr, unsigned long start1, unsigned long end1, unsigned long start2, unsigned long end2)
{
    unsigned long counter1 = start1;
    unsigned long counter2 = start2;
    
    while(counter1 <= end1 && counter2 <= end2){
        if(incStr[counter1]){
            
        }
    }
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> result;
    helper(result, nums, 0, nums.size()-1);
    cout<<"Result Size:"<<result.size()<<endl;
    for(int j = 0; j < result.size(); j++){
        for(int i = 0; i <result[j].size(); i++){
            cout<<result[j][i]<<" ";
        }
        cout<<endl;
    }
    return result;
}

void helper(vector<vector<int>>& incVector,
            vector<int>&         nums,
            unsigned long        start,
            unsigned long        end)
{
    cout<<"Start:"<<start<<endl;
    cout<<"End:"<<end<<endl;
    vector<int> check;
    for(unsigned long i = start; i <= end; i++){
        check.push_back(nums[i]);
    }
    bool isInVector = false;
    for(unsigned long i = 0; i < incVector.size(); i++){
        if(check == incVector[i]){
            isInVector = true;
            break;
        }
    }
    if(!isInVector){
        incVector.push_back(check);
    }
    
    if(end <= start)
        return;
    helper(incVector, nums, start, ((end+start)/2));
    helper(incVector, nums, ((end+start)/2)+1, end);
}
