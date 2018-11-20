//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"
#include "stdlib.h"

#define seuil 5 
#define SEUILH 200
#define SEUILB -100
#define N 10

unsigned char i, n;
int moit;

unsigned char bin[10]={0,1,2,3,4,5,6,7,8,9};
unsigned char sat[10]={0,1,2,3,4,5,6,7,8,9};
unsigned char dist[10]={12,23,56,78,100,120,156,189,201,250};
unsigned char A[6]={0,1,5,9,8,11};
unsigned char B[5]={0,1,2,3,4};
unsigned char miroir[N]={0,1,2,3,4,5,6,7,8,9};  

void tab_bin(void);
void tab_sat(void);
void tab_dist(void);
void recopier_tabA_invers_dans_tabB(void);
void tab_miroir(void);

int main(void)
{
	srand(time(NULL));
	
	tab_bin();
	tab_sat();
	tab_dist();
	recopier_tabA_invers_dans_tabB();
	tab_miroir();
    return 0;
}

void tab_bin(void)
{
	for (i=0;i<10;i++)
	{
		if (bin[i]> seuil)
		{
			bin[i]=1;
		}
			else {
				bin[i]=0;
			}	
	}
}


void tab_sat(void)
{
	int val_rand=0;
		
		for (i=0;i<10;i++)
	{
		val_rand= (rand()%500+1)-250;
		if (val_rand<SEUILB)
		{
			sat[i]= SEUILB;
		}
		else if (val_rand>SEUILH)
		{
			 sat[i]= SEUILH;
		}
		else { 		
		 sat[i]=val_rand;
			}
	} 	
	
}

void tab_dist(void)
{
   for (i=1;i<10;i++)
	{
	 dist[i] = dist[i] - dist[i-1];
		
	} 	
}

void recopier_tabA_invers_dans_tabB(void)
{

    for ( i=5, n=0 ; i>0 ; i--, n++)
	{
		B[n]=A[i];
		
	}
	
}

void tab_miroir(void)
{
 moit=N/2;
 
     for ( i=0,n=9 ; i<10 ; i++,n--)
	{
		if (i>=moit)
		{
			miroir[i]=miroir[n];
		}
	miroir[i];	
		
	}

}
