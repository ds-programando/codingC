
int main() {
    int idade = 36;
    int quantidade = 1;
    float altura = 1.61f;
    double peso = 62.5;
    char nome[20] = "Daniela Suzano";

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Quantidade: %d\n", quantidade);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.1lf\n", peso);

    return 0;
}

// comentários sobre o código 
// printf("texto", variavel)
// %s significa que é um texto - especificador de formato
// %d significa que é um número- especificador de formato
// %.2f significa que é um número decimal com duas casas e é variável- especificador de formato
// %1lf significa variável e decimal- especificador de formato
