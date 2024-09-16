//Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include<stdio.h>

void main(){
    int i,num,even,odd;

    while(i < 5){
    printf("Enter number %d: ",i+1);
    scanf("%d",&num);

    if(num%2 == 0){
        even++;
    }
    else{
        odd++;
    }
    i++;
    }
    printf("even num:%d\n",even);
    printf("odd num:%d\n",odd);


}
