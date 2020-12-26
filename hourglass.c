/*There are  hourglasses in . An hourglass sum is the sum of an hourglass' values. Calculate the hourglass sum for every hourglass in , then print the maximum hourglass sum. The array will always be .*/
#include<stdio.h>
int main()
{
    int a[6][6],i,j,max=0,arr=0;
    for(i=0;i<6;i++)
    {
        for( j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            arr=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(arr>max)
                max=arr;
        }
    }
    printf("%d ",max);
}
