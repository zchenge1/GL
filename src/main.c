//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"


int main(void)
{
 char info[100];//="je appelle Lea Dupont et 19 ans";
 
 char prenom[100];
 char nom[100];
 unsigned int age;
 
 
 	printf("taper le prenom=");
	scanf("%s",prenom);
 	printf("\ntaper le nom=");
	scanf("%s",nom);
	printf("\ntaper l'age=");
	scanf("%d",&age);
	
 	sprintf(info,"je m'appelle %s %s et j'ai %d ans",prenom,nom,age);
    //sprintf(info,"je appelle Lea Dupont et 19 ans");
	sscanf(info,"%*s %*s %s %s %*s %d %*s",prenom,nom,&age);
	
  //scanf(info,"%*s %*s %s %s %*s %d %*s",prenom,nom,&age);
    return 0;
}
