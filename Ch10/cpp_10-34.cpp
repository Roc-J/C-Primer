#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> ivec = {0,1,2,3,4,5,6,7,8,9};
    for (auto it = ivec.crbegin(); it != ivec.crend(); ++it)
    {
        /* code */
        cout << *it << " ";
    }
    
    return 0;
}