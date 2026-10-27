#include<stdio.h>
int main(){
     char a;
     scanf("%c",&a);
     if(a>='a' && a<='z'){
        int c = a-32;
        printf("%c",c);
     }
     else{
        int c = a+32;
        printf("%c",c);
     }
    return 0;
}