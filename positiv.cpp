Proyecto: Maratón de Algoritmos C++

#include <iostream> // Incluye la biblioteca estandar de entrada y salida para usar std::cout y std::cin.
int main() { // La función principal donde comienza la ejecución del programa.
double calificacion; // Declara una variable de tipo double para almacenar la calificacion, permitiendo decimales.
    // Inicia un bucle do-while para solicitar la calificación y validarla.
    // El bucle se ejecutará al menos una vez y se repetirá si la calificación no es válida.
    do {
        // Muestra un mensaje en la consola pidiendo al usuario que ingrese la calificación.
        std::cout << "Ingrese la calificacion del estudiante (de 0 a 10): ";
        std::cin >> calificacion; // Lee el valor ingresado por el usuario y lo guarda en la variable 'calificacion'.
        // Verifica si la calificación ingresada está fuera del rango [0, 10].
        if (calificacion < 0 || calificacion > 10) {
            // Si la calificación es inválida, muestra un mensaje de error.
            std::cout << "Calificacion no valida. Por favor, ingrese un valor entre 0 y 10." << std::endl;
        }
    } while (calificacion < 0 || calificacion > 10); // La condicion del bucle: si la calificacion es menor que 0 o mayor que 10, el bucle se repite.
    // A partir de aqui, la calificación es válida y se procede a su evaluación.

    // Comienza la estructura de decision if-else if-else para determinar el estado del estudiante.
    if (calificacion >= 7.0 && calificacion <= 10.0) {
        // Si la calificación es 7 o más, y hasta 10, el estudiante aprueba.
        std::cout << "El estudiante APROBO la asignatura. ¡Felicidades! 🎉" << std::endl;
    } else if (calificacion >= 4.0 && calificacion < 7.0) {
        // Si la calificación es 4 o más, pero menor que 7, el estudiante va a supletorio.
        std::cout << "El estudiante se encuentra en SUPLETORIO. Esfuérzate por el siguiente examen. 📚" << std::endl;
    } else { // Esta es la condicion por defecto si las anteriores no se cumplen.
        // Si la calificación es menor que 4, el estudiante reprueba.
        std::cout << "El estudiante REPROBO la asignatura. A seguir intentando. 😔" << std::endl;
    }
    return 0; // Indica que el programa finalizó con exito.
}

