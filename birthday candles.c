#include<stdio.h>


int main(){
	
long long 	int n ;
	
	 scanf("%lld" , &n);
	 
	 int candles[n];
	 
long long	 int i = 0;
	 
	 for(i=0;i<n;i++){
	 	scanf("%lld" , &candles[i]);
	 	
	 }
	 
	
	long long int max = candles[0];
	
	for(i=0;i < n ;i++){
		if(candles[i] <= candles[i+1]){
			max = candles[i+1];
			
		}
		 
	}
	long long int count =0;
	
		for(i=0;i < n ;i++){
			if(max == candles[i]){
				count+=1;
			}
	
}	

 printf("%lld" , count);	
	
	
	
}
