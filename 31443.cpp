#include <iostream>
#include <cmath>
using namespace std;   
#define MOD 1000000007

int main(){
    long long n, m, nm, a, b;
    long long answer = 1;
    cin >> n >> m;
    nm = n * m;
    if( n < 3 && m < 3){
        cout << nm << endl;
        return 0;
    }
    a = nm/3;
    b = nm%3;
    if(b == 1){
        a--;
    }
    while(a--){
        answer = answer * 3 % MOD;
    }
    if(b == 1){
        answer = answer * 4 % MOD;
    }
    else if(b == 2){
        answer = answer * 2 % MOD;
    }
    cout << answer;
}
