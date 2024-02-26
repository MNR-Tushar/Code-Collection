#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int partition(int array[],int l,int r)
{
    int pivot=array[l];
    int i=l,j=r;

    while(i<j)
    {
       while(array[i]<=pivot)
       {
          i++;
       }
       while(array[j]>pivot)
       {
         j--;
       }
       if(i<j)
       {
         swap(array[i],array[j]);
       }
    }
  
    swap(array[j],array[l]);
    return j;
}

void quicksort(int array[],int l,int r)
{
   if(l<r)
   {
     int pi=partition(array,l,r);

     //recursive call on the left of pivot
     quicksort(array,l,pi-1);

     //recursive call on the right of pivot
     quicksort(array,pi+1,r);
   }
}

int main()
{
    optimize();

    int array[]={5,2,1,4,3};

    int len=5; //array size;

    //print unsorted array
    for(int i=0;i<len;i++)
    {
      cout <<array[i]<<" ";
    }
    cout <<endl;


    //call quicksort function
    quicksort(array,0,len-1);

    //print sorted array
    for(int i=0;i<5;i++)
    {
       cout << array[i]<<" ";
    }
    cout <<endl;
    
    return 0;
}
/*
  Best and Average case: O(n log(n))
  ...................................
  If the partiton is along middle. Same too for subarray left and right. 

  1st partition  n/2;
  2nd partition  n/4;                  
  3rd partition  n/8;               
  . 
  .                               
  nth partition  n/2^k;       

  we can write,            
  n/2^k=1;
  n=2^k
  log(n)=log(2^k);
  log (n)=klog2;   (base 2)
  k=log(n);
 
  The partition will be up to n time.

  so, Time complexity O(n log(n)).
  

  Worst case: O(n*n)
  ...................
  If The array is Sorted.First element is pivot and i, end element j;
  first partition then n-1 number element partition ,then n-2..... n;

  1st partition  n
  2nd partition  n-1                  
  3rd partition  n-2               
  .                 .
  .                 .               
  nth partition     1

  we can write,
  1+2+3+4+.....+n;
  => n*(n+1)/2
  => 1/2 n*n+n

  so, Time complexity O(n*n);

*/
