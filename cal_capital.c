#include <stdio.h>
#include <ctype.h>

int count_captial(char *str) {
    int count = 0;
    int hascapital = 0;
    
    while (*str) {
        if (islower(*str)) {
            if (hascapital) {
                count++;
                hascapital = 0;
            }
        } else if (isupper(*str)) {
            hascapital = 1;
        }
        str++;
    }
    
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int result = count_captial(str);
    printf("Number of captial: %d\n", result);

    return 0;
}

