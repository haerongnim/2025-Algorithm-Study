#include <iostream>
#include <string>
using namespace std;

bool isright(int a, int b, int c){  // 직각삼각형인지 아닌지 판단하는 함수
    if(a*a + b*b == c*c) return true;
    else return false;
}

int range(int& m, int& n){
    if(m > n){
        int temp = m;
        m = n;
        n = temp;
    }
    return m, n;
}


int main(){
    bool flag = true;   // 모든 숫자가 0이 입력되는지 판단하는 flag
    int a, b, c;
    while(flag){
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0){
            flag = false;       // 모든 입력이 0이면 flag는 false가 돼서 while문이 끝나고
            return 0;           // return 0
        }
        else {
            range(a, b);
            range(b, c);
            range(a, b);
            switch(isright(a, b, c)){
                case false:
                cout << "wrong" << "\n";
                break;              // break를 해주어야 밑 case까지 실행하지 않는다.
                case true:
                cout << "right" << "\n";
            }
        }

    }
}