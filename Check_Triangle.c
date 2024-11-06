#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter sides of Triangle :");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c||b+c>a||c+a>b){
        printf("It is a triangle. \n");
        if(a==b&&b==c&&c==a)
        printf("Equilateral triangle");
        else if(a==b||b==c||c==a)
        printf("Isosceles Triangle");
        else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
        printf("Right Angle Triangle");
        else 
        printf("Scalene Triangle");
    }
    else{
        printf("Not a Triangle");
    }
}