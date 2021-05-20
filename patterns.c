#include<stdio.h>
#include<cs50.h>
void pyramid_f(int);
void pyramid_s(int);

int main(void){
	int ch = get_int("Enter type of pattern (1 or 2) ");
	if (ch == 1){
		int row = get_int("Number of rows");
		pyramid_f(row);
	}
	else{
		if(ch == 2){
			int row = get_int("Number of rows");
			pyramid_s(row);
			}
		}
	return 0;
}

void pyramid_f(int n){
	for(int i=n;i>=1;i--){
		for(int j=i;j>=1;j--){
			printf("#");
		}
		printf("\n");
	}
}

void pyramid_s(int n){
	for(int i=1;i<=n;i++){
		for(int k=n-i;k>0;k--){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("#");
		}
		printf("\n");
	}
}
