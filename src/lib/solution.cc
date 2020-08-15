#include "solution.h"
#include <map>
#include <iostream>
#include <numeric>    

using namespace std;

void Solution::VecSort (vector<int> & input0){
    priority_queue<int> queue;
    vector<int> result0;
    for(int i: input0){
        queue.push(i);
    }

    while(!queue.empty()){
        result0.push_back(queue.top());
        queue.pop();
    }
    reverse(result0.begin(),result0.end());

    input0 = result0; 
}



