#include<iostream> 							//libreria de entradas y salidas

using namespace std;



unsigned int fibonacci(int n) {             // funcion fibonacci nos regresa un valor no signado
   
	if (n < 2) { 							// condicion de paro
     return n;
   }

   unsigned int a = 1, b = 1, c;			// se hace el metodo iterativo con variables locales
   for (int i = 0; i < n - 2; ++i) {		// cambiando su valor en cada iteracion
     c = a + b;								// avanazando progresivamente como auxiliares
     b = a;
     a = c;
   }
   return a;								// regresamos a al termino de la iteracion

}

int main()
{
    cout<<"\n          -Fibonacci Iterativo-    \n";            // Metodo a Evaluar
	cout<<"      Rodolfo Martinez y Brenda Ortega    \n\n";     // Miembros de Equipo
    
    unsigned int i, num ;                   // variables de apoyo, para limites de iteracion

	
    do
    {
        cout<<"Ingrese un numero: ";		// Se ingresa un valor
        cin>>num;							// Se registra en la variable num
        
    } while(num < 0);
    
    cout<<"\n Serie de Fibonacci: \n\t";
    
    for(i=0; i<num; i++)					// Se ejecuta la funcion
    {
       if(fibonacci(i) != 0)				// si es diferente de cero se pone una coma para acomodar los datos
          cout<< ", "; 
        
        cout<< fibonacci(i);                // se imprime el valor que regresa la funcion
    }
    
	cout<<"\n"; 

   
    
    return 0;								// Fin del Programa
}
