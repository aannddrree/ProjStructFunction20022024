#include <stdio.h>
#include <math.h>

// Definição da struct Point
struct Point {
    float x;
    float y;
};

// Função para criar um ponto
struct Point createPoint(float x, float y) {
    struct Point p;
    p.x = x;
    p.y = y;
    return p;
}

// Função para calcular a distância entre dois pontos
float distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Função para imprimir as coordenadas de um ponto
void printPoint(struct Point p) {
    printf("Coordenadas do ponto: (%.2f, %.2f)\n", p.x, p.y);
}

int main() {
    // Criando dois pontos
    struct Point p1 = createPoint(3.0, 4.0);
    struct Point p2 = createPoint(6.0, 8.0);

    // Imprimindo os pontos
    printf("Ponto 1:\n");
    printPoint(p1);
    printf("Ponto 2:\n");
    printPoint(p2);

    // Calculando e imprimindo a distância entre os pontos
    printf("Distância entre os pontos: %.2f\n", distance(p1, p2));

    return 0;
}
