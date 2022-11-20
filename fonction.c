//
// Created by marou on 16/11/2022.
//

#include "fonction.h"
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

//Créer un arbre
t_tree CreateEmptyTree(){
    t_tree t;
    t.root = NULL;
    return t;
}

/////////

//créer un noeud

t_letter_node creer_noeud(char caractere){
    t_letter_node node;
    node.letter = caractere;
    for (int i = 0; i <= ALPHABET_SIZE; i++)
        node.sons[i] = NULL;
    return node;
}

//ajouter un mot dans l'arbre

void ajouter_mot(t_letter_node* node, char* forme_base){
    int i = 0;
    while (forme_base[i] != 0){
        if (node -> sons[forme_base[i]] == NULL)
            *node = creer_noeud(forme_base[i]);
        else
            node = node -> sons[forme_base[i]];
        i++;
    }
}

//Charge l'arbre avec les mots non fléchies

t_letter_node Load_Tree() {
    char mot1[50], mot2[50], ligne[100];
    FILE *f;
    t_letter_node node1;
    f = fopen("test.txt", "r");
    while (! feof(f)){
        fgets(ligne, 100, f);
        fscanf(f, "%s %s", mot1, mot2 );
        node1 = creer_noeud(mot2);
        ajouter_mot(&node1, &mot2);
        return node1;
    }

}

// choisis les mots aléatoirement dans l'arbre
char Choix_Mot(t_letter_node tree){
    char random;
    random = 'a' + (rand() % 26);

    tree = Load_Tree();
    return tree.letter;
}
///////////

//Génère les phrases types à partir des mots choisis àléatoirement

void Generateur_de_phrase(int choice){
    char nom1[50] = "voiture", nom2[50]="avion", adj[50]="beau", verb1[50] = "jouer", verb2[50] = "chanter";
    if(choice==1){
        
        printf(" %s %s %s %s", nom1, adj, verb1, nom2);
    }
    if(choice==2){

        printf("%s qui %s %s %s %s",nom1,verb1,verb2,nom2,adj);
    }
    if(choice==3){

        printf("%s %s", nom1, verb1);
    }
}

//conjugue les mots dans leurs forme fléchie

char Conjugaison(char mot_a_conjuguer, char type, char genre, char nombre){
    char forme_flechie[50];
    if(type == *"Ver"){
        if(nombre == *"SG"){
            // ajouer_mot() ;
        }
        if(nombre == *"PL"){
            //ajouter_mot();
        }
    }
    if(type == *"Nom"){
        if(nombre == *"SG"){
            if(genre == *"Mas"){
                //ajouter_mot();
            }
            if(genre == *"Fem"){
                //ajouter_mot();
            }

        }
        if(nombre == *"PL"){
            if(genre == *"Mas"){
                //ajouter_mot();
            }
            if(genre == *"Fem"){
                //ajouter_mot();
            }

        }

    }
    if(type == *"Adj"){
        if(nombre == *"SG"){
            if(genre == *"Mas"){
                //ajouter_mot();
            }
            if(genre == *"Fem"){
                //ajouter_mot();
            }

        }
        if(nombre == *"PL"){
            if(genre == *"Mas"){
                //ajouter_mot();
            }
            if(genre == *"Fem"){
                //ajouter_mot();
            }

        }

    }
    return forme_flechie;
}







