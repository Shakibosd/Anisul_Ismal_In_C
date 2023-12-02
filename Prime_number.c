#include <stdio.h>
#include <string.h>
int main(){
    int num, cnt=0;
    scanf("%d",&num);
    for(int i=2; i<num; i++){
        if(num%i==0){
            cnt++;
            break;
        }
    }
    if(cnt==0){
        printf("Prime Number\n");
    }
    else{
        printf("Not Prime Number\n");
    }
    return 0;
}
