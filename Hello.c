#include<stdio.h>
int main()
{
    char name[41];
    printf("What's ur name : ");
    fgets(name, 40, stdin);
    printf("Hello there %s!\nU are in my Demo_repo:)");
    return 0;
}