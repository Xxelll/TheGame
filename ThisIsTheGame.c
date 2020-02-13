#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>


int main (int argc, char *argv[]){

  //Intrigue
  printf("Vous etes Eliza Echen alias Ash, membre du groupe d'intervention du SWAT.\n");
  printf("\n");
  printf("Votre equipe a ete appele pour resoudre une situation de crise :\nUn groupe de dangereux terroristes a prit en otage une famille localisee dans l'Oregon au Nord-Ouest des Etats-Unis.\n");
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
printf("La route est longue\nVous cherchez une distraction:\n\nRegarder par la fenetre(1)\nParler avec le chauffeur(2)\nVerifier votre arme de poing(3)\nDormir(4)\n");

int decisionJoueur = 0;
scanf("%d",&decisionJoueur);


if(decisionJoueur == 1){
			printf("\nVous regardez par la fenetre mais la nuit est si opaque que vous ne parvenez qu'a deviner le paysage.\nSeul les eclats bleus et rouges des gyophares dechirent la nuit par intervals reguliers.\nVous etes soudain pris d'un pressentiment.\nC'est loin d'etre votre premiere intervention mais quelque chose ne tourne pas rond et vous n'arrivez pas a savoir quoi.\n");
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
              printf("Votre fidel semi-automatique M45 Meusoc est range dans le holster en face de vous\n");
              printf("L'arme est chargee mais pas armee.\nVous enlevez le chargeur, il contient 7 balles de .45ACP.\nIl a une faible capacite mais le .45ACP a un fort pouvoir d'arret.\n");
              }
      }
    }


  return 0;
}
