#include <iostream>

using namespace std;

void fun_a(int *px,int *py);
void fun_b(int a[],int tam);

int main(){
    int array[10] = {10, 20, 30, 40, 50, 90, 97, 98, 99, 101};
    fun_b(array, 10);
}

void fun_a(int *px,int *py){
    int tmp = *px;
    *px = *py;
    *py = tmp;
}

void fun_b(int a[],int tam){
    int f=0, l;
    int *b = a;
    for (l = tam -1; f < 1; f++, l--){
        fun_a(&b[f], &b[l]);
    }
}
