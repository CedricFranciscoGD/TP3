#include <stdio.h>
#include <string.h>

	struct Item
	{
		char nom[100];
		int prix;	
	};
	typedef struct Item item;
	
	


int main(){

	//Choix action joueur
	int choixJoueur = 0;

	//Choix item a acheter
	int choixAchat = 0;

	//Nombre d'item que l'on veut ajouter
	int addItem = 0; 

	/*J'ai essayé de donner la possibilité d'ajouter plusieur items, mais les noms d'items se remplacent si on choisi 2 et le programme s'arrete
	 si on choisi 3. Je laisse quand meme le code dans l'état puisque c'est fonctionnel avec 1 item et marche a moitié avec 2
	Pour ce qui est du tri, j'ai en commentaire en bas de mon code la fonction qui devait me permettre de trier ce qu'il y avait a
	trier mais je n'ai pas réussi a la faire marcher, elle doit etre fausse.*/

	//Choix de nom pour les 3 items que l'on peut rajouter
	char item1;
	char item2;
	char item3;

	//Choix de prix pour les 3 items que l'on peut rajouter
		int prix1;
	int prix2;
	int prix3;
	
	//Mon inventaire
	item inventaire[50] = {{"Lance en fer", 100},{"Potion de vie", 100},{"Potion de bouclier",100},
	{"Heaume en acier",100},{"Morceau de viande",100}, {"Veste en cuir",100}};

	//Items dispo au shop
	item shop[15] = {{"Filet", 160},{"Lance en bois",25},{"Massue",200},{"Viande de boeuf",10},
	{"Fiole vide",5},{"Bouclier en bois",50},{"Glaive en bois",55},{"Pain",8}};


	printf("Que souhaitez vous faire ?\n");
	printf("Tapez 1 pour afficher votre inventaire..\n");
	printf("Tapez 2 pour vous rendre au shop..\n");
	scanf("%d", &choixJoueur);
	if (choixJoueur== 1)
	{
		printf("Vous ouvrez votre inventaire: \n");
		item lance = {"Lance en fer", 100};
		printf("Vous possedez: \n");
		printf("%s \n", lance.nom);
		item potion = {"Potion de vie", 100};
		printf("%s \n", potion.nom);
		item shield = {"Potion de bouclier", 100};
		printf("%s \n", shield.nom);
		item casque = {"Heaume en acier", 100};
		printf("%s \n", casque.nom);
		item viande = {"Morceau de viande", 100};
		printf("%s \n", viande.nom);
		item vetement = {"Veste en cuir", 100};
		printf("%s \n", vetement.nom);
	}
	
	else if (choixJoueur == 2)
	{
		printf("Vous entrez dans le shop: \n");
		printf("Bonjour voila ce que j'ai a t'offrir:\n");
		item lance1 = {"Lance en bois",25};
		item filet = {"Filet", 160};
		item massue = {"Massue",200};
		item viande = {"Viande de boeuf",10};
		item divers = {"Fiole vide",5};
		item bouclier = {"Bouclier en bois",50};
		item epee = {"Glaive en bois",55};
		item nourriture = {"Pain",8};
		printf("1:%s ................................ Prix: %d Or \n",lance1.nom, lance1.prix );
		printf("2:%s ................................ Prix: %d Or \n",filet.nom, filet.prix );
		printf("3:%s ................................ Prix: %d Or \n",massue.nom, massue.prix );
		printf("4:%s ................................ Prix: %d Or \n",viande.nom, viande.prix );
		printf("5:%s ................................ Prix: %d Or \n",divers.nom, divers.prix );
		printf("6:%s ................................ Prix: %d Or \n",bouclier.nom, bouclier.prix );
		printf("7:%s ................................ Prix: %d Or \n",epee.nom, epee.prix );
		printf("8:%s ................................ Prix: %d Or \n",nourriture.nom, nourriture.prix );

		printf("que souhaitez vous faire ?\n");
		printf("Tapez 1 pour afficher votre inventaire..\n");
		printf("Tapez 3 pour faire un achat\n");
		printf("Tapez 4 pour demander au marchand d'ajouter un item\n");
		printf("Tapez 0 pour quittez le shop\n");

		scanf("%d", &choixJoueur);

		if(choixJoueur==0)
		{
			printf("Merci, a bientot ! \n");
		}
		else if (choixJoueur==1)
		{
			printf("Vous ouvrez votre inventaire: \n");
			item lance = {"Lance en fer", 100};
			printf("Vous possedez: \n");
			printf("%s \n", lance.nom);
			item potion = {"Potion de vie", 100};
			printf("%s \n", potion.nom);
			item shield = {"Potion de bouclier", 100};
			printf("%s \n", shield.nom);
			item casque = {"Heaume en acier", 100};
			printf("%s \n", casque.nom);
			item viande = {"Morceau de viande", 100};
			printf("%s \n", viande.nom);
			item vetement = {"Veste en cuir", 100};
			printf("%s \n", vetement.nom);
		}

		//Ici le joueur peut choisir l'item qu'il souhaite acheter
		else if(choixJoueur==3)
		{
			printf("Que souhaitez vous acheter ?\n");
			printf("Tapez le numero correspondant a l'article de votre choix\n");
			scanf("%d",&choixAchat);
			if (choixAchat==1)
			{
				printf("Vous venez d'acheter %s \n", lance1.nom );
			}
			else if (choixAchat==2)
			{
				printf("Vous venez d'acheter %s \n",filet.nom );
			}
			else if (choixAchat==3)
			{
				printf("Vous venez d'acheter %s \n",massue.nom );
			}
			else if (choixAchat==4)
			{
				printf("Vous venez d'acheter %s \n",viande.nom );
			}
			else if (choixAchat==5)
			{
				printf("Vous venez d'acheter %s \n",divers.nom );
			}
			else if (choixAchat==6)
			{
				printf("Vous venez d'acheter %s \n",bouclier.nom );
			}
			else if (choixAchat==7)
			{
				printf("Vous venez d'acheter %s \n",epee.nom );
			}
			else if (choixAchat==8)
			{
				printf("Vous venez d'acheter %s \n",nourriture.nom );
			}

		}

		// Ici le joueur a la possibilité de demander au marchand d'ajouter jusqu'à 3 items
		else if (choixJoueur==4)
		{
			printf("Combien d'objet souhaitez vous ajouter ? (maximum 2) \n");
			scanf("%d",&addItem);
			if (addItem==1)
			{
				printf("Choisissez le nom de l'objet:\n");
				scanf("%s",&item1);
				printf("Choisissez le prix de l'objet:\n");
				scanf("%d", &prix1);
				printf("Le marchand vient d'ajouter '%s' au prix de %d or dans sa boutique\n", &item1, prix1 );
				printf("\n");
				printf("Voila ce que j'ai a t'offrir:\n");
				printf("1:%s ................................ Prix: %d Or \n",lance1.nom, lance1.prix );
				printf("2:%s ................................ Prix: %d Or \n",filet.nom, filet.prix );
				printf("3:%s ................................ Prix: %d Or \n",massue.nom, massue.prix );
				printf("4:%s ................................ Prix: %d Or \n",viande.nom, viande.prix );
				printf("5:%s ................................ Prix: %d Or \n",divers.nom, divers.prix );
				printf("6:%s ................................ Prix: %d Or \n",bouclier.nom, bouclier.prix );
				printf("7:%s ................................ Prix: %d Or \n",epee.nom, epee.prix );
				printf("8:%s ................................ Prix: %d Or \n",nourriture.nom, nourriture.prix );
				printf("9:%s ................................ Prix: %d Or \n",&item1, prix1 );

				
			}
			if (addItem==2)
			{
				printf("Choisissez le nom de l'objet:\n");
				scanf("%s",&item1);
				printf("Choisissez le prix de l'objet:\n");
				scanf("%d", &prix1);
				printf("Le marchand vient d'ajouter '%s' au prix de %d or dans sa boutique\n", &item1, prix1 );
				printf("\n");
				printf("Choisissez le nom de l'objet 2 :\n");
				scanf("%s",&item2);
				printf("Choisissez le prix de l'objet 2:\n");
				scanf("%d", &prix2);
				printf("Le marchand vient d'ajouter '%s' au prix de %d or dans sa boutique\n", &item2, prix2 );
				printf("\n");
				printf("Voila ce que j'ai a t'offrir:\n");
				printf("1:%s ................................ Prix: %d Or \n",lance1.nom, lance1.prix );
				printf("2:%s ................................ Prix: %d Or \n",filet.nom, filet.prix );
				printf("3:%s ................................ Prix: %d Or \n",massue.nom, massue.prix );
				printf("4:%s ................................ Prix: %d Or \n",viande.nom, viande.prix );
				printf("5:%s ................................ Prix: %d Or \n",divers.nom, divers.prix );
				printf("6:%s ................................ Prix: %d Or \n",bouclier.nom, bouclier.prix );
				printf("7:%s ................................ Prix: %d Or \n",epee.nom, epee.prix );
				printf("8:%s ................................ Prix: %d Or \n",nourriture.nom, nourriture.prix );
				printf("9:%s ................................ Prix: %d Or \n",&item1, prix1 );
				printf("10:%s ............................... Prix: %d Or \n",&item2, prix2 );
				
			if (addItem==3)
			{
				printf("Choisissez le nom de l'objet:\n");
				scanf("%s",&item1);
				printf("Choisissez le prix de l'objet:\n");
				scanf("%d", &prix1);
				printf("Le marchand vient d'ajouter '%s' au prix de %d or dans sa boutique\n", &item1, prix1 );
				printf("\n");
				printf("Choisissez le nom de l'objet 2 :\n");
				scanf("%s",&item2);
				printf("Choisissez le prix de l'objet 2:\n");
				scanf("%d", &prix2);
				printf("Le marchand vient d'ajouter '%s' au prix de %d or dans sa boutique\n", &item2, prix2 );
				printf("\n");
				printf("Choisissez le nom de l'objet 3 :\n");
				scanf("%s",&item3);
				printf("Choisissez le prix de l'objet 3 :\n");
				scanf("%d", &prix3);
				printf("Le marchand vient d'ajouter '%s' au prix de %d or dans sa boutique\n", &item3, prix3 );
				printf("\n");
				printf("Voila ce que j'ai a t'offrir:\n");
				printf("1:%s ................................ Prix: %d Or \n",lance1.nom, lance1.prix );
				printf("2:%s ................................ Prix: %d Or \n",filet.nom, filet.prix );
				printf("3:%s ................................ Prix: %d Or \n",massue.nom, massue.prix );
				printf("4:%s ................................ Prix: %d Or \n",viande.nom, viande.prix );
				printf("5:%s ................................ Prix: %d Or \n",divers.nom, divers.prix );
				printf("6:%s ................................ Prix: %d Or \n",bouclier.nom, bouclier.prix );
				printf("7:%s ................................ Prix: %d Or \n",epee.nom, epee.prix );
				printf("8:%s ................................ Prix: %d Or \n",nourriture.nom, nourriture.prix );
				printf("9:%s ................................ Prix: %d Or \n",&item1, prix1 );
				printf("10:%s ............................... Prix: %d Or \n",&item2, prix2 );
				printf("11:%s ............................... Prix: %d Or \n",&item3, prix3 );
			}

		}
				printf("que souhaitez vous faire ?\n");
				printf("Tapez 1 pour afficher votre inventaire..\n");
				printf("Tapez 3 pour faire un achat\n");
				printf("Tapez 4 pour demander au marchand d'ajouter un item\n");
				printf("Tapez 0 pour quittez le shop\n");

				scanf("%d", &choixJoueur);

				if(choixJoueur==3)
		{
			printf("Que souhaitez vous acheter ?\n");
			printf("Tapez le numero correspondant a l'article de votre choix\n");
			scanf("%d",&choixAchat);
			if (choixAchat==1)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n", lance1.nom, lance1.prix );
			}
			else if (choixAchat==2)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n",filet.nom, filet.prix );
			}
			else if (choixAchat==3)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n",massue.nom, massue.prix );
			}
			else if (choixAchat==4)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n",viande.nom, viande.prix );
			}
			else if (choixAchat==5)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n",divers.nom, divers.prix );
			}
			else if (choixAchat==6)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n",bouclier.nom, bouclier.prix );
			}
			else if (choixAchat==7)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n",epee.nom, epee.prix );
			}
			else if (choixAchat==8)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n",nourriture.nom, nourriture.prix );
			}
			else if (choixAchat==9)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n",&item1, prix1 );
			}
			else if (choixAchat==10)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n",&item2, prix2);
			}
			else if (choixAchat==11)
			{
				printf("Vous venez d'acheter '%s' pour %d Or\n",&item3, prix3);
			}

		}
	}

}


//fonction de tri que je n'arrive pas a utiliser...


	/*int tri = strcmp(*item potion, *item shield);
	if (tri == 0)
		printf("Les deux mots sont les memes. \n" );
	else if (tri <0)
		printf("%s < %s \n",item potion,item  shield);
	else 
		printf("%s > %s \n", item potion, item shield); 





---------------------------

		


	*/

		

	return 0;
}

