#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <memory.h>

extern size_t ft_strlen(const char *s);
extern char *ft_strcpy(char * dst, const char * src);
extern int ft_strcmp(const char *s1, const char *s2);
extern size_t ft_write(int fil_des, const void *buf, size_t n_byte);


int main() {
/*
    printf("----------------------- ft_strlen ----------------------- \n");

    printf("%lu\n", strlen("Hello, assembly JEFW\n"));
    printf("%lu\n", ft_strlen("Hello, assembly JEFW\n"));

    printf("----------------------- ft_strcpy ----------------------- \n");

    char *src = "|Hello, assembly JEFW|\n";
    char *dst = malloc((strlen(src) + 1) * sizeof(char));
    char *dst1 = malloc((strlen(src) + 1) * sizeof(char));

    printf("dst1: %s\n", ft_strcpy(dst1, src));
    printf("dst: %s\n", strcpy(dst, src));

    printf("----------------------- ft_strcmp ----------------------- \n");

    const char *str1 = "H";
    const char *str2 = "Hss";

    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", ft_strcmp(str1, str2));
*/
    printf("----------------------- ft_write ----------------------- \n");

    const char *s1 = "";
    const char *s2 = "Print this string to the standard output\n";

    //printf("%lu",write(1, s1, strlen(s1)));
    //printf("%lu",write(1, s2, strlen(s2)));

    ft_write(1, s1, strlen(s1));
    ft_write(1, s2, strlen(s2));
    return 0;
}