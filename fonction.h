//
// Created by marou on 16/11/2022.
//

#ifndef MAIN_C_FONCTION_H
#define MAIN_C_FONCTION_H
#define ALPHABET_SIZE 26

typedef struct nom {
    char mot;
    char genre ;
    char nombre;
    int nb_flechie;
}nom;

typedef  struct verbe {
    char mot;
    char temps;
    char genre;
    char nombre;
    int nb_flechie;
}verbe;

typedef struct adjectif{
    char mot;
    char genre;
    char nombre;
    int nb_flechie;
}adjectif;

typedef struct adverbe{
    char mot;
    int nb_flechie;
}adverbe;

typedef struct s_letter_node
{
    char letter;
    struct s_letter_node * sons [ALPHABET_SIZE];
} t_letter_node, *p_letter_node ;

typedef struct s_node
{
    int value;
    struct s_node *left;
    struct s_node *right;
} t_node, *p_node;


typedef struct s_tree
{
    p_node root;
} t_tree ;

t_tree CreateTreeFromChar(char);
t_letter_node Load_Tree();
t_tree CreateEmptyTree();
void Genrateur_de_phrase(int);
void ajouter_mot(t_letter_node*, char*);
t_letter_node creer_noeud(char);
char Choix_Mot(t_letter_node);
char Conjugaison(char mot_a_conjuguer, char type, char genre, char nombre);

#endif //MAIN_C_FONCTION_H
