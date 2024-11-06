#include<stdio.h>
void main(){
    int i,j,n;
    printf("enter the value of n :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("1");
        }
    printf("\n");
    }
}
// ---------------------------------

#include <stdio.h>
int main() {
    int i,j,n,x=1;
    printf("enter value :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d",x);
            x++;
            printf("\t");
        }
    printf("\n");  
   }
    return 0;
}
// ----------------------------------
#include <stdio.h>
int main() {
    int i,j,n,x=1;
    printf("enter value :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d",i+1);
            printf("\t");
        }
    printf("\n");  
   }
    return 0;
}
// ---------------------------------

#include <stdio.h>

int main() {
    int i,j,n;
    printf("Enter the value :");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// -------------------------------------
#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter the value :");
    scanf("%d",&n);
    for (i=n;i>0;i--){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
// ---------------------------------------
#include<stdio.h>
int main() {
    int i,j,n;
    printf("Enter the value :");
    scanf("%d",&n);
    for (i=n;i>0;i--){
        for(j=0;j<n-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
