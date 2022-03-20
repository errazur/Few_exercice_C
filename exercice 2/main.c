#include <stdio.h>
#include <stdlib.h>

//exercice 13
    double moyenneCarre (int a, int b, int c){
    return (double)(a*a + b*b + c*c)/3;
}
// b
    int carreEntier (int a)
{
    return aa;
}

// exercice 14
    double carreMoyenne (int a, int b, int c){
    return (double)(a+b+c)/3*(a+b+c)/3;
}
//b


//exercice 15
        char minuscule (char majuscule){
        char A = majuscule + 32;
        return A;
}

//exercice 16
int estVoyelle(char c){
    char S = (c=97) || (c=101) || (c=105) || (c=111) || (c=117) || (c=121);
    return S;
}

//exercice 17
int estConsonne (char c){
    return !estVoyelle;
}

//exercice 18
int estConsonneMajuscule (char c){
    char S = (c > 65 && c < 69) || (c >69 && c < 73) || (c > 69 && c < 79) || (c > 79 && c < 85) || (c > 85 && c < 89) || (c = 90);
    return S;
}

int estConsonneMaj (char c){
    return !('A') || ('E') || ('I') || ('O') || ('U') || ('Y');
}

// exercice 19
int estVoyelleMajuscule (char c){
    char S = (c=65) || (c=69) || (c=73) || (c=79) || (c=85) || (c=89);
    return S;
}

// exercice 20
int oppose (int n){
    int S= -n;
    return S;
}

//exercice 21
int abs (int n){
    if (n < 0)
    {
        return (-n);
    }
    else
    {
         return n;
    }
}

char inverseCasse (char c){


}

int main()
{



   // printf (" l'opposé de -3 est : %d\n", abs(-3));

// - nouveau ne moins 1 an
  //  - nourisson : entre 1 an de 2 ans
//    - petite enfance: 2 ans à 6 ans
//    - enfance de 6 ans à 12 ans
//    - adolescence de 12 ans à 18 ans
//    - au dela: adulte
  //  int age;
  //  printf("Donner un age : ");
  //  scanf(" %d", &age);

  //  if(age < 1){
 //   printf("tu es un nouveau nee");
  //  }
//   else if (age >1 && age < 2){
  //    printf(" tu es un nourisson");
  //  }
   //    else if (age > 2 && age < 6){
   //         printf("Tu es en petite enfance");
   // }
  //  else if (age > 6 && age < 12){
  //      printf("Tu es en enfance");
 //   }
  //  else if (age >12 && age < 18){
 //       printf ("Tu es en adolescence");
 //   }
  //  else if (age >18){
  //      printf ("Tu es un adule");
  //  }

 //   printf (" l'opposé de 3 est : %d\n", oppose(3));

 //   printf ("Si C est une consonne majuscule = 1 : %d\n", estConsonneMaj('C'));

  //  printf ("si A est une voyelle majuscule = 1 : %d\n", estVoyelleMajuscule('A'));

 // printf(" si C est une consonne majuscule  = 1 : %d\n", estConsonneMajuscule('C'));

  // printf(" si c est une consonne = 1 : %d\n", estConsonne('c'));

   // printf("si c est une voyelle = 1 : %d\n", estVoyelle('c'));

 // printf("la majuscule depuis la minuscule P est : %c\n", minuscule('P'));



    //  printf ("Le carre de la moyenne de 1 2 3 est : %lf\n", carreMoyenne(1,2,3));



  //  printf (" La moyenne au carre de 1 2 3 est : %lf\n", moyenneCarre(1,2,3));

    return 0;
}
