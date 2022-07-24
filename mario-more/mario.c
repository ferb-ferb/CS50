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

        for(int col=0; col<((height-1)-i);col++){
            printf(" ");
        }

    }
}