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

void B5() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "none" << endl;
    } else if (a == b && b == c) {
        cout << "equilateral" << endl;
    } else if (a == b || b == c || a == c) {
        cout << "isosceles" << endl;
    } else {
        cout << "scalene" << endl;
    }
}

void B6() {
    long long length, width, height, mass;
    cin >> length >> width >> height >> mass;

    long long volume = length * width * height; // can reach 1e15, needs long long
    bool bulky = (length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000);
    bool heavy = (mass >= 100);

    if (bulky && heavy) cout << "Both" << endl;
    else if (bulky) cout << "Bulky" << endl;
    else if (heavy) cout << "Heavy" << endl;
    else cout << "Neither" << endl;
}

void B7() {
    int numOnes, numZeros, numNegOnes, k;
    cin >> numOnes >> numZeros >> numNegOnes >> k;

    int ones;
    if (numOnes <= k) {
        ones = numOnes;
    }
    else {
        ones = k;
    }
    k -= ones;

    int zeros;
    if (numZeros <= k) {
        zeros = numZeros;
    }
    else {
        zeros = k;
    }
    k -= zeros;

    int negOnes;
    if (numNegOnes <= k) {
        negOnes = numNegOnes;
    }
    else {
        negOnes = k;
    }

    cout << ones - negOnes << endl;
}

int main() {
   // A7();
   // A8();
   // B1();
   // B2();
   // B3();
   // B5();
   // B6();
   // B7();

    return 0;
}
