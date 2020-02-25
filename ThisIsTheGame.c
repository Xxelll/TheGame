
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// variables
int decisionJoueur = 0;
int pvAsh = 150;
int pvTerro1 = 99;
int pvTerro2 = 99;
int g36c = 0;
int r4c = 0;
int explosif = 0;
int grenadeFlash = 0;

int attaqueG36c = 0;
int precisionG36c = 0;
int attaqueR4c = 0;
int precisionR4c = 0;
int attaqueTerro = 30;




int main (int argc, char *argv[]){

  srand( time( NULL ) );

  while((pvTerro1 >0 || pvTerro2 > 0) && (pvAsh>0)){

  //Intrigue
  printf("Vous etes Eliza Echen alias Ash, membre du groupe d'intervention du SWAT.\n");
  printf("\n");
  printf("Votre equipe a ete appelee pour resoudre une situation de crise :\nUn groupe de dangereux terroristes a prit en otage une famille localisee dans l'Oregon au Nord-Ouest des Etats-Unis.\n");
  printf("Il ne manque plus que vous pour partir.\nTapez: partir pour regagner le vehicule d'intervention rapide.\n");

  char reponse[80];
  char partir[80] = ("partir");
  scanf("%s", reponse);

  while(strcmp(reponse,partir)){


  if (strcmp(reponse,partir)==0){

   }
   else {
     printf("On vous attend, depechez vous\n");
     scanf("%s", reponse);
   }
}

printf("La voiture demarre sirene hurlante et s'enfonce dans la nuit \n");
Sleep(1000);
printf(".\n");
Sleep(1000);
printf(".\n");
Sleep(1000);
printf(".\n");
Sleep(1000);
printf("La route est longue\nVous cherchez une distraction:\n\nRegarder par la fenetre(1)\nParler avec le chauffeur(2)\nVerifier votre arme de poing(3)\n");


scanf("%d",&decisionJoueur);


if(decisionJoueur == 1){
			printf("\nVous regardez par la fenetre mais la nuit est si opaque que vous ne parvenez qu'a deviner le paysage.\nSeul les eclats bleus et rouges des gyophares dechirent la nuit par intervales reguliers.\nVous etes soudain pris d'un pressentiment.\nC'est loin d'etre votre premiere intervention mais quelque chose ne tourne pas rond et vous n'arrivez pas a savoir quoi.\n");
      printf("\nParler avec le chauffeur(2)\nVerifier votre arme de poing(3)\n");
      scanf("%d",&decisionJoueur);
        if(decisionJoueur == 2){
        printf("\nJack est concentre, le visage crispe.\nVous decidez d'engager la conversation:\n");
        printf("\n-Pas trop tendu ?\n");
        printf("-Ca va j'ai connu pire.\nEt toi ?\n");
        printf("\nUn peu nerveuse(1)\nOn va leur botter le cul(2)\nLa mission est prioritaire(3)\n");
          scanf("%d",&decisionJoueur);
          if(decisionJoueur == 1){
          printf("-Je me sens un peu nerveuse, je ne sais pas pourquoi.\n");
          printf("-Ne t'en fais pas Ash ca va bien se passer. On va leur faire bouffer du plombs a ces connards et liberer ces pauvres gens.\n");
          printf("-Tu as raison, on est la pour eux avant tout\n");
          }
          if(decisionJoueur == 2){
          printf("-Oui on va leur botter le cul a ces enfoires!.\n");
          printf("-Ahah toujours egal a toi meme.\n");
          }
          if(decisionJoueur == 3){
            printf("-Ca n'a pas d'importance. La mission est prioritaire.\n");
          }
            printf("\n\nVerifier votre arme de poing(3)\n");
            scanf("%d",&decisionJoueur);
              if(decisionJoueur == 3){
              printf("Votre fidele semi-automatique M45 Meusoc est range dans le holster en face de vous\n");
              printf("L'arme est chargee mais pas armee.\nVous enlevez le chargeur, il contient 7 balles de .45ACP.\nIl a une faible capacite mais le .45ACP a un fort pouvoir d'arret.\n");
              }
      }
    }
if(decisionJoueur == 2){
              printf("\nJack est concentre, le visage crispe.\nVous decidez d'engager la conversation:\n");
        printf("\n-Pas trop tendu ?\n");
        printf("-Ca va j'ai connu pire.\nEt toi ?\n");
        printf("\nUn peu nerveuse(1)\nOn va leur botter le cul(2)\nLa mission est prioritaire(3)\n");
          scanf("%d",&decisionJoueur);
          if(decisionJoueur == 1){
          printf("-Je me sens un peu nerveuse, je ne sais pas pourquoi.\n");
          printf("-Ne t'en fais pas Ash ca va bien se passer. On va leur faire bouffer du plombs a ces connards et liberer ces pauvres gens.\n");
          printf("-Tu as raison, on est la pour eux avant tout\n");
          }
          if(decisionJoueur == 2){
          printf("-Oui on va leur botter le cul a ces enfoires!.\n");
          printf("-Ahah toujours egal a toi meme.\n");
          }
          if(decisionJoueur == 3){
            printf("-Ca n'a pas d'importance. La mission est prioritaire.\n");
          }
            printf("\n\nRegarder par la fenetre(1)Verifier votre arme de poing(2)\n");
            scanf("%d",&decisionJoueur);
            if(decisionJoueur == 1){
                printf("\nVous regardez par la fenetre mais la nuit est si opaque que vous ne parvenez qu'a deviner le paysage.\nSeul les eclats bleus et rouges des gyophares dechirent la nuit par intervales reguliers.\nVous etes soudain pris d'un pressentiment.\nC'est loin d'etre votre premiere intervention mais quelque chose ne tourne pas rond et vous n'arrivez pas a savoir quoi.\n");
      printf("\nVerifier votre arme de poing(1)\n");
      scanf("%d",&decisionJoueur);
      if(decisionJoueur == 1)
      printf("Votre fidele semi-automatique M45 Meusoc est range dans le holster en face de vous\n");
              printf("L'arme est chargee mais pas armee.\nVous enlevez le chargeur, il contient 7 balles de .45ACP.\nIl a une faible capacite mais le .45ACP a un fort pouvoir d'arret.\n");
              }
        if(decisionJoueur == 2){
            printf("Votre fidele semi-automatique M45 Meusoc est range dans le holster en face de vous\n");
              printf("L'arme est chargee mais pas armee.\nVous enlevez le chargeur, il contient 7 balles de .45ACP.\nIl a une faible capacite mais le .45ACP a un fort pouvoir d'arret.\n");
              printf("\nRegarder par la fenetre(1)\n");
      scanf("%d",&decisionJoueur);
      if(decisionJoueur == 1)
      printf("\nVous regardez par la fenetre mais la nuit est si opaque que vous ne parvenez qu'a deviner le paysage.\nSeul les eclats bleus et rouges des gyophares dechirent la nuit par intervales reguliers.\nVous etes soudain pris d'un pressentiment.\nC'est loin d'etre votre premiere intervention mais quelque chose ne tourne pas rond et vous n'arrivez pas a savoir quoi.\n");
            }
    }

   if(decisionJoueur == 3){
       printf("Votre fidele semi-automatique M45 Meusoc est range dans le holster en face de vous\n");
              printf("L'arme est chargee mais pas armee.\nVous enlevez le chargeur, il contient 7 balles de .45ACP.\nIl a une faible capacite mais le .45ACP a un fort pouvoir d'arret.\n");
              printf("\nRegarder par la fenetre(1)Parler avec le chauffeur(2)\n");
      scanf("%d",&decisionJoueur);
      if(decisionJoueur == 1){
      printf("\nVous regardez par la fenetre mais la nuit est si opaque que vous ne parvenez qu'a deviner le paysage.\nSeul les eclats bleus et rouges des gyophares dechirent la nuit par intervales reguliers.\nVous etes soudain pris d'un pressentiment.\nC'est loin d'etre votre premiere intervention mais quelque chose ne tourne pas rond et vous n'arrivez pas a savoir quoi.\n");
      printf("\nParler avec le chauffeur(1)\n");
      scanf("%d",&decisionJoueur);
      if(decisionJoueur == 1)
      printf("\nJack est concentre, le visage crispe.\nVous decidez d'engager la conversation:\n");
        printf("\n-Pas trop tendu ?\n");
        printf("-Ca va j'ai connu pire.\nEt toi ?\n");
        printf("\nUn peu nerveuse(1)\nOn va leur botter le cul(2)\nLa mission est prioritaire(3)\n");
          scanf("%d",&decisionJoueur);
          if(decisionJoueur == 1){
          printf("-Je me sens un peu nerveuse, je ne sais pas pourquoi.\n");
          printf("-Ne t'en fais pas Ash ca va bien se passer. On va leur faire bouffer du plombs a ces connards et liberer ces pauvres gens.\n");
          printf("-Tu as raison, on est la pour eux avant tout\n");
          }
          if(decisionJoueur == 2){
          printf("-Oui on va leur botter le cul a ces enfoires!.\n");
          printf("-Ahah toujours egal a toi meme.\n");
          }
          if(decisionJoueur == 3){
            printf("-Ca n'a pas d'importance. La mission est prioritaire.\n");
            }

          }

      if(decisionJoueur == 2){
          printf("\nJack est concentre, le visage crispe.\nVous decidez d'engager la conversation:\n");
        printf("\n-Pas trop tendu ?\n");
        printf("-Ca va j'ai connu pire.\nEt toi ?\n");
        printf("\nUn peu nerveuse(1)\nOn va leur botter le cul(2)\nLa mission est prioritaire(3)\n");
          scanf("%d",&decisionJoueur);
          if(decisionJoueur == 1){
          printf("-Je me sens un peu nerveuse, je ne sais pas pourquoi.\n");
          printf("-Ne t'en fais pas Ash ca va bien se passer. On va leur faire bouffer du plombs a ces connards et liberer ces pauvres gens.\n");
          printf("-Tu as raison, on est la pour eux avant tout\n");
          }
          if(decisionJoueur == 2){
          printf("-Oui on va leur botter le cul a ces enfoires!.\n");
          printf("-Ahah toujours egal a toi meme.\n");
          }
          if(decisionJoueur == 3){
            printf("-Ca n'a pas d'importance. La mission est prioritaire.\n");
            printf("\nRegarder par la fenetre(1)\n");
      scanf("%d",&decisionJoueur);
      if(decisionJoueur == 1){
      printf("\nVous regardez par la fenetre mais la nuit est si opaque que vous ne parvenez qu'a deviner le paysage.\nSeul les eclats bleus et rouges des gyophares dechirent la nuit par intervales reguliers.\nVous etes soudain pris d'un pressentiment.\nC'est loin d'etre votre premiere intervention mais quelque chose ne tourne pas rond et vous n'arrivez pas a savoir quoi.\n");
          }
          }
        }
    }

    printf("\n");
    printf("\n");

    Sleep(1000);
    printf(".\n");
    Sleep(1000);
    printf(".\n");
    Sleep(1000);
    printf(".\n");
    Sleep(1000);

    printf("Vous arrivez enfin sur les lieux.\nLa police locale a deja gele la situation en encerclant la maison ou sont retranches les preneurs d otages\n\nTapez sortir pour descendre de la voiture\n");

    char text[80];
    char sortir[80] = ("sortir");
    scanf("%s", text);

    while(strcmp(text,sortir)){


    if (strcmp(text,sortir)==0){

     }
     else {
       printf("La mission ne va pas se resoudre par magie\n");
       scanf("%s", sortir);
     }
  }

  printf("Devant vous votre unite est deja en train de se preparer dans le fourgon technique\n\n");
  printf("\nRejoindre le fourgon (1)\nObserver la maison (2)\n");
  scanf("%d",&decisionJoueur);
  if (decisionJoueur == 1){
    printf("Vous rejoignez le fourgon pour vous equiper. Vos armes de service sont accrochees sur le râtelier fixe contre la paroi interieur du vehicule.\n");
  }
  if (decisionJoueur == 2){
    printf("C est une grande maison, elle dispose d un etage d un garage et d un toit a pente douce. 3 acces potentiels pour s’inserer.\n");
    printf("\nRejoindre le fourgon (1)\nObserver les alentours (2)\n");
    scanf("%d",&decisionJoueur);
      if (decisionJoueur ==2) {
        printf("Un jardin entour la maison, il n y a aucun eclairage et de l eau sort d un tuyau d arrosage laisse au sol\n");
      }
  }

  printf("Vous rejoignez le fourgon pour vous equiper. Vos armes de service sont accrochees sur le ratelier fixe contre la paroi interieur du vehicule.\n");
  printf("Choisissez entre \n\n(1) une G36c (+90 en precision, +38 en degats)\n\n(2) une R4-C (+75 en precision, +49 en degats)\n\n");
  scanf("%d",&decisionJoueur);




    if (decisionJoueur ==1) {
       g36c = 1;
       attaqueG36c = 33;
       precisionG36c = 33;
    }

    if (decisionJoueur ==2) {
       r4c = 1;
       attaqueR4c = 50;
       precisionR4c = 50;
    }

    explosif = 2;
    grenadeFlash = 3;


printf("Vous etes equipe de %d g36c,",g36c );
printf(" de %d r4c,",r4c );
printf(" de %d explosif,",explosif );
printf(" de %d grenades flash\n\n",grenadeFlash );

printf("Il est temps de lancer l assaut. Par ou choisissez vous d attaquer?\n");
printf("Par le toit (1)\n\n");
//printf(Par la porte principale (2)\n\nPar le garage (3)\n");
scanf("%d",&decisionJoueur);

        // TOIT
        if (decisionJoueur ==1) {
          printf("Vous et votre equipe arrivez sur le toit a l aide d une echelle.\n Vous vous mettez en rappel sur le bord du toit afin d atteindre la fenetre de la chambre parentale\n\n");
          if (explosif>0){
            printf("Voulez vous placer une charge d infiltration sur la fenetre ? oui (1) non (2)\n");
            scanf("%d",&decisionJoueur);
            if (decisionJoueur ==1) {
              explosif -= 1;
              printf("Vous placez la charge et vous synchronise votre entree dans la chambre avec la detonation de l explosion\n");
          }
        }
            printf("Deux hostiles entourent l otage\n");

              if (grenadeFlash>0){
                printf("Voulez vous lancer une grenade flash ? oui (1) non (2)\n");
                scanf("%d",&decisionJoueur);
                if (decisionJoueur ==1) {
                  grenadeFlash -= 1;
                  printf("-GRENADE FLASH !-\n\n");

                  Sleep(2000);

                  printf("Un eclair blanc suivit d un son strident se produit\n\n Les hostiles sont etourdis par la grendade flash\n\n");
                  Sleep(1000);
                  attaqueTerro/2;
                }
              }
              Sleep(1000);
              printf("Vous devez engager les hostiles\n");
              printf("Tapez tirer pour neutraliser les hostiles\n");

              char reponse[80];
              char tirer[80] = ("tirer");
              scanf("%s", reponse);


              if (strcmp(reponse,tirer)==0){

               }
               else {
                 printf("ILS ONT ABATTU L OTAGE !\n");
                 Sleep(5000);
                 printf("Bon c etait un desastre, reessayons.\n\n\n");
               }

               while (pvTerro1 > 0 || pvTerro2 > 0){
  		                  pvTerro1 -= attaqueR4c + attaqueG36c;
  		                  pvTerro2 -= attaqueR4c + attaqueG36c;

                        printf("L hostile 1 a %d pv\n",pvTerro1);
                        Sleep(500);
                        printf("L hostile 2 a %d pv\n",pvTerro2);
                        Sleep(500);

                        if (pvTerro1 >0){
                          printf("L hostile 1 riposte !\n");
                          Sleep(500);
                          pvAsh -= attaqueTerro;
                        }
                        if (pvTerro2 >0){
                          printf("L hostile 2 riposte !\n");
                          Sleep(500);
                          pvAsh -= attaqueTerro;
                        }
                        printf("Vous avez %d pv\n",pvAsh);
                        Sleep(500);

                        printf("Tapez tirer pour neutraliser les hostiles\n");

                        char reponse[80];
                        char tirer[80] = ("tirer");
                        scanf("%s", reponse);


                        if (strcmp(reponse,tirer)==0){

                         }
                         else {
                           printf("ILS ONT ABATTU L OTAGE !\n");
                           Sleep(5000);
                           printf("Bon c etait un desastre, reessayons.\n\n\n");


                      }


        }
      }
}
printf("Les hostiles ont tous ete neutralises, bravo !\n\n Vous venez d etre promu\n");












  return 0;
}
