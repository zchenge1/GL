//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"
#include "TP_lib_suite.h"

unsigned char comb_prefe[6]={0,3,7,12,2,30};
unsigned char tirage_loto[6]={1,3,2,12,4,9};
unsigned char tirage_loto_alea[6]={1,3,2,12,4,9};

void comparer_les_2_tab(unsigned char comb_prefe[6],unsigned char tirage_loto[6]);
void comparer_les_2_tab_libreri(unsigned char comb_prefe[6],unsigned char tirage_loto_alea[6]);


int i,j;
int C_egal=0; 
	
int main(void)
{
	srand(time(NULL));

	
	 comparer_les_2_tab(comb_prefe,tirage_loto);
	 comparer_les_2_tab_libreri(comb_prefe,tirage_loto_alea);
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
	 comb_prefe[i];
	 	for (j=0;j<6;j++)
	 	{
			N= tirerNumero();
			tirage_loto_alea[j]=N; 
		
				if(comb_prefe[i]==tirage_loto_alea[j])
				{
					C_egal=C_egal+1;
				}
	 	}
		
 	}	
	
	
}
