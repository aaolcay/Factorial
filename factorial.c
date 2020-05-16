#include<stdio.h>


int fact(int number){
    int fact=1;
    for(;number>0;number--){
        fact=fact*number;
    }
    return fact;


}



int main(){
    int number;
    int factorial;
    printf("Enter the integer for factorial:");
    scanf("%d",&number);
    factorial=fact(number);
    printf("%d",factorial);


    return 0;
}
