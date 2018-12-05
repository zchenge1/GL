//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"


int main(void)
{
char info_traingle[100];
char info_Pentagone[100];

char ligne1[80]="Nom: triangle_A";
char ligne2[80]="Nb point: 3"; 
char ligne3[80]="Cordonnees: 10 20 30 20 30 40 -1 -1 -1 -1";

char ligne4[80]="Nom: pentagone_B";
char ligne5[80]="Nb point: 5"; 
char ligne6[80]="Cordonnees: 10 20 30 20 30 40 43 53 35 65 ";

char nom_fig_triang[100];
char nom_fig_pentagone[100];
unsigned int nb_pts_triang;
unsigned int nb_pts_pentagone;
int x[10];
int y[10];

sscanf(ligne1,"%*s %s",nom_fig_triang);
sscanf(ligne2,"%*s %*s %d",&nb_pts_triang);
sscanf(ligne3,"%*s %d %d %d %d %d %d %d %d %d %d",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3],&x[4],&y[4]);
sprintf(info_traingle,"la figure %s possede %d sommets",nom_fig_triang,nb_pts_triang);
printf("%s",info_traingle);

sscanf(ligne4,"%*s %s",nom_fig_pentagone);
sscanf(ligne5,"%*s %*s %d",&nb_pts_pentagone);
sscanf(ligne6,"%*s %d %d %d %d %d %d %d %d %d %d",&x[5],&y[5],&x[6],&y[6],&x[7],&y[7],&x[8],&y[8],&x[9],&y[9]);
sprintf(info_Pentagone,"\nla figure %s possede %d sommets",nom_fig_pentagone,nb_pts_pentagone);
printf("%s",info_Pentagone);
    return 0;
}

