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
    for(int i=0;i<height;i++){

        for(int j=0; j<height-i;j++){
            printf();
        }

    }
}