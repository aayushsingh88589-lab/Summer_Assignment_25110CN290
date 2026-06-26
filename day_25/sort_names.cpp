#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;   // number of names

    string names[n];
    for(int i=0; i<n; i++) cin >> names[i];

    sort(names, names+n);   // sort in dictionary order

    for(int i=0; i<n; i++) cout << names[i] << " ";
    return 0;
}
