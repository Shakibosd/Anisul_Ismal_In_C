#include <stdio.h>
#include <string.h>
int main(){
    int num, sum=0, temp, r;
    scanf("%d",&num);
    temp = num;
    while(temp!=0){
        r = temp % 10;
        sum = sum + r*r*r;
        temp = temp / 10;
    }
    if(sum == num){
        printf("Armstrong Number\n");
    }
    else{
        printf("Not Armstrong Number\n");
    }
    return 0;
}
