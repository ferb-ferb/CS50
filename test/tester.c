#include <math.h>
#include <stdio.h>
#include <cs50.h>

int main(void){
    string name = get_string("Whats your name? \n");
    for(int i = 0; i < 10 ; i++)
    {
        printf("Hello %s " , name);
    }
    printf("\n");
}