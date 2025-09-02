#include<stdio.h>
int main(){
    int number;
    printf("entre un number: ");
    scanf("%d", &number);
    if(number>0){
        printf(" le number et positif");
    }
    else if(number<0){
        printf("le number et nigatif");

        }
        else if (number==0){
            printf("le number et nul");
        }
        return 0;

    }

