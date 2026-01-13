#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v1;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int m;
    cin>>m;
    vector<int> v2; 
    for(int i = 0; i < m; i++){
        int x;
        cin>>x;
        v2.push_back(x);
    } 
    for(int i = 0; i < m; i++){
        v1.push_back(v2[i]);
    } 
    sort(v1.begin(), v1.end());
    for(int i = 0; i < v1.size(); i++){
        cout<<v1[i] <<" ";
    }
    return 0;
}