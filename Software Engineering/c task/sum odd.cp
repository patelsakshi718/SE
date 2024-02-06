#include<stdio.h>
int main()
{ 
    int i , n, sum = 0;
     printf("enter upper limit :");
     scanf ("%d",&n);
      
      for (i=3;i<=n;i+=3)
      {
      	sum+=1;
	  }
	   for (i=1;i<=10;++i)
	   {
	   	 printf("%d *%d = %d\n", n,i,i*n);
	   }
	  
	  printf("sum of all even number between 1 to %d =%d", n,sum);
	  
	return 0;
}
