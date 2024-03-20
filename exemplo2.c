#include <stdio.h>

// Definição da struct Rectangle
struct Rectangle {
    float length;
    float width;
};

// Função para criar um retângulo
struct Rectangle createRectangle(float length, float width) {
    struct Rectangle rect;
    rect.length = length;
    rect.width = width;
    return rect;
}

// Função para calcular a área de um retângulo
float calculateArea(struct Rectangle rect) {
    return rect.length * rect.width;
}

// Função para calcular o perímetro de um retângulo
float calculatePerimeter(struct Rectangle rect) {
    return 2 * (rect.length + rect.width);
}

// Função para imprimir os detalhes de um retângulo
void printRectangle(struct Rectangle rect) {
    printf("Detalhes do retângulo:\n");
    printf("Comprimento: %.2f\n", rect.length);
    printf("Largura: %.2f\n", rect.width);
    printf("Área: %.2f\n", calculateArea(rect));
    printf("Perímetro: %.2f\n", calculatePerimeter(rect));
}

int main() {
    // Criando um retângulo
    struct Rectangle rect = createRectangle(5.0, 3.0);

    // Imprimindo os detalhes do retângulo
    printRectangle(rect);

    return 0;
}