
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <windows.h>

// variables
int decisionJoueur = 0;
int pvAsh = 100;
int pvTerro = 99;
int g36c = 0;
int r4c = 0;
int explosif = 0;
int grenadeFlash = 0;

int attaqueG36c = 33;
int attqaueR4c = 50;




int main (int argc, char *argv[]){

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
//Sleep(1000);
printf(".\n");
//Sleep(1000);
printf(".\n");
//Sleep(1000);
printf(".\n");
//Sleep(1000);
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

    //Sleep(1000);
    printf(".\n");
    //Sleep(1000);
    printf(".\n");
    //Sleep(1000);
    printf(".\n");
    //Sleep(1000);

    printf("Vous arrivez enfin sur les lieux.\nLa police locale a deja gele la situation en encerclant la maison ou sont retranches les preneurs d’otages\n\nTapez sortir pour descendre de la voiture\n");

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

  printf("Devant vous votre unite est dejà en train de se preparer dans le fourgon technique\n");
  printf("\nRejoindre le fourgon (1)\nObserver la maison (2)\n");
  scanf("%d",&decisionJoueur);
  if (decisionJoueur == 1){
    printf("Vous rejoignez le fourgon pour vous equiper. Vos armes de service sont accrochees sur le râtelier fixe contre la paroi interieur du vehicule.\n");
  }
  if (decisionJoueur == 2){
    printf("C’est une grande maison, elle dispose d’un etage d’un garage et d’un toit à pente douce. 3 accès potentiels pour s’inserer.\n");
    printf("\nRejoindre le fourgon (1)\nObserver les alentours (2)\n");
    scanf("%d",&decisionJoueur);
      if (decisionJoueur ==1) {
        printf("Vous rejoignez le fourgon pour vous equiper. Vos armes de service sont accrochees sur le râtelier fixe contre la paroi interieur du vehicule.\n");
      }
      if (decisionJoueur ==2) {
        printf("Un jardin entour la maison, il n’y a aucun eclairage et de l’eau sort d’un tuyau d’arrosage laisse au sol\n");
      }
  }







  return 0;
}
