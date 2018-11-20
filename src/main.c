//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"
#include "stdlib.h"

#define seuil 5 
#define SEUILH 200
#define SEUILB -100


unsigned char bin[10]={0,1,2,3,4,5,6,7,8,9};
unsigned char sat[10]={0,1,2,3,4,5,6,7,8,9};
unsigned char dist[10]={12,23,56,78,100,120,156,189,201,250};
int i;

void tab_bin(void);
void tab_sat(void);
void tab_dist(void);


int main(void)
{
	srand(time(NULL));
	
	tab_bin();
	tab_sat();
	tab_dist(); 
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
