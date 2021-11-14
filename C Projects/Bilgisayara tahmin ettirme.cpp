#include<stdio.h>
#include <stdlib.h>
#include<time.h> 
#include <conio.h>
#include<math.h>


int main(){
	
  int tahmin;
  int sayi;
  int i ;
  int ust_limit;
  float z;
  char q; 
  float w;



 programbasi:
 	i=0;
 printf("Ust limit giriniz:");    
scanf("%d",&ust_limit);	    
  
  
srand(time(0));
sayi=rand()%ust_limit;



enbas:	
printf("Tahmininizi giriniz:");
scanf("%d",&tahmin);

i++;

if(tahmin < sayi ){

	printf("Daha buyuk bir sayi giriniz.\n");	
	goto enbas;
} 

if(tahmin > sayi ){
	
	printf("Daha kucuk bir sayi giriniz.\n");
		goto enbas;
}

if(tahmin == sayi){
	
	printf("Tebrikler %d denemede bildiniz!\t",i);
	
}
z = (log(ust_limit) /log(2)+2 - i)*100;



printf("Skorunuz : %0.2f\n",z);

if(z > w){

  printf("A new highscore!\n");
  w=z;
}

printf("Tekrar Oynamak Ister misiniz ? ");
q=getch();

printf("\n",q);

if(q=='e'){
	goto programbasi;
}





	getch();
	return 0;
	
}
