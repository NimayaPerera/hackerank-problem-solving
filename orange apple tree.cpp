#include<iostream>
#define MAX 10^5

using namespace std;

void calculator(long long int ,long long int,long long int,long long int,long long int,long long int);

void calculator(long long int s ,long long int t ,long long int a,long long int b,long long  int m ,long long  int n){
 
 	long long int i;
 	long long int apple[MAX];
 	long long int orange[MAX];
 	long long int app= 0;
 	long long int org=0;
 	
 	for(i=0 ; i < m ;i ++){
 		
 		scanf("%lld" , &apple[i]);
 		apple[i] = apple[i] + a;
 		
 		if(apple[i] <= t && s <= apple[i]){
 			app+=1;
		 }
 		
	 }
	 
	 
	 
	 	for(i=0 ; i < n ;i ++){
 		
 		scanf("%lld" , &orange[i]);
 		orange[i] = orange[i] + b;
 		
 			if(orange[i] <= t && 	s <= orange[i] ){
 			org+=1;
		 }
 	
	 }
	 
	
	 cout << app << endl;
	 cout << org ;
	
}

int main(){
	
	long long int  s , t, a, b , m ,n;
	
	scanf("%lld%lld" ,&s,&t);
	scanf("%lld%lld" ,&a,&b);
	scanf("%lld%lld" ,&m,&n);
	
	
	calculator(s,t,a,b,m,n);
	
}


