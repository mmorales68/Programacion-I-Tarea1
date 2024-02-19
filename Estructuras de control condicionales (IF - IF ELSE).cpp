#include <iostream>
using namespace std;
int main(){
    //Edad
    int edad;
    cout<<"Ingrese su edad"<<endl;
    cin>>edad;

    if (edad>=18){
        cout<<"Es mayor de edad"<<endl;
    }else{
        cout<<"Es menor de edad"<<endl;
    }
    
    //Numero mayor
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
    //Par impar
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