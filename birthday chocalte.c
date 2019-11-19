#include<stdio.h>

int main(){
	
	int n , m, d ;
	int s[100];
	
	scanf("%d" , &n);
	
	int i ,j;
	
	for(i = 0; i < n ; i++){
		scanf("%d" , &s[i]);
		
	}
	
	scanf("%d" , &d);
	scanf("%d" , &m);
	
	
	int count = 0;
	
	for(i = 0; i < n ;i++){
		int sum = 0;
		for(j = 0; j < m ; j++){
			
			sum = sum + s[j+i];
				
		}
		
		if(sum == d){
			count = count +1;
		
		//	printf("%d", sum);
		
		}
		
	}
	
	printf("%d" ,count );
	
}

