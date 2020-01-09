#include <stdio.h>      
#include <conio.h>
#include <math.h> 
int main()
{
float A, E, l, c, T;
printf("To measure absorbance and transmittance using Beer-Lambert's law \n");
printf("Let's calculate absorbance: \n");
printf("Enter Molar Attenuation Coefficient : \n");
scanf("%f", &E);
printf("Enter Optical Path Length : \n");
scanf("%f", &l);
printf("Enter Concentration of  attenuating species: \n");
scanf("%f", &c);
A = E*l*c ;
printf(" Absorbance for the material is : %f \n", A);
printf("Let's calculate transmittance: \n");
T=pow(10,-A);
printf("Transmittance for the material is : %f \n", T);
}
