#include <stdio.h>
int main() {
    int num,number;
    printf("enter a number to identify if entered number is an even or odd number: ");
    scanf("%d",&num);
    if(num<0) {
        printf("please enter positive numbers");
        return 0;
    }
    number=num%2;
    if(number==0) {
        printf("even");
    }
    else {
        printf("odd");
    }
    return 0;
}