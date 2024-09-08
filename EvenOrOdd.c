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
        printf("the number entered is %d and it's a even number",num);
    }
    else {
        printf("the number entered is %d and it's a odd number",num);
    }
    return 0;
}