//to make a number guessing game
#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#include<unistd.h>
int main(){
int a,x,count;
srand(time(NULL));
x = rand() % 100 + 1;
bool b;
b=true;
count=0;

//input from user and checking:
while (b){
printf("Enter a number : ");
scanf("%d",&a);
++count;
if(a==x){
printf("You have guessed the number in %d tries. \n",count);
b=false;
sleep(3);
}
else{
    if(a>x){
        printf("The number entered is greater.\n");
    }
    else{
        printf("The number entered is smaller.\n ");
    }
    }
}
return 0;
}