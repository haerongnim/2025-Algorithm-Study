#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Word{
    int len;
    string word;
    Word(string w, int l): len(l), word(w) {}
};

// sort method를 위한 함수 정의 
bool compare(const Word& a, const Word& b){
    if (a.len == b.len){        // 길이가 같으면
        return a.word < b.word;     // 사전 순으로
    }
    else return a.len < b.len;
}
bool is_duplicate(const Word& a, const Word& b){    //중복판단단
    return a.word == b.word;
}
int main(){
    int max;
    cin >> max;
    vector<Word> Words;

    for(int i = 0; i < max; i++){
        string temp;
        cin >> temp;
        Words.push_back(Word(temp, temp.length()));
    }
    
    stable_sort(Words.begin(), Words.end(), compare);
    //중복이라면 unique, erase 이용해서 삭제제
    Words.erase(unique(Words.begin(), Words.end(), is_duplicate), Words.end());

    for(const auto &w : Words){
        cout << w.word << endl;
    }
    return 0;
}
//stl algorithm sort 함수