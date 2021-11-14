#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct coordinate{
	int x,y;
};

//struct coordinate *path = (struct coordinate*)malloc(100 * sizeof(int));
struct coordinate path[100];
int pathSize = 0;


void drawPath(struct coordinate _path[100],int _pathSize){
	
	
int cartesian[40][40];
//struct coordinate *_path = (struct coordinate*)malloc(100 * sizeof(int));
	
int i = 0, j= 0 , k = 0;



for(i=0;i<40;i++)
{	  
  for(j=0;j<40;j++)
  {
  	cartesian[i][j] = 0;
  }
  
}

for(k=0 ;k<pathSize;k++)
{
   cartesian[20+_path[k].x][20-_path[k].y]=1;
}

for(i=0;i<40;i++)
{	  
  for(j=0;j<40;j++)
  {
  	if(cartesian[i][j] == 1)
  	printf("%d",cartesian[i][j]);
  	else
	printf(" ");
	  	
	  
  }
  printf("\n");
}

}

int pathLenght(struct coordinate A,struct coordinate B)
{
	int max = 0;
	int i = 0 ;
	int coordinates[4];
	coordinates[0]=A.x;
	coordinates[1]=A.y;
	coordinates[2]=B.x;
	coordinates[3]=B.y;
	
	for(i = 0; i<4 ; i++)
	{
		if(fabs(coordinates[i])>max)
		{
			max = fabs(coordinates[i]);
		}
	}
	
	return fabs(coordinates[i])*2;
}






double findDistance(struct coordinate startPoint,struct coordinate endPoint)
{
double distance = 0;

distance = sqrt(pow(endPoint.x-startPoint.x,2) +pow(endPoint.y-startPoint.y,2));

return distance;
		
}

void scoreCalculator(struct coordinate _startPoint,struct coordinate _endPoint)
{
bool notEqual = true;
	
	while(notEqual)
{
	

int i = 0 ,j = 0;
double min = 1000000;
double gScore,hScore,goalScore;
struct coordinate _midPoint,_tempPoint;

for(i = (_startPoint.x)-1 ; i<=(_startPoint.x)+1 ; i++)
{
	_midPoint.x = i;
	for(j = (_startPoint.y)-1 ; j<=(_startPoint.y)+1 ; j++)
	{
		if(i == _startPoint.x && j == _startPoint.y)
		{
			continue;
		}
	 
		
		_midPoint.y = j;
		gScore = findDistance(_midPoint,_startPoint);
		hScore = findDistance(_endPoint,_midPoint);
		goalScore = gScore + hScore;
		
		if(goalScore < min)
		{
			min = goalScore;
		    _tempPoint = _midPoint;
		    
		}
		   
	}
}
//printf("%lf :%d,%d\n",min,_tempPoint.x,_tempPoint.y);

_startPoint = _tempPoint;

path[pathSize] = _startPoint;

//printf("%d,%d	\n",path[pathSize].x,path[pathSize].y);
pathSize++;

 if(_startPoint.x == _endPoint.x && _startPoint.y == _endPoint.y)
 {
 	notEqual = false;
 }
 
}


//printf("sonuc :  %d,%d",_startPoint.x,_startPoint.y);
}

int main()
{

struct coordinate A , B;
A.x = 13;
A.y = 2;
B.x = 4;
B.y = -2;

printf("Start : %d,%d\n",A.x,A.y);
printf("End : %d,%d\n",B.x,B.y);

scoreCalculator(A,B);
drawPath(path,pathSize);	
	
	
	return 0;
}
