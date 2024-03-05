#include<stdio.h>
#define SIZE 100


char* strcpy(char *s1, const char *s2)
{
    int i;
    for (i = 0; (s1[i] = s2[i]) != '\0'; i++);
    return s1;
}
int main()
{
    char str1[SIZE];
    char str2[SIZE];
    printf("Enter a string : ");
    gets(str2);
    strcpy(str1,str2);
    printf("Copied string is %s",str1);

    return 0;
}
