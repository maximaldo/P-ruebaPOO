#include <stdio.h>

// funciones para el primer ejercicio de matriz 4x3
void crearMatriz4x3(int matriz[4][3]) {//funcion para crear la matriz
    printf("Escriba 12 numeros para llenar la matriz de 4x3:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);//se le asigna cada numero ingresado a la matriz 
        }
    }
}

void dibujarMatriz4x3(int matriz[4][3]) { //esta funcion imprime la matriz
    printf("La matriz es:\n");
    for (int i = 0; i < 4; i++) {// usa un for para las filas y otro para las columnas
        for (int j = 0; j < 3; j++) {
            printf("\033[0;31m%d\033[0m\t", matriz[i][j]);
        }
        printf("\n"); // este barra n se usa para separar fila por fila
    }
}

void calcularSumas4x3(int matriz[4][3]) { //calculamos la sumas y las imprimimos
    int sumaDiagonalPrincipal = 0;
    int sumaDiagonalSecundaria = 0;
    int sumaPrimeraFila = 0;
    int sumaUltimaFila = 0;
    int sumaPrimeraColumna = 0;
    int sumaUltimaColumna = 0;

    // suma de la diagonal principal
    for (int i = 0; i < 3; i++) {
        sumaDiagonalPrincipal += matriz[i][i];
    }

    // suma de la diagonal secundaria
    for (int i = 0; i < 3; i++) {
        sumaDiagonalSecundaria += matriz[i][2 - i];
    }

    // suma de la primera y última fila
    for (int j = 0; j < 3; j++) {
        sumaPrimeraFila += matriz[0][j];
        sumaUltimaFila += matriz[3][j];
    }

    // suma de la primera y última columna
    for (int i = 0; i < 4; i++) {
        sumaPrimeraColumna += matriz[i][0];
        sumaUltimaColumna += matriz[i][2];
    }

    // imprimir los resultados
    printf("Suma de la diagonal principal: %d\n", sumaDiagonalPrincipal);
    printf("Suma de la diagonal secundaria: %d\n", sumaDiagonalSecundaria);
    printf("Suma de la primera fila: %d\n", sumaPrimeraFila);
    printf("Suma de la ultima fila: %d\n", sumaUltimaFila);
    printf("Suma de ambas filas: %d\n", sumaUltimaFila + sumaPrimeraFila);    
    printf("Suma de la primera columna: %d\n", sumaPrimeraColumna);
    printf("Suma de la ultima columna: %d\n", sumaUltimaColumna);
    printf("Suma de ambas columnas: %d\n", sumaPrimeraColumna + sumaUltimaColumna);
}

// Funciones para el segundo ejercicio matriz 20x20
void crearMatriz20x20(int matriz[20][20]) {
    printf("Ingrese numeros para llenar una matriz de 20x20:\n");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            printf("Ingrese el elemento [%d][%d]: ", i, j); // se pide cada elemento de la matriz
            scanf("%d", &matriz[i][j]);
        }
    }
}

void dibujarMatriz20x20(int matriz[20][20]) { //se imprime la matriz con color
    printf("La matriz es:\n");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            printf("\033[0;31m%d\033[0m\t", matriz[i][j]);
        }
        printf("\n"); // este barra n se usa para separar fila por fila
    }
}

void imprimirPrimeraColumna(int matriz[20][20]) {
    printf("Elementos de la primera columna:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d\n", matriz[i][0]);
    }
}

