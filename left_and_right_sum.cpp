#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int total_sum = 0;
    for(int i = 0; i < n; i++){
        total_sum = arr[i] + total_sum;
    }
    int leftsum = 0;
    for(int i = 0; i < n; i++){
        int rightsum = total_sum - leftsum - arr[i];
        cout<<abs(leftsum - rightsum) <<" ";
        leftsum = arr[i] + leftsum;
    }
    return 0;
}