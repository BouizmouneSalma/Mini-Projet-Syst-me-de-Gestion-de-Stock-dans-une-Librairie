#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
char titre[100][100]={"Programinglanguage","codePrograming"};
char auteur[100][100]={"Brian Kernighan et Dennis Ritchie","Andre Lamothe"};
float prix[100]={50.00,100.60};
int quantite[100]={10,2};
int choix,quantite2;
int cpt=2;
char title_Sersh[100];
int trouvee; //ce variable  pour la recherche
int total_de_livre;
do
{   
    printf("1 . Ajouter un livre au stock            \n");
    printf("2 . Afficher tous les livres disponibles \n");
    printf("3 . Rechercher un livre par son titre\n");
    printf("4 . Mettre a jour la quantite d'un livre \n");
    printf("5 . Supprimer un livre du stock \n");
    printf("6 . Afficher le nombre total de livres en stock \n");
    printf("0 . pour quitte le programme\n");
    printf("entrez votre choix : \t");
    scanf("%d",&choix);
    printf("_________________________\n");
    
switch (choix){
case 1: //Ajouter un livre au stock.
    printf("titre de livre : ");
    scanf("%s",titre[cpt]);

    printf("auteur de livre : ");
    scanf("%s",auteur[cpt]);

    printf("prix de livre : ");
    scanf("%f",&prix[cpt]);

    printf("quantite de livre : ");
    scanf("%d",&quantite[cpt]);
    cpt++;
    printf("le livre est ajoutee avec succes\n");
    break;
case 2://Afficher tous les livres disponibles
    for(int i = 0; i < cpt;i++){
         printf("\n\ntitre de livre %d: %s\n",i,titre[i]);
         printf("auteur de livre : %s\n",auteur[i]);
         printf("prix de livre : %.2f\n",prix[i]);
         printf("quantite de livre : %d\n\n\n",quantite[i]);
         printf("_________________________\n");
    }
 break;
    
case 3:// Rechercher un livre par son titre.
        
        trouvee = 0;
         printf("titre de livre : ");
         scanf("%s",title_Sersh);
         for(int i = 0; i < cpt;i++){
            if (strcmp(title_Sersh,titre[i])==0){// comparer deux string si ils sont egaux  remplacer trouve par 1
                printf("titre de livre : %s\n",titre[i]);
                printf("auteur de livre : %s\n",auteur[i]);
                printf("prix de livre : %.2f\n",prix[i]);
                printf("quantite de livre : %d\n\n\n",quantite[i]);
                trouvee = 1;
                break; 
            }
         }
         if(trouvee == 0){
            printf("livre indisponible \n");
         }         


break;
case 4://Mettre a jour la quantite d'un livre
        trouvee = 0;
         printf("titre de livre : ");
         scanf("%s",title_Sersh);
         for(int i = 0; i < cpt;i++){
            if (strcmp(title_Sersh,titre[i])==0)
            {
                printf("entrez la nouvelle quantite : ");
                scanf("%d",&quantite2);
                quantite[i] += quantite2;
                trouvee = 1;
                break;
            }
         }
         if(trouvee == 0){
            printf("livre indisponible \n\n");
         }
         else printf("le livre est trouvee et la modification passera avec succes\n\n\n");
         

    break;
case 5://Supprimer un livre du stock
      trouvee = 0;
         printf("titre de livre : ");
         scanf("%s",title_Sersh);
         for(int i = 0; i < cpt;i++){
            if (strcmp(title_Sersh,titre[i])==0)
            {
                for (int j = i; j < cpt-1; j++)
                {
                   strcpy(titre[j],titre[j+1]);
                   strcpy(auteur[j],auteur[j+1]);
                   prix[j] = prix[j+1];
                   quantite[j] = quantite[j+1];
                }
                
        
                trouvee = 1;
                cpt--;
                break;
            }
         }
         if(trouvee == 0){
            printf("livre indisponible \n\n");
         }  
         else printf("supprime avec succes\n\n\n");       


    break;
case 6:
    for (int i = 0; i < cpt; i++)
    {
        total_de_livre += quantite[i];
    }
    printf("la Biblio contient %d\n\n\n",total_de_livre);
    
    break;

default:
    if(choix != 0){
        printf("entrer un choix validee\n");
    }
    break;
        }
        system("pause");
        system("cls");
} while (choix != 0);

    return 0;
}