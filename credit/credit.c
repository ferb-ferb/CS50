#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string guess;
long card = get_long("Number: ");
long mine = card;
int temp;
int digits;
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
if(sum%10==0){

}
else {
    printf("INVALID");
}
}