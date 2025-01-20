#include <iostream>
#include <algorithm>
using namespace std;

int num;
int temp;
int answer = 0;

int main(){
    cin >> num;
    for (int i = 0; i < num; i++){
        cin >> temp;
        bool flag = true;
        int j = 2;
        while(flag){
            if(temp % j == 0){
                flag = false;
                break;
            }
            
        }
    }
}