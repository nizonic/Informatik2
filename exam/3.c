#include <stdio.h>
int main(){
    int i =22;
    char ch = 'a';
    char* p_ch = &ch;
    int* p_i = &i;
    printf("%p \n", &i);
}