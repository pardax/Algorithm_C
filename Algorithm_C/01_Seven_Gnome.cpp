#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//2309
int gnome[9];

int main()
{
    for (int i = 0; i < 9; i++) cin >> gnome[i];

    sort(gnome, gnome + 9);

    do {
        int sum = 0;
        for (int i = 0; i < 7; i++) sum += gnome[i];
        if (sum == 100) break;
    } while (next_permutation(gnome, gnome + 9));

    for (int i = 0; i < 7; i++) cout << gnome[i] << '\n';

    return 0;
}