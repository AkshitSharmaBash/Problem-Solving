#include <stdio.h>

int main()
{
    char name[60] = "the SI unit of angular measure is the radian";
    
    // printf("%s",name);  // Looks for '\0' character
    int length=0,i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    
    // reversing a string
    // for(int i=length-1;i>=0;i--){
    //     printf("%c",name[i]);
    // }
    
    // Uppercasing a string
    
    for(int i=0;i<length;i++){
        if((name[i] >=97 && name[i]<=122)){
            name[i]-=32;
        }
       
    }
    
    for(int i=0;i<length;i++){
        printf("%c",name[i]);
    }
    return 0;
}
