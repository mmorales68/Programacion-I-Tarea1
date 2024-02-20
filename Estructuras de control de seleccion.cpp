#include <iostream>
using namespace std;

//Declaracion de funciones
int edad();
int numMayor();
int numPar();
int factorialWhile();
int serieNumImparesFor();
int serieNumImparesWhile();

int main(){//programa principal

    //seleccion del 1 al 5
    int seleccion=0;
    cout<<"Ingrese un numero del 1 al 5"<<endl;
    cin>>seleccion;

    while (seleccion<=0||seleccion>=6){
        cout<<"Por favor ingrese un numero que este entre el 1 y el 5"<<endl;
        cin>>seleccion;
    }

    switch(seleccion){
        case 1: cout<<seleccion<<" corresponde a: lunes"<<endl;
        break;
        case 2: cout<<seleccion<<" corresponde a: martes"<<endl;
        break;
        case 3: cout<<seleccion<<" corresponde a: miercoles"<<endl;
        break;
        case 4: cout<<seleccion<<" corresponde a: jueves"<<endl;
        break;
        case 5: cout<<seleccion<<" corresponde a: viernes"<<endl;
        break;
    }

    //seleccion de ejerccio
    seleccion=0;
    char continuar='s';
    while (continuar=='s'||continuar=='S'){
        cout<<"Selecione uno de los siguientes programas"<<endl;
        cout<<"1) Calculo de la edad"<<endl;
        cout<<"2) Calculo del numero mayor"<<endl;
        cout<<"3) Validacion de numero par/impar"<<endl;
        cout<<"4) Calculo del factorial con while"<<endl;
        cout<<"5) Serie de numeros impares con for"<<endl;
        cout<<"6) Serie de numeros impares con while"<<endl;
        cin>>seleccion;

        switch (seleccion){
            case 1: edad();
            break;
            case 2: numMayor();
            break;
            case 3: numPar();
            break;
            case 4: factorialWhile();
            break;
            case 5: serieNumImparesFor();
            break;
            case 6: serieNumImparesWhile();
            break;
            default: cout<<"No se ingreso una opcion valida"<<endl;
            break;
        }

        cout<<endl<<"Continuar seleccionado uno de los programas (s/n)"<<endl;
        cin>>continuar;
    }
    return 0;
}


//Definicion de las funciones
int edad(){
        int edad;
    cout<<"Ingrese su edad"<<endl;
    cin>>edad;

    if (edad>=18){
        cout<<"Es mayor de edad"<<endl;
    }else{
        cout<<"Es menor de edad"<<endl;
    }
return 0;
}

int numMayor(){
    int num1, num2;
    cout<<"Ingrese el primer numero para validar cual es mayor"<<endl;
    cin>>num1;
    cout<<"Ingrese el segundo numero para validar cual es mayor"<<endl;
    cin>>num2;

    if (num1>num2){
        cout<<num1<<" es mayor"<<endl;
    }else if(num2>num1){
        cout<<num2<<" es mayor"<<endl;
    }else{
        cout<<"Los numeros son iguales"<<endl;
    }
    return 0;
}

int numPar(){
    int n;
    cout <<"Ingrese un numero para validar si es par o impar"<<endl;
    cin>>n;
    if (n%2!=0){
        cout<<n<<" es numero impar"<<endl;
    }else{
        cout<<n<<" es numero par"<<endl;
    }
    return 0;
}

int factorialWhile(){
    int n;
    int resultadoFactorial=1;
    int contador=1;

    cout<<"Ingrese un numero para calcular su factorial"<<endl;
    cin>>n;

    while(n<0){
        cout<<"Ingrese un numero natural positivo"<<endl;
        cin>>n;
    }

    if(n>0){
        while(contador <= n){
            resultadoFactorial=(resultadoFactorial*contador);
            contador++;
        }
    }

    cout<<"El factorial es "<<resultadoFactorial<<endl;
    return 0;
}



int serieNumImparesFor(){
    int num=0;

    for(size_t i = 0;num<10 || num>30; i++){
        cout<<"Ingrese un numero mayor a 10 y menor que 30"<<endl;
        cin>>num;
    }

    for (size_t i2 = 1; i2 <= num; i2++){
        if ((i2%2)!=0){
           cout<<i2<<" ";
        }   
    }

    return 0;
}

int serieNumImparesWhile(){
    int num2=0;
    int c2=1;

    while(num2<10 || num2>30){
        cout<<endl<<"Ingrese un numero mayor a 10 y menor que 30"<<endl;
        cin>>num2;
    }

    while(c2<=num2){
        if((c2%2)!=0){
           cout<<c2<<" ";
        }
        c2++;
    }

    return 0;
}
