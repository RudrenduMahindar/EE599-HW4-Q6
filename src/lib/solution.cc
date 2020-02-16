#include "solution.h"
#include <algorithm>
#include <queue>
using namespace std;

int Solution::returnelement(vector<int>& v,int& k) { 
  if(!v.empty())
  {// Converting vector into a heap using make_heap() 
  //make_heap(v.begin(), v.end());
  //return v.at(k-1);//index starts from 0... 2nd largest element is at index 1
    priority_queue<int> q;
    for(auto& i:v)
      q.push(i);
    for(int i=1;i<=(k-1);i++)
      q.pop();
    return q.top();  
  }
  else
    return -1;
}

