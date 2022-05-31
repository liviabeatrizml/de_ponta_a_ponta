#include <stdio.h>
#include <list>
#include <stdlib.h>
#include <time.h>

using namespace std;

void printNumber(list<int>);

int maiorMenor(list<int>, list<int>);

list<int> soma(list<int>, list<int>);
list<int> subtracao(list<int>, list<int>);
list<int> multiplicacao(list<int>, list<int>);
list<int> multiplica10(list<int>*);

int main(){
    list<int> A;
    list<int> B;

    int V1[] = {1,9,2,9,1,4,5,9,7,4,5,6,3,2,5,1,2};
    int V2[] = {2,9,6,3,5,1,4,9,6,3,5};

    for (size_t i = 0; i < sizeof(V1)/4; i++){
        A.push_back(V1[i]);
    }

    for (size_t i = 0; i < sizeof(V2)/4; i++){
        B.push_back(V2[i]);
    }

    clock_t duration = clock();

    list<int> s = soma(A, B);
    printNumber(s);
    list<int> su = subtracao(A, B);
    printNumber(su);
    list<int> mul = multiplicacao(A, B);
    printNumber(mul);
    list<int> vzA = multiplica10(&A);
    printNumber(vzA);
    list<int> vzB = multiplica10(&B);
    printNumber(vzB);

    duration = clock() - duration;
    printf("A operacao durou %lf segs...\n", (double)(duration/CLOCKS_PER_SEC));

}

void printNumber(list<int> Lista){
    list<int>::iterator it;

    for (it = Lista.begin(); it != Lista.end(); it++){
        printf("%d", *it);
    }

    printf("\n");  
}

int maiorMenor(list<int> ListaA, list<int> ListaB){
    list<int>::iterator itA;
    list<int>::iterator itB;

    itA = ListaA.begin();
    itB = ListaB.begin();

    if((ListaA.size() > ListaB.size()) && (*itA != 0)){
        return 1;
    } else if ((ListaB.size() > ListaA.size()) && (*itB != 0)){
        return 0;
    }

    for (size_t i = 0; i < ListaA.size(); i++){
        if(*itA > *itB){
            return 1;
        } else if(*itA < *itB){
            return 0;
        }

        itA++;
        itB++;
    }

    return 2;
}

list<int> soma(list<int> ListaA, list<int> ListaB){
    list<int> S;
    list<int>::iterator itA;
    list<int>::iterator itB;

    int soma, x, y, aux = 0;

    while (ListaA.size() < ListaB.size() || ListaA.size() > ListaB.size()){
        if(ListaA.size() < ListaB.size()){
            ListaA.push_front(0);
        } else {
            ListaB.push_front(0);
        }
    }

    itA = ListaA.end();
    itA--;

    itB = ListaB.end();
    itB--;

    for (size_t i = 0; i < ListaA.size(); i++){
        x = *itA;
        y = *itB;

        soma = x + y + aux;
        aux = (soma > 9) ? 1 : 0;

        S.push_front(soma%10);
        itA--;
        itB--;
    }

    if(aux != 0){
        S.push_front(aux);
    }

    return S;
}

list<int> subtracao(list<int> ListaA, list<int> ListaB){
    list<int> S;
    list<int>::iterator it1;
    list<int>::iterator it2;

    int sub, x, y, cont, aux = 0;

    while (ListaA.size() < ListaB.size() || ListaA.size() > ListaB.size()){
        if(ListaA.size() < ListaB.size()){
            ListaA.push_front(0);
        } else {
            ListaB.push_front(0);
        }
    }
    
    int ord = maiorMenor(ListaA, ListaB);

    if(ord == 1){
        it1 = ListaA.end();
        it2 = ListaB.end();
    } else {
        it1 = ListaB.end();
        it2 = ListaA.end();
    }

    it1--;
    it2--;

    for (size_t i = 0; i < ListaA.size(); i++){
        x = *it1;
        y = *it2;

        cont = (aux == 10) ? 1 : 0;
        aux = (((x - cont) - y) < 0) ? 10 : 0;
        sub = (aux == 10) ? ((x - cont) + aux) - y : (x - cont) - y;
        
        S.push_front(sub);
        it1--;
        it2--;
    }

    if(ord == 0){
        printf("-");
    }

    return S;
}

list<int> multiplicacao(list<int> ListaA, list<int> ListaB){
    list<int> Aux1;
    list<int> Result;

    list<int>::iterator itA;
    list<int>::iterator itB;

    int x, y, multi, aux = 0, cont = 0;

    itA = ListaA.end();
    itB = ListaB.end();

    itA--;
    itB--;

    for (size_t i = 0; i < ListaB.size(); i++){
        itA = ListaA.end();
        itA--;

        Aux1.clear();

        for (size_t j = i; j > 0; j--){
            Aux1.push_front(0);
        }
        
        aux = 0;

        while (cont < ListaA.size()){
            x = *itA;
            y = *itB; 

            multi = (x * y) + aux;
            aux = ((x * y) + aux) > 9 ? (((x * y) + aux) / 10) : 0;
            
            Aux1.push_front(multi%10);

            itA--;
            cont++;
        }

        if(aux != 0){
            Aux1.push_front(aux);
        }

        Result = soma(Result,Aux1);

        cont = 0;
        itB--;
    }

    return Result;
}

list<int> multiplica10(list<int> *Lista){
    (*Lista).push_back(0);
    return (*Lista);
}