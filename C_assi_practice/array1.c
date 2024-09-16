#include <stdio.h>


void main(){

    // Two dimentional array, it is used when we want an array
    // of array. This can be used to store location coordinates, color values, etc.

int colorPoints[5][3]=
{
{60,70,90},
{120,130,140},
{63,41,52},
{230,120,210},
{110,100,80}
};

for(int i=0;i<5;i++){
printf("\nRGB values of %d color,\nRed: %d, Green: %d, Blue: %d",i,
       colorPoints[i][0],colorPoints[i][1],colorPoints[i][2]);
}


// Multi-dimentional array, which is used to store data
// like data points in AI / ML models

int numbers[3][3][2]=
{
    { {10,20},{30,40},{80,90} },
    { {11,12}, {16,17},{19,20} },
    { {1,2}, {3,4}, {7,8} }
};

}
