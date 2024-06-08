#include <iostream>
#include <cmath>

using namespace std;

int menu();
void CalcularAreaTriangulo();
void CalcularAreaCirculo();
void CalcularAreaCuadrado();


int main()
{
    int option;
    while((option = menu()) == -1 )
    {
        cout << "Ingrese una opcion valida\n";
    }
    switch (option){
    case 1:
        CalcularAreaTriangulo();
        break;
    case 2:
        CalcularAreaCirculo();
        break;
    case 3:
        CalcularAreaCuadrado();
        break;
    case 4:
        cout << "Saliendo del programa/n";
        return 0;
    }
}



int menu()
{
    int opciones;
    cout << "Calculadora de areas\n";
    cout << "1. Calcular Triangulos\n";
    cout << "2. Calcular Circulo\n";
    cout << "3. Calcular Cuadradado\n";
    cout << "4. Salir del programa\n";
    cin  >> opciones;

    if (opciones <= 4 && opciones >= 1)
        {
        return opciones;
    } else{

        return -1;
}



return 0;


}




   void CalcularAreaTriangulo(){
       double base, altura, area;
       char respuesta;


       cout <<"Ingrese la base: ";
       cin >> base;

       if (base <= 0){
        cout << "La base tiene que ser mayor a 0/n";
        return;
       }

       cout << "Ingrese la altura: ";
       cin >> altura;
        if (altura <= 0){
            cout << "La altura tiene que ser mayor a 0/n";
            return;
            }

        area = (base*altura) / 2;
        cout << "El area del trianulo es: " << area << endl;

        cout << "Desea regresar al Menu S/N: " ;
        cin  >> respuesta;
        if (respuesta == 'N' || respuesta == 'n'){
            cout << "Saliendo del programa...\n";
        exit(0);
}

   }
   void CalcularAreaCirculo(){
       double radio, areacirculo;

       cout << "Ingrese el radio: ";
       cin >> radio;

       if (radio <= 0){
        cout << "El radio tiene que ser mayor a 0/n";
        return;
       }

       areacirculo = M_PI * pow(radio, 2);
       cout << "El area del circulo es: " << areacirculo << endl;

   }
  void CalcularAreaCuadrado(){
      double lado, areacubica;

      cout << "Ingrese el lado del cuadrado: ";
      cin >> lado;

      if (lado <= 0){
        cout << "El area tiene que ser mayor a 0/n";
        return;
      }

      areacubica = pow(lado, 2);
      cout << "El area del cuadrado es: " << areacubica << endl;


  }
