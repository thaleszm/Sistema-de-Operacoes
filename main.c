//
// Created by Th on 27/03/2026.
//

#include <stdio.h>
#define pi 3.14

int main()
{
    // Variáveis
    char opcao_menu, opcao_area, opcao_volume;
    float lado, raio, base, altura;
    float area_quadrado, area_circulo, area_triangulo, area_retangulo;
    float volume_cone, volume_piramide, volume_esfera;


    // Loop infinito para manter o menu rodando até o usuário sair
    while (1) {
        printf("---Menu de Cálculos--- \n");
        printf("(A) Área \n(V) Volume \n(F) Fechar \n");
        printf("Digite uma Opção: ");
        scanf(" %c", &opcao_menu);

        switch(opcao_menu){
            case 'a':
            case 'A':
                printf("---Menu de Área--- \n");
                printf("(Q) Quadrado \n(C) Círculo \n(T) Triângulo \n(R) Retângulo \n(V) Voltar \n");
                printf("Digite sua resposta: ");
                scanf(" %c", &opcao_area);

                // Switch com Opção de Área
                switch(opcao_area){
                    case 'q':
                    case 'Q':
                        printf("Informe o valor de um lado: ");
                        scanf("%f", &lado);
                        area_quadrado = lado * lado;
                        printf("A área do Quadrado é: %.2f \n", area_quadrado);
                        break;
                    case 'c':
                    case 'C':
                        printf("Informe o raio: ");
                        scanf("%f", &raio);
                        area_circulo = pi * (raio*raio);
                        printf("A área do Círculo é: %.2f \n", area_circulo);
                        break;
                    case 't':
                    case 'T':
                        printf("Informe a base: ");
                        scanf("%f", &base);
                        printf("Informe a altura: ");
                        scanf("%f", &altura);
                        area_triangulo = (base * altura) / 2;
                        printf("A área do Triângulo é: %.2f \n", area_triangulo);
                        break;
                    case 'r':
                    case 'R':
                        printf("Informe o valor da base: ");
                        scanf("%f", &base);
                        printf("Informe o valor da altura: ");
                        scanf("%f", &altura);
                        area_retangulo = (base * altura);
                        printf("A área do Retângulo é: %.2f \n", area_retangulo);
                        break;
                    case 'v':
                    case 'V':
                        break;
                    default:
                        printf("Nenhuma opção foi selecionada! \n");
                }
                break;
            case 'v':
            case 'V':
                printf("---Menu de Volume--- \n");
                printf("(L) - Cone \n(M) - Pirâmide \n(N) - Esfera \n(V) - Voltar \n");
                printf("Digite sua resposta: ");
                scanf(" %c", &opcao_volume);

                // Switch com Opção de Volume
                switch(opcao_volume){
                    case 'l':
                    case 'L':
                        printf("Informe a altura do Cone: ");
                        scanf("%f", &altura);
                        printf("Informe o raio do Cone: ");
                        scanf("%f", &raio);
                        volume_cone = pi * (raio*raio) * altura * 1 / 3;
                        printf("O Volume do Cone é: %.2f \n", volume_cone);
                        break;
                    case 'm':
                    case 'M':
                        printf("Informe a base: ");
                        scanf("%f", &base);
                        printf("Informe a altura: ");
                        scanf("%f", &altura);
                        volume_piramide = (base * altura) / 3;
                        printf("O Volume da Pirâmide é: %.2f \n", volume_piramide);
                        break;
                    case 'n':
                    case 'N':
                        printf("Informe o valor do raio: ");
                        scanf("%f", &raio);
                        volume_esfera = pi *(raio*raio*raio) * 4 / 3;
                        printf("O Volume da Esfera é: %.2f \n", volume_esfera);
                        break;
                    case 'v':
                    case 'V':
                        break;
                    default:
                        printf("Nenhum opção selecionada \n");
                }
                break;

                // Finaliza o Programa
            case 'f':
            case 'F':
                printf("Finalizando... \n");
                return 0;
            default:
                printf("Nenhuma opção selecionada \n");
        }
    }
    return 0;
}