// program to check if the array's elements are sorted in ascending order or not. 
#include <bits/stdc++.h>
using namespace std;
bool check(int arr[], int i){
    if(i == 5)
        return true;
    return arr[i]<arr[i+1] && check(arr, ++i);
}
int main()
{
    int arr[] = { 1,2,3,4,5};
    if(check(arr, 0)){
        cout<<"Sorted";
    }
    else{cout<<"Not Sorted"; }
    return 0;
}
