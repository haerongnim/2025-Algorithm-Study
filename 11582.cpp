#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void half_sort(vector<int>& v, int size){
    for(int i = 0; i < v.size(); i += size){
        sort(v.begin() + i, v.begin() + i + size);
    }
}
int main(){
    int n, k;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> k;
    int size = n / k;
    half_sort(v, size);
    
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

}
