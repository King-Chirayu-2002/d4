#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
    int curr_sum =0,sum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        curr_sum+=arr[i];
        if(curr_sum<0){
            curr_sum=0;
        }
        sum = max(curr_sum,sum);
    }
    return sum;
}
int main(){
    int n;cin>>n;
    int arr[n];int sum =0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum +=arr[i];
    }
    int non_wrap=kadane(arr,n);
    for (int i = 0; i < n; i++)
    {
        arr[i]= -1*arr[i];
    }

    cout<<max(non_wrap,sum+kadane(arr,n));
    return 0;
}