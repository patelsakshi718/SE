#include<stdio.h>
int main()
{ 
    int i , n, sum = 0;
     printf("enter upper limit :");
     scanf ("%d",&n);
      
      for (i=2;i<=n;i+=2)
      {
      	sum+=1;
	  }
	  
	  printf("sum of all even number between 1 to %d =%d", n,sum);
	  
	return 0;
}
