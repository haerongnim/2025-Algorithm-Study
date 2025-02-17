#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int answer = arr[0] * arr[n-1];
    cout << answer << endl;
    return 0;
}
