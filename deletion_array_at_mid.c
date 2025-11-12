#include<stdio.h>
int main(){
	
	int size;
	printf("\n--------------------------------------------------------");
	
	printf("\nEnter the size of the Array->"
);
    scanf("%d",&size);//input array SIZE
    
    int arr[size],i,mid;
    //input element in the array upton size
    for(i=0;i<size;i++)
{
	printf("Enter number%d:",i+1);
	scanf("%d",&arr[i]);
	
}
	//printing original array
	printf("\nOrginal array is->");
	for(i=0;i<size;i++)
{

      printf("%d", arr[i]);
}
printf("\n-----------------------------------");


    //deleting element at mid
    //calculating mid
    if (size%2==0){//
calculating mid for even size array
    mid=size/2;
    for(i=mid-1;i<size;i++){
    	arr[i]=arr[i+1];
    	
    }
    size--;
    //
Printing array after deleting mid element
    printf("\nModified array is->");
    for(i=0);i<size;i++)
	}
    }
    else 
    {
    	//calculating mid for odd size
    	mid=(size+1)/2;
    	
    	for(i=mid-1;i<size;i++)
    	{
    		arr[i]=arr[i+1];
    }
    size--;
    //
Printing array after deletionmid element
    printf("\nModified array is->");
    
    for(i=0;i<size;i++)
    {
    	printf("%d",arr[i]);
}
 size--;
}






return 0;

}
		
	
