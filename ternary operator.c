# include <stdio.h>

int main() {
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    age >= 18 ? printf("Adult \n" ) : printf("not an Adult \n");
    return 0;
}