#include <stdio.h>
int main() {
    int num,number;
    printf("enter a number to identify if it's an even or odd number: ");
    scanf("%d",&num);
    number=num%2;
    if(number==0) {
        printf("entered number is even number");
    }
    else {
        printf("entered number is odd number");
    }
    return 0;
}