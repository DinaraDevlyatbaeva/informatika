#include <stdio.h>

int main(void){
	int n, i, j, k;
	printf("Введите размер массива:\n");
	scanf("%d", &n);
	float Array[n];
	
	//Ввод элементов массива
	printf("Введите эллементы массива (любые числа):\n");
	for(i=0; i<n; i++){
		scanf("%f", &Array[i]);
	} 
	//Сортировка элементов массива
	for (i=n-1; i>=0; i--){
		for (j=0; j<i; j++){
			if (Array[j] > Array[j+1]){
				k = Array[j];
				Array[j] = Array[j+1];
				Array[j+1] = k;
			}
		}
	}
	printf("Эллементы отсортированного массива:\n"); 
	for (i=0; i<n; i++){
        	printf( "%.2f\n", Array[i]);  
	} 
}
