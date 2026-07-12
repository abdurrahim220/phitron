#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x = {1, 2, 2, 3, 4, 5,2};

    replace(x.begin(), x.end()-1, 2, 20);
    for(int v:x){
        
        cout<<v<<" ";
    }
    return 0;
}