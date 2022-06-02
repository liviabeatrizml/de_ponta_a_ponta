#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "numerosAleatorios.cpp"

int* lerDados(int);
void gerarNumerosAleatorios(int);
void mostrarValores(int*,int);

void quicksort(int*, int, int);
void bubbleSort(int*, int);
void mergeSort(int *, int, int,int);
void insertionSort(int *, int);
void selectionSort(int *, int);
void shellSort(int*, int);
void combSort(int*, int);
void heapify(int x[], int n, int i);
void heapSort(int *x, int n);

void merge(int *,int, int , int,int );
void swap(int *a, int *b);

float tempo(clock_t tempo);

/*
    O algoritmo apresentado no main está ordenando elementos com a quantidade expressa no vetor v(vSize), com valores incrementados em vIncrement.
*/
int main()
{
    int vSize = 100;
    int vIncrement = 100; 
    int tentativa = 5; 
    clock_t dQ[tentativa], dB[tentativa], dM[tentativa], dI[tentativa], dSe[tentativa], dSh[tentativa], dC[tentativa], dH[tentativa];
    int *v = (int*)malloc(vSize*sizeof(int));
    for(int i=0; i<vSize; i++){
        v[i] = vIncrement*(i+1);
    }
    for(int j=0; j<vSize; j++){
        gerarNumerosAleatorios(v[j]);
        int *x = (int*)malloc(v[j]*sizeof(int));
        for(int i=0; i<tentativa; i++){

            //BubbleSort
            x = lerDados(v[j]);
            dB[i] = clock();
            bubbleSort(x, v[j]);
            dB[i] = clock() - dB[i];
    
            //QuickSort
            x = lerDados(v[j]);
            dQ[i] = clock();
            quicksort(x, 0, v[j]);
            dQ[i] = clock() - dQ[i];

            //MergeSort
            x = lerDados(v[j]);
            dM[i] = clock();
            mergeSort(x, 0, v[j], v[j]);
            dM[i] = clock() - dM[i];

            // Insertion Sort
            x = lerDados(v[j]);
            dI[i] = clock();
            insertionSort(x, v[j]);
            dI[i] = clock() - dI[i];

            // Selection Sort
            x = lerDados(v[j]);
            dSe[i] = clock();
            selectionSort(x, v[j]);
            dSe[i] = clock() - dSe[i];

            // Shell Sort
            x = lerDados(v[j]);
            dSh[i] = clock();
            shellSort(x, v[j]);
            dSh[i] = clock() - dSh[i];

            // Comb Sort
            x = lerDados(v[j]);
            dC[i] = clock();
            combSort(x, v[j]);
            dC[i] = clock() - dC[i];

            // Heap Sort
            x = lerDados(v[j]);
            dH[i] = clock();
            heapSort(x, v[j]);
            dH[i] = clock() - dH[i];

        }
        clock_t sB=dB[0]/tentativa;
        clock_t sQ=dQ[0]/tentativa;
        clock_t sM=dM[0]/tentativa; 
        clock_t sI=dI[0]/tentativa;
        clock_t sSe=dSe[0]/tentativa;
        clock_t sSh=dSh[0]/tentativa;
        clock_t sC=dC[0]/tentativa;
        clock_t sH=dH[0]/tentativa;

        for (int i = 1; i < tentativa; i++){
            sB += dB[i]/tentativa;
            sQ += dQ[i]/tentativa;
            sM += dM[i]/tentativa;
            sI += dI[i]/tentativa;
            sSe += dSe[i]/tentativa;
            sSh += dSh[i]/tentativa;
            sC += dC[i]/tentativa;
            sH += dH[i]/tentativa;
        }

        FILE *f = fopen("tempos.txt", "a");
        fprintf(f, "%d\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n", v[j], tempo(sB), tempo(sQ), tempo(sM), tempo(sI), tempo(sSe), tempo(sSh), tempo(sC), tempo(sH));
        fclose(f);
    }
}

int* lerDados(int t){
    FILE *f = fopen("numerosAleatorios.txt", "r");
    int* res = (int*)malloc(t*sizeof(int));
    int aux = 0;
    while(!feof(f)){
        fscanf(f, "%d", &res[aux++]);
    }
    return res;
}

void gerarNumerosAleatorios(int t){
    int dispersao = 100;
    srand(100);
    int* res = numerosAleatorios(t, dispersao);
    escreverEmArquivo(res, t);
}

void mostrarValores(int *x, int t){
    for (int i = 0; i < t; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }   
}

void bubbleSort(int *x, int n){ 
    if (n < 1)return; 
    for (int i=0; i<n; i++){
        if (x[i] > x[i+1]){
            swap(&x[i], &x[i+1]);  
        }
    }
    bubbleSort(x, n-1); 
}

