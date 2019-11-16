#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{

    int n ;
    int array[100];
	 int countn =0;
	 int countp = 0;
	 int countz = 0;
	 
    scanf("%d" , &n);
	int i;
    for( i = 0; i < n ; i++){
        scanf("%d" , &array[i]);
    }
    
    for( i = 0; i < n ; i++){

    
        if (array[i] < 0){
            countn +=1;
        }
            
        else if (array[i] > 0){
             countp +=1;
        }
            
        else if(array[i] == 0){
        	countz +=1;
		}
         else{
         	break;
		 }   
        
            

}

printf( "%.6f\n" ,(float)countp/n);
printf( "%.6f\n" ,(float)countn/n);
printf( "%.6f" ,(float)countz/n);



    
}

