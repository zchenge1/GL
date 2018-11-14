//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"
#include "TP_lib.h"


void main (void)
{
	  	srand(time(NULL));
		 while(resultat!=1)
		{
		resultat = LancerDe();
		if(resultat==4)
		{
			score=score+resultat;
		}
		
		else if(resultat==6)
		{
			score=score+resultat;
		}
		
		else if(resultat==2)
		{
			score=score+resultat;
		}
		
		else if(resultat==3)
		{
			score = score*2;
		}
		
		else if(score==5)
		{
			score = score-2;
		}
		else {}
		
		
		  
		}

printf ("le score du joueur est de : %d",score);    

 score= score+0;
}