// funciones para el tercer ejercicio de ventas en la tienda María Shop
void crearMatrizVentas(int matriz[4][7]) {
    printf("Ingrese las ventas de cada dia para las ultimas 4 semanas:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            printf("Ingrese la venta del dia [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void dibujarMatrizVentas(int matriz[4][7]) { //se imprime la matriz
    printf("Las ventas son:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            printf("\033[0;31m%d\033[0m\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void totalVentasPorSemana(int matriz[4][7]) { // se calculan las ventas por cada semana
    for (int i = 0; i < 4; i++) {
        int total = 0; // se escribe el total aca par que por cad semana se reinicie el contador de dinero
        for (int j = 0; j < 7; j++) {
            total += matriz[i][j];
        }
        printf("Total de ventas de la semana %d: %d\n", i + 1, total);
    }
}

void promedioVentasPorSemana(int matriz[4][7]) { // aca sacamos el promedio
    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 7; j++) {
            total += matriz[i][j];
        }
        printf("Promedio de ventas de la semana %d: %.2f\n", i + 1, total / 7.0);
    }
}

void semanaMayorVenta(int matriz[4][7]) {
    int maxVenta = 0;
    int semana = 0;

    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 7; j++) {
            total += matriz[i][j];
        }
        if (total > maxVenta) {
            maxVenta = total; //aca se calcula cuanto fue
            semana = i + 1; // aca se calcula el numero de la semana de la mayor venta
        }
    }

    printf("La semana con mayor venta es la semana %d con un total de %d\n", semana, maxVenta);
}

int main() {
    int opcionPrincipal;
    int matriz4x3[4][3];
    int matriz20x20[20][20];
    int matrizVentas[4][7];

    do {
        // se hace un meno para elegir cada ejercicio
        printf("\033[0;33m Menu principal \033[0m\n");
        printf("\033[0;33m 1-Ejercicio 1 de Matriz 4x3 \033[0m\n");
        printf("\033[0;33m 2-Ejercicio 2 de Matriz 20x20 \033[0m\n");
        printf("\033[0;33m 3-Ejercicio 3 de Ventas en la tienda María Shop \033[0m\n");
        printf("\033[0;33m 4-Salir \033[0m\n");
        printf("Escriba el numero de la opcion: ");
        scanf("%d", &opcionPrincipal);

        switch (opcionPrincipal) {
            case 1: {
                int opcion1;
                do {
                    // menu para ejercicio 1
                    printf("\033[0;33m Matriz 4x3 \033[0m\n");
                    printf("\033[0;33m 1-Crear Matriz \033[0m\n");
                    printf("\033[0;33m 2-Dibujar Matriz \033[0m\n");
                    printf("\033[0;33m 3-Calcular Sumas \033[0m\n");
                    printf("\033[0;33m 4-Volver al Menu Principal \033[0m\n");
                    printf("Escriba el numero de la opcion: ");
                    scanf("%d", &opcion1);

                    switch (opcion1) {
                        case 1:
                            crearMatriz4x3(matriz4x3);
                            break;
                        case 2:
                            dibujarMatriz4x3(matriz4x3);
                            break;
                        case 3:
                            calcularSumas4x3(matriz4x3);
                            break;
                        case 4:
                            printf("De regreso al menu principall\n");
                            break;
                        default:
                            printf("El numero que ingreso no es valido, escribalo nuevamente\n");
                    }
                } while (opcion1 != 4);
                break;
            }
            case 2: {
                int opcion2;
                do {
                    // menu para ejercicio 2
                    printf("Matriz 20x20\n");
                    printf("1-Crear Matriz\n");
                    printf("2-Dibujar Matriz\n");
                    printf("3-Imprimir Primera Columna\n");
                    printf("4-Volver al Menu Principal\n");
                    printf("Escriba el numero de la opcion: ");
                    scanf("%d", &opcion2);

                    switch (opcion2) {
                        case 1:
                            crearMatriz20x20(matriz20x20);
                            break;
                        case 2:
                            dibujarMatriz20x20(matriz20x20);
                            break;
                        case 3:
                            imprimirPrimeraColumna(matriz20x20);
                            break;
                        case 4:
                            printf("De regreso al menu principal\n");
                            break;
                        default:
                            printf("Opcion no valida. Intente nuevamente.\n");
                    }
                } while (opcion2 != 4);
                break;
            }
            case 3: {
                int opcion3;
                do {
                    // menu para ejercicio 3
                    printf("Ventas en la tienda María Shop\033[0;33m Texto \033[0m\n");
                    printf("\033[0;33m 1-Crear Matriz \033[0m\n");
                    printf("\033[0;33m 2-Dibujar Matriz \033[0m\n");
                    printf("\033[0;33m 3-Total de Ventas por Semana \033[0m\n");
                    printf("\033[0;33m 4-Promedio de Ventas por Semana \033[0m\n");
                    printf("\033[0;33m 5-Semana de Mayor Venta \033[0m\n");
                    printf("\033[0;33m 6-Volver al Menu Principal \033[0m\n");
                    printf("Seleccione una opcion: ");
                    scanf("%d", &opcion3);

                    switch (opcion3) {
                        case 1:
                            crearMatrizVentas(matrizVentas);
                            break;
                        case 2:
                            dibujarMatrizVentas(matrizVentas);
                            break;
                        case 3:
                            totalVentasPorSemana(matrizVentas);
                            break;
                        case 4:
                            promedioVentasPorSemana(matrizVentas);
                            break;
                        case 5:
                            semanaMayorVenta(matrizVentas);
                            break;
                        case 6:
                            printf("De regreso al menu principal\n");
                            break;
                        default:
                            printf("Escriba uno de los numeros validos\n");
                    }
                } while (opcion3 != 6);
                break;
            }
            case 4:
                printf("Muchas gracias por usar el programa\n");
                break;
            default:
                printf("Opcion no valida. Intente nuevamente.\n");
        }
    } while (opcionPrincipal != 4);

    return 0;
}
