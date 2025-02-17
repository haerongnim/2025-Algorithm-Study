#include <iostream>
using namespace std;

long long comb(int r, int l) {
    if (l == 0 || r == l) return 1;
    long long res = 1;
    for (int i = 1; i <= l; i++) {
        res = res * (r - i + 1) / i;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << comb(r, l) << endl;
    }
    return 0;
}
