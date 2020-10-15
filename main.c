#include <stdio.h>
#include <stdbool.h>
void tri_par_insertion(int t[], int taille);

int main(int argc, char **argv){
		
	int table[10];
	
	printf("**********Entrez 10 valeurs**********\n");
	
	for(int i = 0; i<10; i++){
		printf("Entrez une valeur de tab[%d]: ", i);
		scanf("%d", &table[i]);
	}
	
	tri_par_insertion(table, sizeof(table)/4);
	for(int i = 0; i<sizeof(table)/4; i++){
		printf("la valeur de tab[%d] triees a l'aide du tri_par_insertion: %d\n", i, table[i]);
	}
	return 0;
}

void tri_par_insertion(int t[], int taille){
	
	int i;
	int j;
	int elem;
	
	for(i = 1; i<taille; i++){
		elem = t[i];
		for(j=i; j>0 && t[j-1]>elem; j--){
			t[j]=t[j-1];
		}
		t[j]=elem;		
	}
}
