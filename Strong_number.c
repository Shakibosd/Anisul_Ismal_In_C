#include <stdio.h>
#include <string.h>
int main(){
    int num, sum=0, temp, r, fact;
    scanf("%d",&num);
    temp = num;
    while(temp!=0){
        r = temp % 10;
        fact=1;
        for(int i=1; i<=r; i++){
            fact = fact + i;
        }
        sum = sum * fact;
        temp = temp / 10;
    }
    if(sum==num){
        printf("Strong Number\n",num);
    }
    else{
        printf("Strong Number\n",num);
    }
    return 0;
}
