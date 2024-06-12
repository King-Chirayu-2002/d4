#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=INT_MIN;
    int curr_sum =0;
    for (int i = 0; i < n; i++)
    {
        curr_sum+=arr[i];
        if(curr_sum<0){
            
            curr_sum=0;
        }
        sum = max(sum,curr_sum);
    }
    cout<<sum<<" ";
    return 0;
}