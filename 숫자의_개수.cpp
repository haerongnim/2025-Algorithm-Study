#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main(){
    int a, b, c;
    int number;

    bool flag = true;

    cin >> a >> b >> c;
    number = a * b * c;

    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(flag){
        int temp;
        int next;
        if (next == 0){
            flag = false;
            break;
        }
        else{
        temp = next % 10;
        next = next / 10;
        }

        
    }

}