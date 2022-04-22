#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int string_compare(char *s1, char *s2)
{
    int i;
    i=0;

    while (s1[i] == s2[i] && s1[i] != '\0')
        i++;
    
    int s1len = strlen(s1);
    int s2len = strlen(s2);

    if (i==s1len && i==s2len)
        return 1;
    else
        return 0;
}

void string_upper(char *s) {
    int i;

    for (i=0; s[i]!='\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] -32;
    }

    printf("\nString in Upper Case: %s", s);
        
}

char* string_repeat(char *s, int num) {
    
    int i=0, j=0;
    char *result;
    int length = strlen(s);
    result = (char *) malloc(sizeof(char)*((length*num)+1));

    while (num != 0) {
        strcat(result, s);
        num--;
    }

    return result;
}

int main() {
    char a[100], b[100], c[100], d[100];
    char *result_d;
    int value;
    int num;

    printf("\nEnter a string: ");
    scanf("%s", a);
    printf("\nEnter another string: ");
    scanf("%s", b);
    
    value = string_compare(a, b);

    if (value==0)
        printf("\nYour strings do not match.");
    else
        printf("\nYour strings match.");
    
    printf("\nEnter a new string: ");
    scanf("%s", c);
    string_upper(c);

    printf("\nEnter a string: ");
    scanf("%s", d);
    printf("Enter a number of times to repeat it: ");
    scanf("%d", &num);

    result_d = string_repeat(d, num);
    printf("\nThe repeated string is: \n");
    printf("%s", result_d);

    free(result_d);

    return 0;
}