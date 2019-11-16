#include<stdio.h>

int main(){
	
	long long int array[5];
	 
	 int i;
	 
	 for(i = 0; i < 5 ; i++){
	 	scanf("%lld" , &array[i]);
	 }
long long 	int  sum = 0;
	
	for(i=0;i< 5; i++){
	 sum = sum + array[i];	
		
	}
//	printf("%d" , sum);
	
long long	int suma[5];
	int j = 0;
	
	while(j<5){
		suma[j] = sum - array[j];
		j++;
		
	}

	int c ,d ,n;	
	int swap;
	
for (c = 0 ; c < 4; c++)
  {
    for (d = 0 ; d < 5 - c - 1; d++)
    {
      if (suma[d] > suma[d+1]) /* For decreasing order use < */
      {
        swap       = suma[d];
        suma[d]   = suma[d+1];
        suma[d+1] = swap;
      }
    }
  }


 printf("%lld %lld" , suma[0] ,suma[4]);	
	
}


