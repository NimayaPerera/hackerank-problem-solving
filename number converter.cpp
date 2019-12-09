#include<iostream>

using namespace std;

int main(){
	
	int i , j ,k ,h;
	
	for(i=0;i < 10 ; i++){
		for(j=0;j < 10 ; j++){
			for(k=0;k < 10 ; k++){
				for(h=0;h < 10 ; h++){
					
					if((i*1000+j*100+k*10+h*1) * 9 ==(h*1000+k*100+j*10+i*1) && (h*1000+k*100+j*10+i*1)!= 0 ){
							printf("%d%d%d%d" ,i,j,k,h) ;
						}
						
						}
					}
				}	
			}
		}		
