#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int row_start = 0,row_end=n-1,col_start=0,col_end=n-1 ;
    while(true){
        for(int i=col_start;i<=col_end;i++){
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;
        for (int i = row_start; i <= row_end; i++)
        {
            cout<<arr[i][col_end]<<" ";
        }
        col_end--;
        for (int i = col_end; i >= col_start; i--)
        {
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;
        for (int i = row_end; i >= row_start; i--)
        {
            cout<<arr[i][col_start]<<" ";
        }
        col_start++;
    }
    return 0;
}