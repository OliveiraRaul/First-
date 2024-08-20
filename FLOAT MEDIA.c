/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h> 

int main(){
float nota1, nota2, nota3, media;

printf("digite sua nota1:" );
scanf("%f",&nota1);

printf("digite sua nota2:" );
scanf("%f",&nota2);

printf("digite sua nota3:" );
scanf("%f",&nota3);

media=(nota1+nota2+nota3)/3;
printf("sua media eh:%f",media);
return 0;
}