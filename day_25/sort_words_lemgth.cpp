#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// comparator to sort by length
bool cmp(const string &a, const string &b) {
    return a.size() < b.size();
}

int main() {
    int n;
    cin >> n;   // number of words

    string words[n];
    for(int i=0; i<n; i++) cin >> words[i];

    sort(words, words+n, cmp);   // sort using custom comparator

    for(int i=0; i<n; i++) cout << words[i] << " ";
    return 0;
}
