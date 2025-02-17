#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    try
    {
    cout << v.at(4) << endl;
    }
    catch(const out_of_range &e)
    {
        cout << "Exeception occur" << endl;
    }
    cout << "Hello World" << endl;
}