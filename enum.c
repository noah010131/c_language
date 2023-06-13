#include <string.h>
#include <stdio.h>
#include <stdlib.h>


typedef enum saison {printemps, été, automne, hiver} Saison;

int main(void)
{

        Saison ss;
        char* activité;
        char* str;
        
        activité = (char*)malloc(50);
        str = (char*)malloc(15);
        
        while(1)
        {
        
        printf("insérer votre saison préférée :");
        scanf("%s", str);

        if (strcmp(str, "printemps") == 0) {ss = printemps; break;}
        if (strcmp(str, "été") == 0) {ss = été; break;}
        if (strcmp(str, "automne") == 0) {ss = automne; break;}
        if (strcmp(str, "hiver") == 0) {ss = hiver; break;}
        
        printf("recommencer\n");
        
        }
        
        switch(ss)
        {

        case printemps : 
        activité ="faire pic-nic au bois de Vincennes"; break;
        
        case été : 
        activité = "rendre à la plage de Nice"; break;
        
        case automne : 
        activité ="promenader au quartier historique"; break;
        
        case hiver : 
        activité ="visiter aux Alpes, faire du ski"; break;

        }

        printf("%s est votre saison préférée.\n", str);
        printf("Je vous conseille de %s.\n", activité);

        return 0;

}
