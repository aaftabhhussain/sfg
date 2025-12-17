#include<stdio.h>
int main() 
{
    char name[20];
    int age;
    printf("Enter your name: ");
    scanf("%c", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Name: %s \n Age: %d ", name, age);
    return 0;
}
