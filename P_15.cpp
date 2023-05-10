// P_15.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <string>

    
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string nombre[5] = {"Kokun","Vegeta","picolo","bills","cell"};
    std::string procedencia[5] = { "Saya/Humano", "Sayayin", "Namekian", "Dios de la destruccion", "Androide" };
    int Ki[5] = { 5,4,3,2,1 };
    //mostrar datos de un arreglo
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Nombre del personaje " << i << ": " << nombre[i] << std::endl;
    }
    //Nombres de gente
    //Edades
    std::string nombres[5];
    std::string edad[5];    
    for (int i = 0; i <= 4; i++)
    {
        std::cout << "Hola soy goku! me puedes dar tu nombre? " << std::endl;
        getline(std::cin, nombres[i]);
        std::cout << "Ahora tu edad porfavor " << std::endl;
        getline(std::cin, edad[i]);
        
        
    }
    std::cout << "El primer personaje es: " << std::endl;
    

}

