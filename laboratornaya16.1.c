#include <stdio.h>

int main(void){
	int n, i, j, k, u; 
	float min3, max4;
	printf("Введите размер массива (от 1 до 200):\n");
	scanf("%d", &n);
	float Array[200], Array2[200];
	
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
	
	//Копирование элементов массива, исключая повторяющиеся элементы
	u=0;
	for (i=0; i<n; i++){
		if(Array[i]!=Array[i+1]){
			Array2[u]=Array[i];
			u++;
			}
		}
	printf("Эллементы скопированного массива без повторяющихся элементов:\n"); 
	for (i=0; i<u; i++){
			printf( "%.2f\n", Array2[i]);  
	} 
	
	//Вывод 3-его минимума и 4-ого максимума массива
	min3=Array2[2];
	max4=Array2[u-4];
	printf("Третий минимум массива: %.2f\n", min3);
	printf("Четвертый максимум массива: %.2f\n", max4);
	return 0;
}		
