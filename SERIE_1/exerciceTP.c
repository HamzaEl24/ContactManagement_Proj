#include <stdio.h>


void Saisie (int tab[],int n){
    int i;
    
    for (i=0;i<n;i++){
        printf("Veuillez saisir l'element %d : ",i+1);
        scanf("%d",&tab[i]);
    }
}
void afficher (int tab[],int n){
    int i ;
    printf("Les elements du tableau sont : ");
    for (i=0;i<n;i++){
        printf("%d\t",tab[i]);
    }
    printf("\n");
}

float moyenne(int tab[],int n){
    int i;
    float moy ,som=0 ;
     
     for(i=0;i<n;i++){
        som = som + tab[i];
     }
     moy = som/n;
     return moy;
}
int maxx(int tab[]){
    int max;
    max=tab[0];
    for(int i=0;i<20;i++){
        if (max<tab[i])
        {
            max=tab[i];

        }
       
            
    }
    
    
    return max;
}
int Ajoutpos(int tab[],int n){
    int pos,valeur;
    printf("entrer la valeur que vous voulez ajoute : ");
    scanf("%d",&valeur);
    printf("entrer la postion que vous voulez ajoute : ");
    scanf("%d",&pos);
    if(pos>0 && pos<n ){

    
        for(int i=n;i>pos;i--){
            {

        }
            
    }
    tab[pos]=valeur;
    
    }
}

int main(){
    int tab[20],tb1[20] ,max,n;
    printf("donner n :");
    scanf ("%d",&n);
    Saisie(tab,n);
    afficher(tab,5);
    max=maxx(tab);
    printf("\nle max:%d",max);
    
        
    
    
    
    printf("apres suppression \n");
    afficher(tb1,5);
    //printf("la moyenne des elts du tableau est :%f",(float)moyenne(tab,5));
    
return 0;
}
