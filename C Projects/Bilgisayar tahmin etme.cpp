#include<stdio.h>
#include <stdlib.h>
#include<time.h> 
#include <conio.h>
#include<math.h>



int main(){


int f=0;
int i=0;
int q;
int sayi;	
int ust_limit;
char w;
int alt_limit=0;

printf("Merhaba sayi tahmin etme oyununa hosgeliniz\n");
printf("Kurallar: Tahmininiz tahmin ettigim sayidan buyukse 'b' tusuna basin \n");
printf("Tahmininiz tahmin ettigim sayidan kucukse 'k' tusuna basin\n");
printf("Eger tuttugunuz sayiyi bildiysem 'e' tusuna basiniz\n");
printf("Tekrar oynamak icin 'r' tusuna basiniz\n");




programbasi:
printf("Ust limit giriniz : ");
scanf("%d",&ust_limit);

	srand(time(0));

enbas:			

	sayi=rand()%(ust_limit-alt_limit+1)+alt_limit-1;
	
printf("Tahmininiz bu mu : %d\n",sayi);
	w=getch();


if(w =='b') {	
 
alt_limit=sayi;
goto enbas;
}

if(w == 'k'){
ust_limit=sayi;
goto enbas;

}


if(w=='e'){	
  
	printf("Game over I won.\n",i);

}
	printf("Tekrar oynamak ister misiniz ?\n");
	 q=getch();
	 
	 
if(q=='r'){
goto programbasi;
}
		
			
	
	
	return 0;
}
