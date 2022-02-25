#include <stdio.h>
#include <string.h>
int main() {
    char * first_name = "John";
    char last_name[] = "Doe";
    char name[100];
    const char random_1 = 'H';

    printf("%c \n", random_1);
    last_name[0] = 'B';
    sprintf(name, "%s %s", first_name, last_name);
    if (strncmp(name, "John Boe", 100) == 0) {
        printf("Done!\n");
    }
    name[0]='\0';
    strncat(name,first_name,4);
    strncat(name,last_name,20);
    printf("%s\n",name);
    return 0;
}