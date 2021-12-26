
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void countingSort(vector<int> &q, int n){
    vector<int> cnt(101, 0);
    for(int i = 0; i < n; i++)
        cnt[q[i]]++;
    for(int i = 0, k = 0; i <= 100; i++){
        while(cnt[i]){
            q[k++] = i;
            cnt[i]--;
        }
    }
}

int main(){
    int n;
    vector<int> q;
    cin >> n;
    for(int i = 0, t; i < n; i++){
        cin >> t;
        q.push_back(t);
    }
    countingSort(q, n);
    for(auto x : q)
        cout << x << ' ';
    cout << endl;
    return 0;
}