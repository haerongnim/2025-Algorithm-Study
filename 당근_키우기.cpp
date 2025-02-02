#include <iostream>
using namespace std;


int main(){
    int x, y;
    cin >> x >> y;
    int answer1, answer2;
    answer1 = x + (y / 10) + y;
    answer2 = x + (x / 10) + y;
    cout << min(answer1, answer2);

}