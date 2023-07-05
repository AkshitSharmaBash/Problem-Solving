#include <bits/stdc++.h>
using namespace std;
int N=4;
char arr[]={'6','2','7','0'};
void subset(string temp,int i,int& count){
    if(i == N){
        cout<<count<<" "<<temp<<endl;
        count++;
        return;
    }
    subset(temp,i+1,count);
    subset(temp+arr[i],i+1,count);
}
int main() {
    int count=1;
    subset("",0,count);
    
    return 0;
}
