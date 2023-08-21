#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j, flag = 1;
    printf("Enter the string: ");
    scanf(" %s ", str);
    j = strlen(str) - 1;
    for (i = 0; i < strlen(str) / 2; i++) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        j--;
    }
    if (flag == 1) {
        printf("The string is a palindrome.");
    } else {
        printf("The string is not a palindrome.");
    }
    return 0;
}
