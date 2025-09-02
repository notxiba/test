#include <stdio.h>

int main() {
    int a, b, c;
    int Moyenne_geometrique;
    printf(" entre les nomber : ");
    scanf("%d %d %d", &a, &b, &c);
    Moyenne_geometrique=(a * b * c)^(1/3);
    printf("  la moyenne geometrique est : %d\n", Moyenne_geometrique);
    return 0;

    

    
}
