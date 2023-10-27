#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    int arr[n];
    cin >> n;
    for(int i = 0;i<n;i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0;i<n;i++) {
        for(int j = i;j<=n;j++) {
            for(int k = i;k<j;k++){
                sum = sum + arr[k];
                cout << sum << endl;
            }
    }
}
cout << sum;
}