#include<stdio.h>
int main(){
    char x;
    printf("entre un alphabi: ");
    scanf("%s", &x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='y'){
        printf("la lphabi est Voyelle ");

        }
        else{
            printf("la lphabi non voyelle");
        }

return 0;
}