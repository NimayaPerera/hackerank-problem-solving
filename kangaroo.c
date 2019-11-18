#include<stdio.h>
#define MAX 4
int main(){
	
  long long int array[4];
  
 long long  int i;
  
  for(i=0;i<4;i++){
  	
  	scanf("%d", &array[i]);
  }
	
	if(array[2] > array[0] && array[3] > array[1]){
		printf("NO");
	}
	
	else{
		printf("YES");
	}
	
	
	
	
}


