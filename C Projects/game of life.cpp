#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define max  30


typedef int dizit[max][max];



int say(int j,int i,int m[max][max]){
	
	int sayac = 0;
	int k = 0;
	int l = 0;
	
	
	int bx = i-1;
	int by = j-1;
	int ex = i+1;
	int ey = j+1;
	
	
	if(bx < 0)
	bx = 0;
	
	if(by < 0 )
	by = 0;
	
	
	if(ex >= max)
	ex=max-1;
	if(ey >= max)
	ey = max-1;
	
	//printf("%d",m[j][i]);
	
	
	for(k = by ; k <= ey; k++){
		for(l = bx; l <= ex; l++ ){
			if(m[k][l]==1 && (k!=j || l!=i) ){
				sayac ++;
			}
		}
	}
	
	
	
	return sayac;
}



void kontrol(int j,int i,int sayi,int m[max][max],int m2[max][max]){



			if( m[j][i]== 1){
			   if (sayi < 2 || sayi >3 ) 
			   m2[j][i]=0;
			   else{
			   	m2[j][i]=1;
			   }
			}	
			else{
				if(sayi == 3){
				m2[j][i]=1;
			}
				else 
			m2[j][i]=0;
			}
			
		    
			
			
		
}


void printmatris(int m[max][max]){
	
	int i=0,j=0;
		
	for(j = 0 ; j < max ; j++) 
	{
	   for(i = 0 ; i < max ; i++)
	   {
	   if(m[j][i] == 1)
	   printf("*");
	   else
	    printf(" "); 
       } 		  
    	printf("\n");
    }
	
	
	
}





int main(){
	
	int arf =0;
	int i=0,j=0;
	dizit matrisx;
    dizit matrisy;
	int a;
	int komsu = 0;
	srand(time(0));
	
	
	for(j = 0 ; j < max ; j++) 
	{
	   for(i = 0 ; i < max ; i++)
	   {
	   	
	   	matrisx[j][i]= 1;
	    a = rand()%10;
	    if(a < 5)
	    matrisx[j][i]=0;
	    
       } 		  
    
    }
		
		printmatris(matrisx);
		
		

do 
{

		
	for(j = 0 ; j < max ; j++){
		for(i= 0 ; i < max ; i++){
			
        komsu = say(j,i,matrisx);
        //printf("Tane[%d][%d] = %d ",j,i,komsu);
        
        kontrol(j,i,komsu,matrisx,matrisy);
   	    //printf(" %d\n ",matrisy[j][i]);

		}
		
		
	}
	
	printf("----------------------------------------------------------------------------\n");
    printmatris(matrisy);
  
   	memcpy(matrisx,matrisy,sizeof(matrisx)) ;
   
   char bell = 7; 
   
   
   printf("%c",033);
   //system("cls"); 
   
   
   arf++;	
   
} while(arf < 100);
	
  return 0;
}
