#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    vector<int> v(0);
    v.push_back(3);
    v.push_back(1);
    v.emplace_back(5);
    v.emplace_back(7);

    vector<int>::iterator it = v.begin();
    while (it != v.end())
    {
        cout << *it << " ";
        it++;
    }
    
    return 0;
}