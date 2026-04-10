#include <iostream>
#include <string>

int main() {
    std::string usuario;
    std::string password;
    int opcionMenu;

    std::cout << "Introduzca su usuario:\n";
    std::cin >> usuario;

    std::cout << "Introduzca su contraseña:\n";
    std::cin >> password;

    if (usuario == "Juan" && password == "NoHay2sin3") {

        std::cout << "Bienvenido, " << usuario
                  << ". Teclee 1 para acceder:\n";

        std::cin >> opcionMenu;

        if (opcionMenu == 1) {
            std::cout << "Accediendo al sistema...\n";
        } else {
            std::cout << "Opción inválida.\n";
        }

    } else {
        std::cout << "Lo sentimos, datos incorrectos.\n";
    }

    return 0;
}
