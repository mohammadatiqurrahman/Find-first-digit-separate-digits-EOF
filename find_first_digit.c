#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    // to get first digit from the given number, if the given number is two digits, divided by 10 
    // to the given number. if three digits then divided by 100. if 4 digits divided by 1000.
        int n = a/100;
        if (n%2 ==0){
            printf("Even\n");
        }
        else{
            printf("Odd\n");
        }
    return 0;
}