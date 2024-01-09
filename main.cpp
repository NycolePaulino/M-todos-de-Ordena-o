
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <time.h>
#include <fstream>
#include <iomanip>

using namespace std;

    //Declaração da função de ordenação BubbleSort
    int bubbleSort(int vetor[], int n){

    //Declaração das variaveis/vetores/contadores de tipo "inteiros".
    int v_crescente[n];
    int i, j, aux;
    int contBubble;
    contBubble = 0;

        //Declaração da condição necessária para a inicialização do "for"
        for(i = 0; i < n; i++){
        //O vetor inicial "vetor[i]" transfere suas informações para um vetor secundário.
            v_crescente[i] = vetor[i];
        }

        //Declaração da condição necessária para a inicialização do "for"
        for(i = 1; i < n; i++){
   
            for(j = 0; j < n; j++){
                //O contador irá contar quantas vezes o vetor foi utilizado
                contBubble+=2;
       
                //condição do if
                if(v_crescente[j] > v_crescente[j+1]){
                     //Se v_crescente for maior que v+crescente[j+1] a variavel aux recebe v_crescente
                    aux = v_crescente[j];
                    //v_crescente recebe v+crescente[j+1] e em seguida a variavel aux recebe v+crescente[j+1].
                    v_crescente[j] = v_crescente[j+1];
                    v_crescente[j+1] = aux;
                    //O contador irá contar quantas vezes o vetor foi utilizado
                    contBubble+=4;
                }        
            }    
        }  

    return contBubble;
   
}



    //Declaração da função de ordenação BubbleSort
    int selection(int vetor[], int m){
   
    //Declaração das variaveis/vetores/contadores de tipo "inteiros"
    int i, j;
    int menor, salva, v_selection[m];
    int contSelection;
    contSelection = 0;

        //Declaração da condição necessária para a inicialização do "for"
        for(i = 0; i < m; i++){
            //O vetor inicial "vetor[i]" transfere suas informações para um vetor secundário.
            v_selection[i] = vetor[i];
        }

        //Declaração da condição necessária para a inicialização do "for"
        for(i = 0; i < m-1; i++){
            menor = i;
            for(j = i +1; j < m; j++){
                //O contador irá contar quantas vezes o vetor foi utilizado
                contSelection+=2;
                //se v_selection[j[ for menor que v_selection[menor], a variavel menor recebe j.
                    if(v_selection[j] < v_selection[menor]){
                        menor = j;
                    }
            }   

            //A variavel "salva" recebe o vetor "v_selection[i]".
            salva = v_selection[i];
            //O vetor v_selection[menor] é atribuido ao v_selection[i].
            v_selection[i] = v_selection[menor];
            //O vetor v_selection[menor] tranferido para a variavel salva.
            v_selection[menor] = salva;
            //O contador irá contar quantas vezes o vetor foi utilizado
            contSelection+=4;  
        }

    return contSelection;
    
}

//Declaração da função de ordenação Inserction.
int inserctionSort(int v_inserction[], int b){
   
    //Declaração das variaveis/vetores/contadores de tipo "inteiros".
    int i, j, k;
    int contInserction;
    //Declaração que j e i tem inicialmente o valor 0.
    i = 0;
    j = 0;
    contInserction = 0;
   
    //While: executa uma instrução repetidamente até que a condição de término especificada seja avaliada como zero.
    while(i < b){
        //A variavel "k" recebe as informações do vetor v_iserction[i].
        k = v_inserction[i];
        j = i - 1;
        //O contador irá contar quantas vezes o vetor foi utilizado
        contInserction+=1;
       
        //While: executa uma instrução repetidamente até que a condição de término especificada seja avaliada como zero.
        while(j >= 0 && k < v_inserction[j]){
            v_inserction[j+1] = v_inserction[j];
            j--;
            //O contador irá contar quantas vezes o vetor foi utilizado
            contInserction+=3;
        }
        v_inserction[j+1] = k;
        i++;
        //O contador irá contar quantas vezes o vetor foi utilizado
        contInserction+=2;

       
    }
    
    return contInserction;
}



//Declaração da função de ordenação decrescente de números aleatórios.
void inversos(int v_decrescente[], int n){
   
//Declaração das variaveis/vetores de tipo "inteiros".
int i, j, aux;

//Condição usada para inicialização do for.
for(i = 0; i < n; i++){
   
    //Condição usada para inicialização do for.
    for(j = 0; j < n; j++){
       
        //Se v_decrescente[j] for menor que v_decrescente[j+1] a variavel "aux" receberá o v_decrescente[j];
        if(v_decrescente[j] < v_decrescente[j+1]){
            aux = v_decrescente[j];
            //Aqui o v_decrescente[j+1] é atribuido ao v_decrescente[j].
            v_decrescente[j] = v_decrescente[j+1];
            //A variavel "aux" recebe as informações do vetor v_decrescente[j+1].
            v_decrescente[j+1] = aux;
        }        
    }              
}  
}



