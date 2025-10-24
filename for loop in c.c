#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
  for(i=a;i<=b;i++){
  	if(i<10){
  		if(i==1)printf("ONE");
  		else if(i==2)printf("TWO");
  		else if(i==3)printf("THREE");
  		else if(i==4)printf("FOUR");
  		else if(i==5)printf("FIVE");
  		else if(i==6)printf("SIX");
  		else if(i==7)printf("SEVEN");
  		else if(i==8)printf("EIGHT");
  		else if(i==9)printf("NINE");
	  }
	  else{
	  	if(i%2==0)printf("EVEN");
	  	else printf("odd");
	  }
	  printf("\n");
  }
  
}
