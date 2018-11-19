//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"
#include "stdlib.h"
#define constanteS3 12

//mes variable sont dans header.h

void main(void)
{
   srand(time(NULL));
   
	calculer_S1();
	calculer_N2max();
	calculer_somme_S3(); 
	calculer_S4();
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
	while(3*N<9876)
    {   
        S2 = S2 + 3*N;
        N = N + 1;			   		
	}
	return N;
 }

unsigned long int calculer_somme_S3(void)
{
   int valeur_stock=0;
	
	for(i=0;i<constanteS3;i++)
	{
	val_rand= rand()%10+1;
	
	valeur_stock=valeur_stock+val_rand;
	}

	S3= valeur_stock;
	
	return S3; 
}


unsigned long int calculer_S4(void)
{
   N=0;
   char if_valide=0;
   
	
	while(if_valide<=20)
	{
		N=N+1;
		if( (N%3 == 0) || (N%7 == 0) )
		{
			if_valide=if_valide+1;
		}
	
	}

	return N;
}