//Declaração da função "int main", que é o ponto de partida do programa.
int main() {
   
    //Declaração das variaveis e contadores para o código.
    int x, i, j;
    int contnumeros, contIserction, contBubble, contSelection, variacao, b;

    //Atribuindo valores inicial para cada contador
    contnumeros = 0;
    contIserction = 0;
    contBubble = 0;
    contSelection = 0;

    ofstream arquivo("arquivo.txt");

    //Saída que pede ao usuário que forneça quantos números deseja
    cout << "Digite quantos numeros deseja:" << endl;

    //Leitura do número que o usuário forneceu.
    cin >> x;

    cout << "Digite a variacao para testes: "<< endl;
    cin >> variacao;

    //Declaração do vetor de tipo inteiros, com o tamanho que o usuário forneceu na função anteriormente.
    int numeros[x];

    srand((unsigned) time(NULL));

    //Condição para que o for seja inicializado
    for(i = 0; i < x; i++){
   
    //Gerador de números aleatórios
    contnumeros = rand() % 100000;
        //Condição para que o for seja inicializado
        for(j = 0; j < x; j++){
            //Condição que faça com que a saída gere números aleatórios não repitido
            if(contnumeros == numeros[i]){
                //Se caso acontecer de gerar, o código inicializa de novo e refaz o procedimento até que não haja números repetidos.
                contnumeros = rand() % 100000;
                j = 0;            
            }
        }
        //O vetor numeros[i] recebe as infomações do contador "contnumeros".
        numeros[i] = contnumeros;        
    }

    //Condição para que o for seja inicializado.
    for(int i = 0; i < x; i++){
        //Aqui as informações contidas dentro do vetor numeros[i] é transferida para o arquivo txt,
        arquivo << numeros[i];
        //Deixando espaço entre cada número.
        arquivo << " ";
    }

    cout << endl << " METODOS DE ORDENACAO" << endl << endl;
    cout << "------------------------------------------------------------------------------"
    "-----------------------------"
    << endl;

    cout << "|         TIPO          |    TAMANHO DO VETOR    |   ALGORITMO DE ORDENACAO   |   "
    "NUMERO DE COMPARACOES   |"
    << endl;
    cout << "-------------------------------------------------------------------------------"
    "----------------------------"
    << endl;
    
    int aleatorio[x];

        for (int j = variacao; j <= x; j = j + variacao){
   
        //Condição para que o for seja inicializado.
             for(int i = 0; i < j; i++){
            //Aqui as informações contidas dentro do vetor numeros[i] é transferida para o arquivo txt,
                aleatorio[i] = numeros[i];
            }  
   
        //Aqui o vetor de entrada é aleatório
        contBubble = bubbleSort(aleatorio, j);
        contSelection = selection(aleatorio, j);
        contIserction = inserctionSort(aleatorio, j);

    
        cout << "|   VETOR ALEATORIO     |  " << setw(11) << i << "|" << setw(15) << "       BUBBLESORT     " << setw(7) << "|" << setw(13) << contBubble << setw(15) << "|" << endl << endl;
        cout << "|   VETOR ALEATORIO     |  " << setw(11) << i << "|" << setw(15) << "       ISERCTIONSORT  " << setw(7) << "|" << setw(13) << contIserction << setw(15) << "|" << endl << endl;
        cout << "|   VETOR ALEATORIO     |  " << setw(11) << i << "|" << setw(15) << "       SELECTIONSORT  " << setw(7) << "|" << setw(13) << contSelection << setw(15) << "|" << endl << endl;
    }

    int crescente[x];

        for (int j = variacao; j <= x; j = j + variacao){
   
            //Condição para que o for seja inicializado.
            for(int i = 0; i < j; i++){
            //Aqui as informações contidas dentro do vetor numeros[i] é transferida para o arquivo txt,
            crescente[i] = numeros[i];
            }
   
    inserctionSort(crescente, x);
   
    //Aqui o vetor de entrada é aleatório
    contBubble = bubbleSort(crescente, j);
    contSelection = selection(crescente, j);
    contIserction = inserctionSort(crescente, j);

    cout << "|   VETOR CRESCENTE     |  " << setw(11) << i << "|" << setw(15) << "       BUBBLESORT     " << setw(7) << "|" << setw(13) << contBubble << setw(15) << "|" << endl << endl;
    cout << "|   VETOR CRESCENTE     |  " << setw(11) << i << "|" << setw(15) << "       ISERCTIONSORT  " << setw(7) << "|" << setw(13) << contIserction << setw(15) << "|" << endl << endl;
    cout << "|   VETOR CRESCENTE     |  " << setw(11) << i << "|" << setw(15) << "       SELECTIONSORT  " << setw(7) << "|" << setw(13) << contSelection << setw(15) << "|" << endl << endl;
     
}

    int decrescente[x];

        for (int j = variacao; j <= x; j = j + variacao){
   
            //Condição para que o for seja inicializado.
            for(int i = 0; i < j; i++){
                //Aqui as informações contidas dentro do vetor numeros[i] é transferida para o arquivo txt,
                decrescente[i] = numeros[i];
            }
   
    inversos(crescente, x);
   
    //Aqui o vetor de entrada é aleatório
    contBubble = bubbleSort(crescente, j);
    contSelection = selection(crescente, j);
    contIserction = inserctionSort(crescente, j);

    cout << "|   VETOR DECRESCENTE   |  " << setw(11) << i << "|" << setw(15) << "       BUBBLESORT     " << setw(7) << "|" << setw(13) << contBubble << setw(15) << "|" << endl << endl;
    cout << "|   VETOR DECRESCENTE   |  " << setw(11) << i << "|" << setw(15) << "       ISERCTIONSORT  " << setw(7) << "|" << setw(13) << contIserction << setw(15) << "|" << endl << endl;
    cout << "|   VETOR DECRESCENTE   |  " << setw(11) << i << "|" << setw(15) << "       SELECTIONSORT  " << setw(7) << "|" << setw(13) << contSelection << setw(15) << "|" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------";
   
    
} 
    return 0;

}
