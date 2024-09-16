//Write a program to find out the max number from given array using function
#include<stdio.h>

void main(){
    int num[ ]={2,9,5,3,7};
    int n=sizeof(num) / sizeof(num[0]);
    // size of num = 20; num=5 * 4(int size) = 20
    // size of num[0] = 4(size of int)
    // 20/4 = 5
    // n = 5
    int max = num[0];
    //max = first element , which = 2

    printf("size of num is: %d ",sizeof(num));
    printf("\n");
    for(int i=1; i<n; i++)
      //i=1
      //i=2  i=3
    {
        if(num[i]>max)
          //num[1]=9       //num[2]=5             //num[3]=3
          //9>2 (t)        //5>2 (f)              //3>2
                         //5 isnt greater thn 9
          //update 9       //remain 9
        {
            max = num[i];
        }
    }
    printf("The maximum element is: %d\n", max);




}
