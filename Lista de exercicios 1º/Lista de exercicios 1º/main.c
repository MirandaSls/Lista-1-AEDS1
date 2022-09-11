#include <stdio.h> // para as entradas e saidas
#include <stdbool.h> // para valores logicos
#include <string.h> // para cadeias de caracteres
#include <math.h> // para funcoes matematicas
#include <stdlib.h>
#include <locale.h>


int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();
int ex11();
int ex12();
int ex13();
int ex14();
int ex15();



int main ( )
{
    ex01();
    ex02();
    ex03();
    ex04();
    ex05();
    ex06();
    ex07();
    ex08();
    ex09();
    ex10();
    ex11();
    ex12();
    ex13();
    ex14();
    ex15();
}

int ex01(){ // Ler um valor inteiro do teclado e dizer se é par

    int x = 0;
    bool w = false;
    printf ("\n01.Ler um valor inteiro do teclado e dizer se e par");

    printf ("\nDigite um numero:");
    scanf ("%i",&x);

    w =(x % 2 == 0);

    printf ("%s(%d) ? %d\n","e par",x,w);

    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}

int ex02(){ // Ler um valor inteiro do teclado e dizer se é ímpar

    int x = 0;
    bool w = false;
    printf ("\n02.Ler um valor inteiro do teclado e dizer se e impar");

    printf ("\nDigite um numero:");
    scanf ("%i",&x);

    w =(x % 2 != 0);

    printf ("%s(%d) ? %d\n","e impar",x,w);

    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}

int ex03(){ // ler um valor inteiro do teclado e dizer se ímpar e maior que 100.

    int num = 0;
    bool w = false;
    printf ("\n03.ler um valor inteiro do teclado e dizer se impar e maior que 100");

    printf ("\nDigite um numero:");
    scanf ("%i",&num);

    w = (num % 2 != 0)&&(num > 100);

    printf ("%s(%d) ? %d\n","o numero e impar e maior que 100",num,w);

    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}

int ex04(){ // ler um valor inteiro do teclado e dizer se é par e menor que 100, ou ímpar e maior que 100.

    int num = 0;
    bool w,z = false;
    printf ("\n04.ler um valor inteiro do teclado e dizer se e par e menor que 100, ou impar e maior que 100");

    printf ("\nDigite um numero:");
    scanf ("%i",&num);

    w = (num % 2 != 0)&&(num >= 100);
    z = (num % 2 == 0)&&(num < 100);

    printf ("%s(%d) ? %d\n","o numero e par e menor que 100",num,z);
    printf ("%s(%d) ? %d\n","o numero e impar e maior que 100",num,w);


    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}

int ex05(){ // ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75).


    int num;
    bool w = false;
    printf ("\n05.ler um valor inteiro do teclado e dizer se pertence ao intervalo aberto entre (25:75)");

    printf ("\nDigite um numero:");
    scanf("%d",&num);

    w = (num > 25 && num < 75 && num != 25 && num != 75);

    printf ("O numero (%i) esta entre 25 e 75? %i",num,w);

    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
 }


int ex06(){ // ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75].

    int num;
    bool w = false;
    printf ("\n06.ler um valor inteiro do teclado e dizer se pertence ao intervalo fechado entre [25:75]");

    printf ("\nDigite um numero:");
    scanf("%i",&num);

    w = (num >= 25 && num <= 75);

    printf ("O numero (%i) esta entre 25 e 75? %i",num,w);

    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}

int ex07(){ // ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99].

    int num;
    bool w,z = false;
    printf ("\n07.ler um valor inteiro do teclado e dizer se pertence aos intervalos fechados [15:45] ou [66:99]");

    printf ("\nDigite um numero:");
    scanf("%i",&num);

    w = (num >= 15 && num <= 45);
    z = (num >= 66 && num <= 99);

    printf ("O numero (%i) esta entre 15 e 45? %i",num,w);
    printf ("\nO numero (%i) esta entre 66 e 99? %i",num,z);


    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}


int ex08(){ // ler dois valores inteiros do teclado e dizer se o primeiro é par e o segundo é ímpar.

    int n1,n2 = 0;
    bool w,z = false;
    printf ("\n08.ler dois valores inteiros do teclado e dizer se o primeiro e par e o segundo e impar");

    printf ("\nDigite um numero:");
    scanf ("%i",&n1);
    printf ("Digite outro numero:");
    scanf ("%i",&n2);

    w =(n1 % 2 == 0);
    printf ("O numero (%i) e par? %i",n1,w);

    z =(n2 % 2 != 0);
    printf ("\nO numero (%i) e impar? %i",n2,w);


    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}

