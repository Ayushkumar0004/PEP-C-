#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, int> mpp;

    // Inserting some key-value pairs into the map
    mpp[1] = 10;
    mpp[2] = 20;
    mpp[3] = 30;

    // Range-based loop to iterate through the map
    cout << "Using range-based loop:\n";
    for (auto i : mpp) {
        cout << "Key: " << i.first << ", Value: " << i.second << endl;
    }

    // Iterator-based loop to iterate through the map
    cout << "\nUsing iterator-based loop:\n";
    for (auto i = mpp.begin(); i != mpp.end(); i++) {
        cout << "Key: " << i->first << ", Value: " << i->second << endl;
    }

    return 0;
}
