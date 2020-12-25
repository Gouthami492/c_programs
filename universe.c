#include<stdio.h>
void selection(int *,int);
void swap(int *,int,int);
int main()
{
    int a[10],i=0,n,temp,j;
    printf("Enter the number of elements:");
    scanf("%d",&n);
   printf("Enter the elements:");
    for(i=0;i<n;i++)
   scanf("%d",&a[i]);
    selection(a,n);


      for(i=0;i<n;i++)
      {
          if(a[i]==42)
          break;
          else
            printf("%d\n",a[i]);
      }



}
void selection(int *a,int n)
{


    int min,i,j;
    for(i=1;i<n;i++)
    {
        min=i;
        for(j=i+1;j<=n;j++)
            if(a[j]<a[min])
            min=j;
        swap(a,min,i);
    }
}
void swap(int *a,int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
