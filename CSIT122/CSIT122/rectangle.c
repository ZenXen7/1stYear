#include<stdio.h>

void display(int perimeter, int area){
	
	printf("\nPerimeter = %d", perimeter);
	printf("\nArea = %d", area);
}
int getInt(){
	
	int num;
	printf("Enter an integer value: ");
	scanf("%d", &num);
	
	return num;
}

int compPeri (int lenght, int width){
	
	int p;
	p = 2*lenght + 2*width;
	return p;
}
int compArea (int lenght, int width){
	
	
	return (lenght*width);
}
void repeat(){
	
	int l,w,p,a, ans;
	do{
	l = getInt();
	w = getInt();
	p = compPeri(l,w);
	a = compArea(l,w);

		display(p,a);
		printf("\nDo you want to process another?[1-Yes / 0-No]: ");
		scanf("%d", &ans);
	} while(ans == 1);
	

	
	
}
