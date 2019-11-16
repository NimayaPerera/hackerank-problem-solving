#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int n ;

    scanf("%d",&n) ;
    int i , j;
    int sum1 = 0;
	int a[100][100];
	
    for(i=0 ; i < n; i++) {
        for(j=0;j<n;j++){
        	
            scanf("%d" , &a[i][j]);
            
        }
       // printf("\n");
    }
	
	    for(i=0 ; i < n; i++) {
        	for(j=0;j<n;j++){
        			if(i==j){
        				 
        				sum1 = sum1 + a[i][j]; 
        			}
       			 }

   			 }
   			 
   			 int sum2 = 0;
   			 
   	    for(j=n-1,i=0 ; j >= 0,i < n  ; j--,i++) {
        		
        		 sum2 = sum2 + a[i][j];

       			 }

 	int x = sum1-sum2;
 
		 if(x<0){
 			printf("%d", -1*x);
 	
		 }
 
 		else{
 			printf("%d\n" , x);
 		}
    
  
}

