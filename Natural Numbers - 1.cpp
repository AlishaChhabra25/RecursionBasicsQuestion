#include<bits/stdc++.h>
using namespace std; 
int summation(int n, int i = 1){
    if(i > n){
        return 0;
    }
    else{
        return i + summation(n, i+1);
    }
}
int main(){
    int N = 10; 
    cout<<summation(N)<<" "; 
    return 0; 
}
