#include <stdio.h>
#include <math.h>


int addition(int a , int b ){
    return a+b;
}
int soustraction(int a , int b ){
    return a-b;
}
int multiplication(int a , int b ){
    return a*b;
}
int division(int a , int b ){
    if (b!=0){
        return a/b;
    }
    else{
        printf("erreur de diviser");
    }
    
    return 0;
}
int carre(int a ){
    return a*a;
}
int racinecarre(int a){
    if (a>0){
        sqrt(a);        
    }
    else{
        printf("erreur");
    }
    return 0;
}

int max(){

    int nTab[100];
    int number , i ;
    int m ;


    printf("Entrer le nombre des elements : ");
    scanf("%d",&number);

    printf("Entrer les elements : { \n",number);

    for (i = 0 ; i < number ; i++){
        scanf("%d",&nTab[i]);
    }
    for (int i = 0; i < number ; i++){
        if (nTab[0] < nTab[i]){
            nTab[0] = nTab[i];
        }
        else{
        }
        
    }
    printf("Le Max de Ce Tableaux est :%d\n",nTab[0]);
    
    return 0;
    
}

int min(){

    int nTab[100];
    int number , i ;
    int m ;


    printf("Entrer le nombre des elements : ");
    scanf("%d",&number);

    printf("Entrer les elements : { \n",number);

    for (i = 0 ; i < number ; i++){
        scanf("%d",&nTab[i]);
    }
    for (int i = 0; i > number ; i++){
        if (nTab[0] < nTab[i]){
            nTab[0] = nTab[i];
        }
        else{
        }
        
    }
    printf("Le Min de Ce Tableaux est :%d\n",nTab[0]);
    return 0;
}

int moyenne(){
    int nTab[100];
    int number , i ;
    int m ;


    printf("Entrer le nombre des elements : ");
    scanf("%d",&number);

    printf("Entrer les elements : { \n",number);

    for (i = 0 ; i < number ; i++){
        scanf("%d",&nTab[i]);
    }
    for (int i = 0; i < number ; i++){
        if (nTab[0] < nTab[i]){
            int res = nTab[0] + nTab[i];
        }
        else{
        }
        
    }
    printf("Le Moyenne de Ce Tableaux est :%d\n",nTab[0]/number);
    return 0;
}

int MenuTableaux(){

    int choixM;
    printf("*************************Choisissez une autre operation***************************************\n");
    printf("1. Le Max : ");
    printf("\n2. Le Min : ");
    printf("\n3. Le Moyenne : \n");
    printf("le Choix : ");
    scanf("%d",&choixM);


    switch (choixM){
    case 1:
        printf("%d\n",max());
        break;
    case 2:
        printf("%d\n",min());
        break;
    case 3:
        printf("%d\n",moyenne());
        break;
    }

    return 0;
}

int Tableaux(){

    MenuTableaux();

    return 0;
}

void menu(){
    int menu;
    int n , n2;

    do{

        printf("************************************\n");
        printf("Entrer la valeur de a :");
        scanf("%d",&n);
        printf("Entrer la valeur de b :");
        scanf("%d",&n2);
        
        printf("*************************************\n");
        printf("Le Menu : \n");
        printf("Choisissez une operation :");
        printf("\n1. Addition:");
        printf("\n2. Soustraction :");
        printf("\n3. Multiplication :");
        printf("\n4. Division :");
        printf("\n5. Carre :");
        printf("\n6. Racine Carre :");
        printf("\n7. Tableaux :");
        printf("\n8. Quitter :\n");
        printf("le Choix : ");
        scanf("%d",&menu);


        

        switch (menu){
        case 1:
            printf("%d\n",addition(n,n2));
            break;
        case 2:
            printf("%d\n",soustraction(n,n2));
            break;
        case 3:
            printf("%d\n",multiplication(n,n2));
            break;
        case 4:
            printf("%d\n",division(n,n2));
            break;
        case 5:
            printf("%d\n",carre(n));
            break;
        case 6:
            printf("%d\n",racinecarre(n));
            break;
        case 7:
            printf("%d\n",Tableaux());
            break;    
        case 8:
            printf("coa!!!!!!!!!!!!!!");
            break;                            
       
        }
        
    } while (menu !=7);
    
}

int main(){
    
    
    menu();
    
    return 0;
}
