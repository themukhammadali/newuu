#include <iostream>
using namespace std;

void solveA7() {
    int n, m;
    cin >> n >> m;

    int total = n * (n + 1) / 2;
    int k = n / m;
    int num2 = m * k * (k + 1) / 2;
    int num1 = total - num2;

    cout << num1 - num2 << endl;
}

void solveA8() {
    int n;
    cin >> n;

    int w = n / 7;
    int d = n % 7;

    int fullWeeks = 28 * w + 7 * w * (w - 1) / 2;
    int extraDays = w * d + d * (d + 1) / 2;

    cout << fullWeeks + extraDays << endl;
}

int main() {
   // solveA7();
    solveA8();
    return 0;
}
