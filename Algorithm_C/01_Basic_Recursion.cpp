#include <iostream>

using namespace std;

int Fact(int n) {
    if (n == 1 || n == 0) return 1;
    return n * Fact(n - 1);
}

int Fibo(int n) {
    if (n == 0 || n == 1) return n;
    return Fibo(n - 1) + Fibo(n - 2);
}

int main1()
{
    cout << Fact(5) << '\n';
    cout << Fibo(5) << '\n';

    return 0;
}