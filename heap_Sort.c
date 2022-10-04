 
// HEAP SORT USING ARRAY IMPLEMENTATION 


#include<stdio.h>
int a[20],n;

void display()
{ 
int i;
for(i=0;i<n;i++)
printf ("%d",a[i]);
printf ("\n");
}

void insert(int num,int loc)
{
int parent;
while(loc>0)
{
parent=(loc-1)/2;
if (num<=a[parent])
{
a[loc]=num;
return;
}
a[loc]=a[parent];
loc=parent;
}
a[0]=num;
}

void create_heap()
{
int i;
for(i=0;i<n;i++)
insert(a[i],i);
}

void del_root(int last)
{
int left,right,i,temp;
i=0;

temp=a[i];
a[i]=a[last];
a[last]=temp;
left=2*i+1;
right=2*i+2;
while( right < last)
{
if ( a[i]>=a[left] && a[i]>=a[right] )
return;
if ( a[right]<=a[left] )
{
temp=a[i];
a[i]=a[left];
a[left]=temp;
i=left;
}
else
{
temp=a[i];
a[i]=a[right];
a[right]=temp;
i=right;
}
left=2*i+1;
right=2*i+2;
}
if ( left==last-1 && a[i]<a[left] )
{
temp=a[i];
a[i]=a[left];
a[left]=temp;
}
}

void heap_sort()
{
int last;
for(last=n-1; last>0; last--)
del_root(last);
}

void main()
{
int i;
printf ("\nEnter number of elements :");
scanf ("%d",&n);
for(i=0;i<n;i++)
{
printf ("\nEnter element %d :",i+1);
scanf ("%d",&a[i]);
}
printf ("\nEntered list is :\n");
display();
create_heap();
printf ("\nHeap is :\n");
display();
heap_sort();
printf ("\nSorted list is :\n");
display();

}

