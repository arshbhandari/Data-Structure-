// Palllindrome
#include <stdio.h>
int pallindrome(int n){
    int rem;
    int rev=0;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int main() {
    int x, temp;
    printf("Enter a number :");
    scanf("%d",&x);
    temp=x;
    int result=pallindrome(x);
    if(result==temp)
    printf("Found");
    else
    printf("Not Found");
    return 0;
}