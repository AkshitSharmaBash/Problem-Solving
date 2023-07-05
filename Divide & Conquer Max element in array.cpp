#include <bits/stdc++.h>
using namespace std;

int greatest(int arr[],int i,int j){
    if(i==j)
    {
        return arr[i];
    }
    int mid=(i+j)/2;
    return max( greatest(arr,0,mid),greatest(arr,mid +1,j) );
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int ans = greatest(arr,0,n-1);
    cout<<"The maximum element in the list is "<<ans;
    return 0;
}
