#include <stdio.h>
#include <stdlib.h>


float area(float base, float altura);
float perimetro(float a, float b, float c);


int main(){
	
	float areaTotal = 0;
	float base = 0;
	float altura = 0;
	float perimetroT = 0;
	
	
	
	printf("\nBase: ");
	fflush(stdout);
	scanf("%f", &base);

	printf("\nAltura: ");
	fflush(stdout);
	scanf("%f", &altura);
	
	
	float a=10,b=10,c=10;
	
	
	areaTotal = area(base, altura);
	perimetroT = perimetro(a,b,c);
	
	
	printf("Area: %.2f", areaTotal);
	
	printf("\n\nPerimetro: %.2f", perimetroT);
	
	
	return 0;
}


float area(float base, float altura){
	float area = 0;
	
	area = (base * altura) / 2;
	
	return area;
}

float perimetro(float a, float b, float c){
	float perimetroT = 0;
	
	return perimetroT = a + b + c;
}
