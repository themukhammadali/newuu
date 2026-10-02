#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int total = n * (n + 1) / 2;
    int k = n / m;
    int num2 = m * k * (k + 1) / 2;
    int num1 = total - num2;

    cout << num1 - num2 << endl;

    return 0;
}
