#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string guess;
long card = get_long("Number: ");
long mine = card;
int temp;
int digits =0;
int sum = 0;
while(mine>0){
    mine /= 10;
    temp = mine%10;
    temp *= 2;
    if(temp>=10){
        sum+=temp%10;
        temp/=10;
        sum+=temp;
    }
   else{ sum += temp;}
    mine /= 10;
}
 mine = card;
while(mine>0){
    sum+=mine%10;
    mine/=100;
}
mine = card;
if(sum%10==0){
while(mine>0){
    digits++;
    mine/=10;
}
}
else {
    printf("INVALID");
}
if(digits==13 || digits == 15 || digits == 16){
    if(){}
}
}