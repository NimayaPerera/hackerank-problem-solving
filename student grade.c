#include<stdio.h>

int main(){
    
    int n;
    
    int i;
    int array[60];
    int grade[60];
    
    scanf("%d" , &n);
	printf("\n");
	    
    for(i=0;i < n ; i++){
        
        scanf("%d", &array[i]);
        
    }
    
    for(i=0;i < n ; i++){
        
        if(array[i] % 5 > 2 && array[i] > 38){
            grade[i] = array[i] + (5-array[i]%5);
            
            
        }
        
        else{
            grade[i] = array[i];
            
        }
    
    
}

    for(i=0;i < n ; i++){
        
        printf("%d\t", grade[i]);
        
    }
    
    
}   
    
    

