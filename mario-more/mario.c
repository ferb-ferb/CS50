#include <cs50.h>
#include <stdio.h>

void build(int height);

int main(void)
{
    int height;
    do
    {
    height = get_int("Height: ");
    }
    while(height<1);
    build(height);
}

void build(int height)
{
    for(int row=0;row<height;row++){
        for (int i=0;i<height-1-row;i++){
            printf(" ");
        }
        for(int hash=0; hash<row+1; hash++){
            printf("#");
        }
printf("  ");
for(int hash=0; hash<row+1; hash++){
            printf("#");
        }
    printf("\n");}
}