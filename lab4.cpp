#include <iostream>
using namespace std;

void A7() {
    int n, m;
    cin >> n >> m;

    int total = n * (n + 1) / 2;
    int k = n / m;
    int num2 = m * k * (k + 1) / 2;
    int num1 = total - num2;

    cout << num1 - num2 << endl;
}

void A8() {
    int n;
    cin >> n;

    int w = n / 7;
    int d = n % 7;

    int fw = 28 * w + 7 * w * (w - 1) / 2;
    int ew = w * d + d * (d + 1) / 2;

    cout << fw + ew << endl;
}

void B1() {
    int n;
    cin >> n;
    cout << ((n % 2 != 0) ? n * 2 : n) << endl;
}

void B2() {
    int num;
    cin >> num;

    bool ok = (num == 0) || (num % 10 != 0);

    cout << (ok ? "true" : "false") << endl;
}

void B3() {
    int n;
    cin >> n;

    if (n == 1) cout << 0 << endl;
    else if (n % 2 == 0) cout << n / 2 << endl;
    else cout << n << endl;
}

int main() {
   // A7();
   // A8();
   // B1();
   // B2();
   // B3();

    return 0;
}
