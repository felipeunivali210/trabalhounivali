#include <iostream>

int main() 
{
    int dia;

    std::cout << "digite um número (1 a 7) para o dia da semana: ";
    std::cin >> dia;

    switch (dia) 
    {
        case 1:
            std::cout << "domingo" << std::endl;
            break;
        case 2:
            std::cout << "segunda-feira" << std::endl;
            break;
        case 3:
            std::cout << "terça-feira" << std::endl;
            break;
        case 4:
            std::cout << "quarta-feira" << std::endl;
            break;
        case 5:
            std::cout << "quinta-feira" << std::endl;
            break;
        case 6:
            std::cout << "sexta-feira" << std::endl;
            break;
        case 7:
            std::cout << "sábado" << std::endl;
            break;
        default:
            std::cout << "numero invalido. Por favor, digite um número de 1 a 7." << std::endl;
    }

    return 0;
}
