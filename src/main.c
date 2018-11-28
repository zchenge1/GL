//  Copyright (c) 2018 Antoine Tran Tan
//
#include "my_header.h"
#include "TP_lib_suite.h"

unsigned char comb_prefe[6]={0,3,7,12,2,30};
unsigned char tirage_loto[6]={1,3,2,12,4,9};
unsigned char tirage_loto_alea[6]={1,3,2,12,4,9};

void comparer_les_2_tab(unsigned char comb_prefe[6],unsigned char tirage_loto[6]);
void comparer_les_2_tab_libreri(unsigned char comb_prefe[6],unsigned char tirage_loto_alea[6]);
void comparer_tirage100(unsigned char comb_prefe[6],unsigned char tirage_loto_alea[6]);

int i,j;
int C_egal=0;
int meilleur_score=0;
	
int main(void)
{

	 comparer_les_2_tab(comb_prefe,tirage_loto);
	 comparer_les_2_tab_libreri(comb_prefe,tirage_loto_alea);
	 comparer_tirage100(comb_prefe,tirage_loto_alea);
    return 0;
}



void comparer_les_2_tab(unsigned char comb_pref[6],unsigned char tirage_loto[6])
{

	
 for (i=0;i<6;i++)
 {
	comb_prefe[i];
	
	 for (j=0;j<6;j++)
	 {
		tirage_loto[j];
		
			if(comb_prefe[i]==tirage_loto[j])
			{
				C_egal=C_egal+1;
			}
	 }
 }
}


void comparer_les_2_tab_libreri(unsigned char comb_prefe[6],unsigned char tirage_loto_alea[6])
{
	int N;
	
	initialiserTirage();
	
	for (i=0;i<6;i++)
 	{
		N= tirerNumero();
		tirage_loto_alea[i]=N;
	 	for (j=0;j<6;j++)
	 	{
			 comb_prefe[j];
				if(comb_prefe[i]==tirage_loto_alea[j])
				{
					C_egal=C_egal+1;
				}
	 	}
		
 	}	
	
	
}

void comparer_tirage100(unsigned char comb_prefe[6],unsigned char tirage_loto_alea[6])
{
	int n,k,tirage=0;
	
	initialiserTirage();
	
	for (k=0;k<100;k++)
	{
		if (tirage>=meilleur_score)
		{
			meilleur_score=tirage;
		}
		 tirage=0;
			for (i=0;i<6;i++)
 			{
				n= tirerNumero();
				tirage_loto_alea[i]=n;
	 		
	 			for (j=0;j<6;j++)
	 			{
 					  comb_prefe[j];
		
						if(comb_prefe[i]==tirage_loto_alea[j])
						{
							tirage=tirage+1;
						}
	 			}
		
 			}
	}
}
