#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//순열
// nPr = n! / (n-r)!
// n개중 r을 뽑음

void PrintV(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << '\n';
}

int main2()
{
    int a[3] = { 1, 2, 3 };
    vector<int> v;

    cout << "Vector Push : ";
    for (int i = 0; i < 3; i++) {
        v.push_back(a[i]);
        cout << v[i] << ' ';
    }
    cout << '\n';

    //ASC
    do {
        PrintV(v);
    } while (next_permutation(v.begin(), v.end()));

    cout << "---------------------";

    v.clear();
    cout << '\n';
    for (int i = 2; i >= 0; i--) {
        v.push_back(a[i]);
    }

    //DESC
    do {
        PrintV(v);
    } while (prev_permutation(v.begin(), v.end()));

    return 0;
}