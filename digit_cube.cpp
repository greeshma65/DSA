#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp = n;
    int last_digit;
    int cubesum = 0;
    while(n > 0){
        last_digit = n%10;
        cubesum += last_digit*last_digit*last_digit;
        n = n/10;
    }
    if(cubesum == temp){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    
    return 0;
}