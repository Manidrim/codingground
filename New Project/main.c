#include <stdio.h>

typedef enum { 
    non = 0,
    oui = 1
}Bool;

int main()
{
	int nombreTache = 0;
	int tacheAnt = 0;
	Bool Boolean = oui;

    /*Demander à l'utilisateur le nombre de tâche à faire*/
	printf("Quel est le nombre de de tâhce à faire ?");
	scanf("%d",nombreTache);
    /*Demander quelle est la tâche qui sera antérieur à celle-ci*/
    int i=0;
	for(i=0; i<nombreTache; i++){
	    while(Boolean){
    		printf("Quel est la tâche antérieur à celle-ci?");
    		scanf("%d", tacheAnt);
            printf("La tache %d a-t-elle une autre tache antérieur ? 1-Oui/ 2-Non");
            scanf("%d", Boolean);
	    }
	}

    /*Demander le temps que prendra la tache à faire : à voir si on donne la même unité de temps à toutes les tâches*/
    return 0;
}