void quicksort(int *x, int ini, int fim){
	int i, j, pivo, aux;
	i = ini;
	j = fim-1;
	pivo = x[(ini + fim) / 2];
	while(i <= j){
		while(x[i] < pivo && i < fim){
			i++;
		}
		while(x[j] > pivo && j > ini){
			j--;
		}
		if(i <= j){
			aux = x[i];
			x[i] = x[j];
			x[j] = aux;
			i++;
			j--;
		}
	}
	if(j > ini)
		quicksort(x, ini, j+1);
	if(i < fim)
		quicksort(x, i, fim);
}

void mergeSort(int *x, int inf, int sup, int t)
{
    int meio;
    if (inf < sup){
        meio=(inf+sup)/2;
        mergeSort(x,inf,meio,t);
        mergeSort(x,meio+1,sup,t);
        merge(x,inf,sup,meio, t);
    }
}

void insertionSort(int *x, int tamanho){
    for (int i = 1; i < tamanho; i++) {
		int aux = x[i];
		int j = i - 1;
		
		while ((j >= 0) && (x[j] > aux)) {
			swap(&x[j + 1], &x[j]);
			j--;
		}
		
        swap(&x[j + 1], &aux);
	}
}

void selectionSort(int *x, int tamanho){
    for(int i = 0; i < tamanho-1; i++){//itera sobre o vetor
        int minimo = i; //primeiro elemento não ordenado
        for(int j = i+1; j<tamanho; j++){
            //se o elemento sucessor for menor que "minimo" a troca é concedida
            if(x[j] < x[minimo])
            minimo = j;
        }
        if(x[i] != x[minimo]){
            swap(&x[i], &x[minimo]);
        }
    }
}

void shellSort(int *x, int tamanho){
    int hP;
    for(hP=1; hP < tamanho; hP=3*hP+1); //intervalo inicial entre posições
    //(tamanho dos pulos)
    //enquanto o intervalo for maior que 1 (não é possível comparar intervalos menores)
    while (hP>1)
    {
        hP = hP/3;//atualiza o valor da posição
        for(int i=hP; i<tamanho; i++){ 
            int aux = x[i];
            int j = i - hP;
            //comparação entre elementos com distância hP (posição)
            while (j >= 0 && aux < x[j]) //caso obedeça a essa condição ocorre a troca de elementos
            {
                x[j+hP] = x[j]; //o elemento contido na posição mais a frente (elemento menor) recebe o da posição mais atrás ao qual se compara (elemento maior)
                j -= hP; //valor de j atualizado (j negativo)
            }
            x[j+hP] = aux; //permance na posição ou troca de posição caso tenha entrado no while
        }
    }
    
}

void combSort(int *x, int tamanho){
    int iP = tamanho;//intervalo entre as posições = tamanho do vetor
    
    while (iP!=1) //enquanto o intervlo for != 1
    {
        iP = int (iP/1.3); //ler o tamanho do vetor e divide por 1.3
        //SEU TIRAR ESSE IF O QUE ACONTECERIA?
        if (iP < 1){ //intervlo das posições não pode ser < 1, não há como comparar
            iP=1;
        }
        for (int i=0; i<tamanho-iP; i++){ //itera sobre o vetor
        //se numero na posição x > numero na posição y ocorre a troca
            if (x[i] > x[i+iP]){
                swap(x[i], x[i+iP]);
            }
        }
    }  
}

void heapSort(int *x, int n){
    for(int i = (n/2)-1; i >= 0; i--){
        heapify(x, n, i);
    }

    for(int i = n-1; i >= 0; i--){
        swap(&x[0], &x[i]);
        heapify(x, i, 0);
    }
}

void heapify(int x[], int n, int i){
    int maior = i; 
    int esquerda = 2*i + 1; 
    int direita = 2*i + 2; 
    
    if (esquerda < n && x[esquerda] > x[maior])
        maior = esquerda;
  
    if (direita < n && x[direita] > x[maior])
        maior = direita;
  
    if (maior != i) {
        swap(&x[i], &x[maior]);
        heapify(x, n, maior);
    }
}

void merge(int *x, int inf, int sup, int mid, int t)
{
    int i, j, k, c[t];
    i = inf;
    k = inf;
    j = mid + 1;
    while (i <= mid && j <= sup) {
        if (x[i] < x[j]) {
            c[k] = x[i];
            k++;
            i++;
        }
        else  {
            c[k] = x[j];
            k++;
            j++;
        }
    }
    while (i <= mid) {
        c[k] = x[i];
        k++;
        i++;
    }
    while (j <= sup) {
        c[k] = x[j];
        k++;
        j++;
    }
    for (i = inf; i < k; i++)  {
        x[i] = c[i];
    }
}

void swap(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

float tempo(clock_t tempo){
    return ((float) tempo)/CLOCKS_PER_SEC;
}