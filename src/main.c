//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"
#include "stdlib.h"
#define constanteS3 12

 int i;
 int val_rand;

  
 int rand (void);

void main(void)
{
   srand(time(NULL));
   
	calculer_S1();
	calculer_N2max();
	calculer_somme_S3(); 

	N=50;

}

unsigned long int calculer_S1(void)
 {
	 
	while(N<50)
    {
        S1 = S1 + 3*N;
        N = N + 1;
    }
	return S1;
 }

unsigned long int calculer_N2max(void)
 {
	N=0; 
	while(N<100)
    {   
		if (S2<=9876)
		{
        S2 = S2 + 3*N;
        N = N + 1;
		N2max=N2max+1;  
		}
		else 
			N=100;
    }
	return N2max;
 }

unsigned long int calculer_somme_S3(void)
{
   int valeur_stock=0;
	
	for(i=0;i<=constanteS3;i++)
	{
	val_rand= rand()%10+1;
	
	valeur_stock=valeur_stock+val_rand;
	}

	S3= valeur_stock;
	
	return S3; 
}
