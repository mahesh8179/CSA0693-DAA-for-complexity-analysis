#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len = 0;
    printf("Enter the string: ");
    scanf(" %s ", str);
    len = strlen(str);
    printf("The length of the string is %d.", len);
    return 0;
}
