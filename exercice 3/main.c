#include <stdio.h>
#include <stdlib.h>

int main()
{

/*
// Age chat
    char age;
    int ageM;
    int ageA;

    printf("Si l'age de votre chat est en mois taper : m ,sinon si il est en annee taper : a \n");
    scanf("%c",&age);

        if (age == 'm'){
            printf(" Combien de mois a il ? ");
            scanf("%d",&ageM);
                switch(ageM){
                case(1) :
                    printf("Il a 6 mois en age humain ");
                    break;
                case(2) :
                    printf("Il a entre 2 et 5 ans en age humain");
                    break;
                case(3) :
                    printf("Il a entre 2 et 5 ans en age humain");
                    break;
                case (4):
                    printf("Il a entre 6 et 8 ans en age humain");
                    break;
                case (6):
                    printf("Il a 10 ans en age humain");
                    break;
                case (7):
                    printf("Il a 12 ans en age humain");
                    break;
                case (12):
                    printf("Il a entre 15 et 16 ans en age humain");
                    break;
                case (18):
                    printf("Il a entre 20 et 21 ans en age humain");
                    break;

                }
        }
            if(age == 'a'){
                printf("Quel age a le chat en annee ? ");
                scanf("%d",&ageA);
                switch(ageA){
            case(2) :
                printf("Il aurai 24 ans en age humain");
                break;
            case(3) :
                printf("Il aurai 28 ans en age humain");
                break;
            case(4) :
                printf("Il aurai 32 ans en age humain");
                break;
            case(5) :
                printf("Il aurai 36 ans en age humain");
                break;
            case(6) :
                printf("Il aurai 40 ans en age humain");
                break;
            case(7) :
                printf("Il aurai 44 ans en age humain");
                break;
            case(8) :
                printf("Il aurai 48 ans en age humain");
                break;
            case(9) :
                printf("Il aurai 52 ans en age humain");
                break;
            case(10) :
                printf("Il aurai 56 ans en age humain");
                break;
            case(11) :
                printf("Il aurai 61 ans en age humain");
                break;
            case(12) :
                printf("Il aurai 64 ans en age humain");
                break;
            case(13) :
                printf("Il aurai 68 ans en age humain");
                break;
            case(14) :
                printf("Il aurai 72 ans en age humain");
                break;
            case(15) :
                printf("Il aurai 76 ans en age humain");
                break;
            case(16) :
                printf("Il aurai 80 ans en age humain");
                break;
            case(17) :
                printf("Il aurai 84 ans en age humain");
                break;
            case(18) :
                printf("Il aurai 88 ans en age humain");
                break;
            case(19) :
                printf("Il aurai 92 ans en age humain");
                break;
            case(20) :
                printf("Il aurai 96 ans en age humain");
                break;
                }


            }

*/


/*
// Age chien

 int ageGrosChien (int ageChien){
    int ageChienMoyen (int ageChien){
     De 1 an à 2 c'est +9.  De 2 ans a 3 et + c'est +6
    if(ageChien <= 2){
        return 18 + ((ageChien-1) * 9);
    } else {
        return 33 + ((ageChien-3) * 6);
}

    }
 }
    int age;
    int poids;

    printf(" votre chien pèse combien ? ");
    scanf(" %d", &poids);

    if (poids <15){
        printf(" quel age humain en chien voulez vous ? ");
        scanf(" %d", &age);
        switch (age){
            case (1) :
                printf("l'age du chien est de 20 ans");
            break;
            case (2) :
                printf("l'age du chien est de 28 ans");
            break;
            case (3) :
                printf("l'age du chien est de 32 ans");
                break;
            case (4) :
                printf("l'age du chien est de 36 ans");
                break;
            case (5) :
                printf("l'age du chien est de 40 ans");
                break;
            case (6) :
                printf("l'age du chien est de 44 ans");
                break;
            case (7) :
                printf("l'age du chien est de 48 ans");
                break;
            case (8) :
                printf("l'age du chien est de 52 ans");
                break;
            case (9) :
                printf("l'age du chien est de 56 ans");
                break;
            case (10) :
                printf("l'age du chien est de 60 ans");
            break;
            case (11) :
                printf("l'age du chien est de 64 ans");
            break;
            case (12) :
                printf("l'age du chien est de 68 ans");
            break;
            case (13) :
                printf("l'age du chien est de 72 ans");
            break;
            case (14) :
                printf("l'age du chien est de 76 ans");
            break;
            case (15) :
                printf("l'age du chien est de 80 ans");
            break;
            case (16) :
                printf("l'age du chien est de 84 ans");
            break;
            case (17) :
                printf("l'age du chien est de 88 ans");
            break;
            case (18) :
                printf("l'age du chien est de 94 ans");
            break;
        }
    }
           printf("quel age humain en chien voulez vous ? ");
            scanf(" %d", &age);
            switch (age){
            case (1) :
                printf("l'age du chien est de 18 ans");
            break;
            case (2) :
                printf("l'age du chien est de 27 ans");
            break;
            case (3) :
                printf("l'age du chien est de 33 ans");
            break;
            case (4) :
                printf("l'age du chien est de 39 ans");
            break;
            case (5) :
                printf("l'age du chien est de 45 ans");
            break;
            case (6) :
                printf("l'age du chien est de 51 ans");
            break;
            case (7) :
                printf("l'age du chien est de 57 ans");
            break;
                printf("l'age du chien est de 63 ans");
            break;
            case (9) :
                printf("l'age du chien est de 69 ans");
            break;
            case (10) :
                printf("l'age du chien est de 75 ans");
            break;
            case (11) :
                printf("l'age du chien est de 81 ans");
            break;
            case (12) :
                printf("l'age du chien est de 87 ans");
            break;
            case (13) :
                printf("l'age du chien est de 93 ans");
            break;
            case (14) :
                printf("l'age du chien est de 100 ans");
            break;
            case (15) :
                printf("l'age du chien est depasse");
            break;
            case (16) :
                printf("l'age du chien est depasse");
            break;
            case (17) :
                printf("l'age du chien est depasse");
            break;
            case (18) :
                printf("l'age du chien est depasse");
            break;
            }
    }
            if (poids >45){
              printf("quel age humain en chien voulez vous ? ");
            scanf(" %d", &age);
            switch (age){
            case (1) :
                printf("l'age du chien est de 16 ans");
            break;
            case (2) :
                printf("l'age du chien est de 22 ans");
            break;
            case (3) :
                printf("l'age du chien est de 31 ans");
            break;
            case (4) :
                printf("l'age du chien est de 4 ans");
            break;
            case (5) :
                printf("l'age du chien est de 49 ans");
            break;
            case (6) :
                printf("l'age du chien est de 58 ans");
            break;
            case (7) :
                printf("l'age du chien est de 67 ans");
            break;
            case (8) :
                printf("l'age du chien est de 76 ans");
            break;
            case (9) :
                printf("l'age du chien est de 85 ans");
            break;
            case (10) :
                printf("l'age du chien est de 96 ans");
            break;
            case (11) :
                printf("l'age du chien est de 105 ans");
            break;
            case (12) :
                printf("l'age du chien est depasse");
            break;
            case (13) :
                printf("l'age du chien est depasse");
            break;
            case (14) :
                printf("l'age du chien est depasse");
            break;
            case (15) :
                printf("l'age du chien est depasse");
            break;
            case (16) :
                printf("l'age du chien est depasse");
            break;
            case (17) :
                printf("l'age du chien est depasse");
            break;
            case (18) :
                printf("l'age du chien est depasse");
            break;
        }
*/
 //   }

// Exercice 4 - Annee bissextile :
 //   int annee;
 //   printf("Entrer une annee : \n");
  //  scanf("%d", &annee);

 //   if (annee%4 == 0 && annee %100 != 0 || annee %400 == 0 ){
  //      printf("Annee %d est bissextile \n", annee);
  //  } else {
  //      printf("Annee %d est pas bissextile \n", annee);
  //  }

//Année bissextille
 //   int A;
 //   printf("Donner une annee : ");
 //   scanf(" %d", &A);

 //   if (A%4!=0){
   //         printf("l'annee %d est pas bissextile \n", A);
  //  }
  //  else if (A%4 == 0 && A%100!=0 ) {
  //      printf("L'annee %d est  bissextille \n", A);
  //  }
  //  else if (A%4 == 0 && A%100 == 0 && A%400!=0){
  //      printf(" L'annee %d est pas bissextille \n", A);
  //  }
  //  else if (A%4==0 && A%100==0 && A%400==0){
 //       printf("L'annee %d est bissextille \n", A);
 //   }

// a%4 == 0 ça veut dire que a est divisible par 4

// a%4!=0 ça veut dire que a n'est pas divisible par 4

// Parité
  //  int nb;
 //   printf("Entrer un chiffre : \n");
 //   scanf("%d", &nb);

 //   if (nb %2){
 //       printf("Le chiffre %d est impair \n", nb);
 //  }
 //  else {
 //      printf("Le chiffre %d est pair \n", nb);
 //  }

// Mentions
 //   int moyenne;
  //  printf("Quel est ta moyenne : ");
  //  scanf(" %d", &moyenne);
  //  if (moyenne <10){
 //       printf(" Tu es recale \n");
  //  }

  //  else if (moyenne >9 && moyenne <12){
  //      printf(" Mention passable \n");
  //  }

  //  else if (moyenne >13 && moyenne <14){
  //      printf(" Mention assez bien \n");
  //  }

   // else if (moyenne >13 && moyenne <16){
  //      printf("Mention bien \n");
  //  }

  //  else if (moyenne >15){
   //     printf("Mention très bien \ n");
  //  }


// Majeur
  // int age;
  // printf(" Quel age a tu : ");
  // scanf(" %d", &age);
 //  if (age < 18){
 //   printf("Tu ne peux pas accéder au site");
//}
  // else if (age > 17){
  //  printf("Tu peux entrer sur mon site");
  // }

    return 0;
}
