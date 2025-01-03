// greedy 방식 풀이
// 5로 나누어 떨어질 때 리턴.
// 그렇지 않을 때 입력 값에서 3을 빼가면서 카운트.
// 그러다가 수가 음수가 되면 -1 리턴.

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a;
    cin >> a;
    int answer = 0;
    while(a >= 0){
        if(a % 5 == 0){
            answer += a/5;
            cout << answer;
            return 0;
        }
        a -= 3;
        answer ++;
    }
    cout <<  -1;
    return 0;
}