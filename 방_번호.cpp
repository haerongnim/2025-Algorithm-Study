#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int number;
int arr[10];
int answer = 0;

int main(){
    cin >> number;
    while(number != 0){
        arr[number % 10]++;
        number /= 10;
    }

    int temp = 0;
    for(int i = 0; i < 10; i++){
        if(i == 6 || i == 9){
            temp += arr[i];
        }
        else{
            answer = max(answer, arr[i]);
        }
    }
    temp = (temp + 1) / 2;
    answer = max(answer, temp);
    cout << answer;
}