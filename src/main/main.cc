#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution s;
    vector<int> v={0,2,1,5,6,3};
    int k=2; //k-th largest
    cout<<"Input:[ ";
    for(auto& i:v)
        cout<<i<<" ";
    cout<<"] and k="<<k<<endl;    
    cout<<"Output:"<<s.returnelement(v,k)<<endl;   
    return EXIT_SUCCESS;
}