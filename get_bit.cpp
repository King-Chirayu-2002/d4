#include<bits/stdc++.h>
using namespace std;
bool get_bit(int binary ,int n){
    if((1<<n) && binary ){
        return 1;
    }
    return 0;
}
int set_bit(int binary ,int n){
    return ((1<<n)|binary);
}
int clear_bit(int binary , int n ){
    return (~(1<<n)& binary );
}
int update_bit(int binary,int n ,int pos){
    binary =(~(1<<pos) & binary);
    return ((1<<n)&binary);
}
int main(){
    int n,binary;
    binary = 5;
    n=2;
    cout<<clear_bit(binary,n);

    return 0;
}