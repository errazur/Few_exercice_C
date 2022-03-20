#include <stdio.h>
#include <stdlib.h>
#define PI 3.14


// Exercice 1
double aireDisque(double r){
    double A = PI*(r*r);
    return A;
}

double aireDisque2(double r){
    return PI*(r*r);
}

// Exercice 2
double circonfCercle(double r){
    double A = 2*PI*r;
    return A;
}

// Exercice 3
int estPair (int nb){
    int A = nb%2 == 0;
    return A;
}

// Exercice  4
int estimpair (int nb){

    return !estPair(nb);
}

// exercice 5
int versAscii(char c){
    int z = c;
    return z;
}


//exercice 6
char deAscii(int code){
    char z = code;
    return z;
}

//exercice 7
int estMajuscule(char c){
    int r5 = c > 64 && c < 91;
    return r5;
}

// exercice 8
char majuscule (char minuscule){
    char r6 = minuscule - 32;
    return r6;
}

//exercice 9
int deCharverInt (char n){
    char r7 = n - 48;
    return r7;
}

//exercice 10
double inverse (int n){
    return (double)1/n;
}

//exercice 11
double moyenne (int a, int b, int c){
    return (a+b+c)/3;
}

//exercice 12
double carre (double a){
    return (double)a*a;
}


int main()
{

//   printf("Le carre de 2 est : %lf\n", carre(5));


  //  printf("la moyenne de 1 , 2 , 3 est : %lf\n", moyenne(1,2,3));

 //   printf("le chiffre inverse de n : %f\n", inverse(5));

  //  printf("le chiffre depuis la minuscule n : %d\n", deCharverInt('5'));

 //  printf("la majuscule depuis la minuscule n : %c\n", majuscule('n'));

        //int r = 5;

   //printf("exercise 1 rayon 5 : %lf \n", aireDisque(5));

    //printf("exercice 2 circonf : %lf \n", circonfCercle(5));


    //printf("%d \n", estPair(5));


    //printf("%d \n", estimpair(5));

    //char f1;
        //printf("Veuillez entrer une lettre: \n");
       // scanf(" %c", &f1);
       // printf("Le code Ascii de votre lettre est: %d\n", versAscii(f1));


   //     printf("La  lettre correspodant a 65 : %c\n", deAscii(65));


     //   printf("Exercice 7 : si 1 le caractere est une Majuscule sinon 0 : %d\n", estMajuscule('A'));

    return 0;
}
