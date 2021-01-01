int main()
{
int a[100],i,n;
for(i=0li<n;i++)
scanf("%d",&a[i])
sort012(a,n);
for(i=0;i<n;i++0
printf("%d",a[i]);
}
void swap(int* arr,int a,int b)
{
   int temp;
   temp=arr[a];
   arr[a]=arr[b];
   arr[b]=temp
}
void sort012(int a[], int n)
{
    int low = 0, high = n-1, mid = 0;

    while(mid <= high){

        if(a[mid]==0)
            swap(a[mid++], a[low++]);
       
        else if(a[mid]==1)
             mid++;

        else
            swap(a[mid], a[high--]);
    }
}