int ex09(){ // ler dois valores inteiros do teclado e dizer se o primeiro é par e positivo, e o segundo é ímpar e negativo

    int n1,n2,resp,resp1 = 0;
    bool w,z = false;
    printf ("\n09.ler dois valores inteiros do teclado e dizer se o primeiro e par e positivo, e o segundo e impar e negativo");

    printf ("\nDigite um numero:");
    scanf ("%i",&n1);
    printf ("Digite outro numero:");
    scanf ("%i",&n2);

    resp = n1 % 2;
    resp1 = n2 % 2;

    w = (resp == 0 && n1 > 0);
    z = (resp1 != 0 && n2 < 0);

    printf ("%s(%d) ? %d\n","e par",n1,w);
    printf ("%s(%d) ? %d\n","e impar",n2,z);


    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}

int ex10(){ // ler dois valores reais do teclado e dizer se o primeiro é maior, menor ou igual ao segundo.

    int num1,num2;
    bool w = false;
    printf ("\n10.ler dois valores reais do teclado e dizer se o primeiro e maior, menor ou igual ao segundo");

    printf ("\nDigite um numero: ");
    scanf ("%i", &num1);
    printf ("Digite outro numero: ");
    scanf ("%i", &num2);

    w = (num1 > num2);

    printf ("O numero (%i) e maior que o (%i)? %i\n",num1,num2,w);

    w = (num1 < num2);

    printf ("O numero (%i) e menor que o (%i)? %i\n",num1,num2,w);

    w = (num1 == num2);

    printf ("O numero (%i) e igual que o (%i)? %i\n",num1,num2,w);

    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;


}

int ex11(){ // ler três valores reais do teclado e dizer se o primeiro está entre os outros dois

    float n1,n2,n3;
    bool w = false;
    printf ("\n11.ler tres valores reais do teclado e dizer se o primeiro esta entre os outros dois");

    printf ("\nDigite o primeiro numero: ");
    scanf ("%f", &n1);
    printf ("Digite o segundo numero: ");
    scanf ("%f", &n2);
    printf ("Digite o terceiro numero: ");
    scanf ("%f", &n3);

    w = (n1 > n2 && n1 < n3 && n1 != n2 && n1 != n3);

    printf ("O numero (%f) esta entre o (%f) e (%f)? %i\n",n1,n2,n3,w);

    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}

int ex12(){ // ler três valores reais do teclado e dizer se o primeiro não está entre os outros dois

    int n1,n2,n3;
    bool w = false;
    printf ("\n12.ler tres valores reais do teclado e dizer se o primeiro nao esta entre os outros dois");

    printf ("\nDigite o primeiro numero: ");
    scanf ("%i", &n1);
    printf ("Digite o segundo numero: ");
    scanf ("%i", &n2);
    printf ("Digite o terceiro numero: ");
    scanf ("%i", &n3);

    w = (n2 < n1) && (n1 < n3);

    printf ("O numero (%i) nao esta entre (%i) e (%i)? %i",n1,n2,n3,w);

    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}

int ex13(){ // ler três valores literais (caracteres) do teclado e dizer se o primeiro está entre os outros dois

    char L1,L2,L3;
    int w;
    printf ("\n13.ler tres valores literais (caracteres) do teclado e dizer se o primeiro esta entre os outros dois");

    printf ("\nDigite uma letra: ");
    scanf ("%c", &L1);
    getchar ();
    printf ("Digite uma segunda letra: ");
    scanf ("%c", &L2);
    getchar ();
    printf ("Digite uma terceira letra: ");
    scanf ("%c", &L3);
    getchar ();

    w = L1>L2 && L1<L3 || L1<L2 && L1>L3;
    printf ("O (%c) esta entre (%c) e (%c)? %i",L1,L2,L3,w);

    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;

}

int ex14(){ // ler três valores literais (caracteres) do teclado e dizer se estão em ordem crescente lexicograficamente.

    char letra1,letra2,letra3;
    int w;
    printf ("\n14.ler tres valores literais (caracteres) do teclado e dizer se estao em ordem crescente lexicograficamente");

    printf ("\nDigite uma letra: ");
    scanf ("%c", &letra1);
    getchar ();
    printf ("Digite uma segunda letra: ");
    scanf ("%c", &letra2);
    getchar ();
    printf ("Digite uma terceira letra: ");
    scanf ("%c", &letra3);
    getchar ();

    w = (letra1<letra2 && letra1<letra3 || letra1<letra3 && letra2>letra3);


    printf ("A letra (%c) esta em ordem alfabetica com a letra (%c) e (%c)? %i",letra1,letra2,letra3,w);


    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;

}

int ex15(){ // ler um valor literal (caractere) do teclado e dizer se é uma letra maiúscula.

    char letra1;
    bool w = false;
    printf ("\n15.ler um valor literal (caractere) do teclado e dizer se e uma letra maiuscula");

    printf ("\nDigite uma letra: ");
    scanf ("%c", &letra1);

    w = ('A'<=letra1 && letra1<='Z');

    printf ("A letra (%c) esta em minusculo? %i",letra1,w);

    printf ( "\n\nApertar ENTER para terminar." );
    fflush (stdin);
    getchar ();
    return 0;
}
