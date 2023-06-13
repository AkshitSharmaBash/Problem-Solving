#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[6]={13,-4,56,8,4,11};
    
    for(int i=0;i<6;i++){
        int minm = INT_MAX;
        int ind;
        for(int j=i;j<6;j++){
            if(arr[j] < minm){
                minm = arr[j];
                ind=j;
            }
        }
        int temp=arr[ind];
        arr[ind] = arr[i];
        arr[i] = temp;
    }
    
    for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
