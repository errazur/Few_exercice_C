#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double D (double a, double b, double c){
       return (double) (b*b)-4*a*c;
}

int main()
{


// equation second degré
    double a;
    double b;
    double c;

        printf("L'equation ax²+bx+c=0 \n");
        printf("Voici l'equation pour resoudre : (b*b)) - 4ac , entrer les valeurs de a , b, c \n");
        scanf("%lf,%lf,%lf",&a,&b,&c);

        if ( D<0 ){
            printf("Il n'y a pas de solution");
        }
        else if (D == 0){
            printf("Il y a une solution : x=-b/(2a)");
        }
        else if (D>0){
            printf("Il y a deux solution : x1=(-b(D/D)/(2a) et x2=(-b(D/D))/(2a)");
        }



/*
 //4- Signe d'une somme

    int a=0;
    int b=0;
    printf("Introduisez deux nombres entiers: ");
    scanf("%i, %i", &a, &b);
    if (a<0 && b<0)
    {
        printf ("Le signe de la somme est negatif \n");
    }
    else if((a<0 && b>0) && (fabs(a)> fabs(b)))
    {
        printf("Le signe de la somme est negatif \n");
    }
    else if((a>0 && b<0) && (fabs(a)> fabs(b)))
    {
        printf("Le signe de la somme est negatif \n");
    }
    else
    {
        printf("Le signe de la somme est positif \n");
    }

*/


/*
int n = 20;
int x=1;

while (x<=n) {
    if (x == 3) {
        printf("Division par zero !");
        x++;
        break;
    }
    double y = (double)1/(x-3);
        printf("%lf\n", y);
        x++;
}
*/




/*
    for(int i = 0; i< 100; i++){
        for(int j = 0; j< 100; j++){
            for(int k = 0; k< 100; k++){
                printf("Bonjour toi %d,%d,%d \n", i,j,k);
            }
        }
    }
*/


/*
    int i = 0;

    while(i<=100000){
        printf("Bonjour! %d\n", i);
        i++;
    }


*/

/*
// signe produit

    int a=0;
    int b=0;
    printf("Introduisez deux nombres entiers:\n");
    scanf("%d, %d", &a, &b);

        if (a<0 && b<0){
            printf("le signe du produit est positif \n");
        }
        else if (a<0 && b>0){
            printf("Le signe du produit est negatif \n");
        }
        else if (a>0 && b<0){
            printf(" Le signe du produit est negatif \n");

        }
        else {
            printf("Le signe du produit es positif \n");
        }
*/

/*
// Maximum
//b
    int a;
    int b;
    int c;
    printf("Introduisez 3 nombres entiers: \n");
    scanf("%i,%i,%i",&a,&b,&c);

    if(a>=b && a>=c){
        printf("Le maximum est %d \n", a);
    }
    else if(b>=a && b>=c){
        printf("Le maximum est %d \n", b);
    }
    else {
        printf("Le maximum est %d \n", c);
    }
*/


/*
//a bis
    int a;
    int b;
    int c;

    int MAX;

    printf("Donner 3 valeurs entieres : \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Les trois nombres sont : A = %d  B = %d  C = %d \n", a, b, c);

    if (a > b){
        MAX = a;
    } else {
        MAX = b;
    }
    if (c > MAX){
        MAX = c;
    }

    printf("La plus grande des valeurs est : %d\n", MAX);
*/


/*
// Maximum
// a
    int a;
    int b;
    int c;
    int MAX;

    printf("Entrer 3 nombres entiers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("les trois nombres sont : A = %d  B = %d  C = %d \n", a, b, c);

    if (a>b && a>c){
        MAX = a;
    }
    if (b>c && b>a){
        MAX = b;
    }
    if(c>a && c>b){
        MAX = c;
    }
    printf("le max est %d \n", MAX);
*/


/*
// Tri 2

// Exercice 1 - Tri et affectation :

    int a;
    int b;
    int c;

    int S;

    printf("Entrer 3 nombres entiers : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Avant le tri : A = %d  B = %d  C = %d \n", a, b, c);

    if (a < b){

    S = a;
    a = b;
    b = S;
}

    if (a < c){

    S = a;
    a = c;
    c = S;
}

    if (b < c){

    S = b;
    b = c;
    c = S;
}
    printf("Apres le tri : A = %d  B = %d  C = %d \n", a, b, c);
*/

/*
// Tri
    int nb1 = 0;
    int nb2 = 0;
    int nb3 = 0;
    printf("Introduisez 3 nombres entiers: \n");
    scanf("%i,%i,%i",&nb1,&nb2,&nb3);
    printf(" Avant le tri : A = %d , B= %d , C= %d \n", nb1,nb2,nb3);

    if(nb1>=nb2 && nb2>=nb3){
        printf("Apres le tri: A = %d B = %d et C = %d \n", nb1, nb2, nb3);
    }
    else if(nb1>=nb3 && nb2>=nb1){
        printf("Apres le tri: A = %d B = %d et C = %d \n", nb2, nb1, nb3);
    }
    else if(nb3>=nb2 && nb2>=nb1){
        printf("Apres le tri: A = %d B = %d et C = %d \n", nb3, nb2, nb1);
    }
    else if(nb2>=nb3 && nb3>=nb1){
        printf("Apres le tri: A = %d B = %d et C = %d \n", nb2, nb3, nb1);
    }
    else if(nb3>=nb1 && nb1>=nb2){
        printf("Apres le tri: A = %d B = %d et C = %d \n", nb3, nb1, nb2);
    }
    else if(nb1>=nb3 && nb3>=nb2){
        printf("Apres le tri: A = %d B = %d et C = %d \n", nb1, nb3, nb2);
    }
*/


    return 0;
}
