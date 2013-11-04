#include <stdio.h>

int main() {
	// output
	FILE* data = fopen("data.txt","w");
	for(int i=1; i<=100; ++i) fprintf(data,"%d\n",i);
	fclose(data);

	// input
	FILE* data = fopen("data.txt","r");
	int number;
	for(int i=1; i<=100; ++i) {
		fscanf(data,"%d",&number);
		printf("%d\n",number);
	}
	getchar();
}