#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string guess;
long card = get_long("Number: ");
long mine = card;
int temp;
int sum = 0;
while(mine>0){
    mine /= 10;
    temp = mine%10;
    if(temp>=10){
        sum+=temp%10;
        temp/=10;
        sum+=temp;
    }
    sum += temp;
    mine /= 10;
}
printf("%i" , sum);
}