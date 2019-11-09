#include<iostream>
using namespace std;
int main(){
	float n1,n2,n3,n4,n5,operacion,resultado,cantdn;
	cout<<"Indique que operacion quiere realizar: Suma=0, Resta=1, Multiplicar=2, Salir=3"<<endl;cin>>operacion;
	if (operacion==0){
		cout<<"Indique la cantidad de numeros a sumar: ";cin>>cantdn;
		if (cantdn==2){
			cout<<"Indique primer numero a sumar: ";cin>>n1;
			cout<<"Indique segundo numero a sumar: ";cin>>n2;
			cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
		}
		else if(cantdn==3){
			cout<<"Indique primer numero a sumar: ";cin>>n1;
			cout<<"Indique segundo numero a sumar: ";cin>>n2;
			cout<<"Indique tercer numero a sumar: ";cin>>n3;
			cout<<n1<<" + "<<n2<<" + "<<n3<<" = "<<n1+n2+n3<<endl;
		}
		else if(cantdn==4){
			cout<<"Indique primer numero a sumar: ";cin>>n1;
			cout<<"Indique segundo numero a sumar: ";cin>>n2;
			cout<<"Indique tercer numero a sumar: ";cin>>n3;
			cout<<"Indique cuarto numero a sumar: ";cin>>n4;
			cout<<n1<<" + "<<n2<<" + "<<n3<<" + "<<n4<<" = "<<n1+n2+n3+n4<<endl;
		}
		else if(cantdn==5){
			cout<<"Indique primer numero a sumar: ";cin>>n1;
			cout<<"Indique segundo numero a sumar: ";cin>>n2;
			cout<<"Indique tercero numero a sumar: ";cin>>n3;
			cout<<"Indique cuarto numero a sumar: ";cin>>n4;
			cout<<"Indique quinto numero a sumar: ";cin>>n5;
			cout<<n1<<" + "<<n2<<" + "<<n3<<" + "<<n4<<" + "<<n5<<" = "<<n1+n2+n3+n4+n5<<endl;
		}
		else{
			cout<<"Disculpe pero esta version solo puede realizar suma de hasta 5 numeros";
		}
	}
	else if (operacion==1){
		cout<<"Indique la cantidad de numeros a restar: ";cin>>cantdn;
		if (cantdn==2){
			cout<<"Indique primer numero a restar: ";cin>>n1;
			cout<<"Indique segundo numero a restar: ";cin>>n2;
			cout<<" - "<<n1<<" - "<<n2<<" = "<<-n1-n2<<endl;
		}
		else if (cantdn==3){
			cout<<"Indique primer numero a restar: ";cin>>n1;
			cout<<"Indique segundo numero a restar: ";cin>>n2;
			cout<<"Indique tercer numero a restar: ";cin>>n3;
			cout<<" - "<<n1<<" - "<<n2<<" - "<<n3<<" = "<<-n1-n2-n3<<endl;
		}
		else if (cantdn==4){
			cout<<"Indique primer numero a restar: ";cin>>n1;
			cout<<"Indique segundo numero a restar: ";cin>>n2;
			cout<<"Indique tercer numero a restar: ";cin>>n3;
			cout<<"Indique cuarto numero a restar: ";cin>>n4;
			cout<<" - "<<n1<<" - "<<n2<<" - "<<n3<<" - "<<n4<<" = "<<-n1-n2-n3-n4<<endl;
		}
		else if (cantdn==5){
			cout<<"Indique primer numero a restar: ";cin>>n1;
			cout<<"Indique segundo numero a restar: ";cin>>n2;
			cout<<"Indique tercer numero a restar: ";cin>>n3;
			cout<<"Indique cuarto numero a restar: ";cin>>n4;
			cout<<"Indique quinto numero a restar: ";cin>>n5;
			cout<<" - "<<n1<<" - "<<n2<<" - "<<n3<<" - "<<n4<<" - "<<n5<<" = "<<-n1-n2-n3-n4-n5<<endl;
		}
		else {
			cout<<"Disculpe pero esta version solo puede restar haste 5 numeros";
		}
	}
	else if (operacion==2){
		cout<<"Indique la cantidad de numeros a multiplicar: ";cin>>cantdn;
		if(cantdn==2){
			cout<<"Indique el primer numero a multiplicar: ";cin>>n1;
			cout<<"Indique el segundo numero a multiplicar: ";cin>>n2;
			cout<<n1<<" x "<<n2<<" = "<<n1*n2<<endl;
		}
		else if(cantdn==3){
			cout<<"Indique el primer numero a multiplicar: ";cin>>n1;
			cout<<"Indique el segundo numero a multiplicar: ";cin>>n2;
			cout<<"Indique el tercer numero a multiplicar: ";cin>>n3;
			cout<<n1<<" x "<<n2<<" x "<<n3<<" = "<<n1*n2*n3<<endl;
		}
		else if(cantdn==4){
			cout<<"Indique el primer numero a multiplicar: ";cin>>n1;
			cout<<"Indique el segundo numero a multiplicar: ";cin>>n2;
			cout<<"Indique el tercer numero a multiplicar: ";cin>>n3;
			cout<<"Indique el cuarto numero a multiplicar: ";cin>>n4;
			cout<<n1<<" x "<<n2<<" - "<<n3<<" x "<<n4<<" = "<<n1*n2*n3*n4<<endl;
		}
		else if(cantdn==5){
			cout<<"Indique el primer numero a multiplicar: ";cin>>n1;
			cout<<"Indique el segundo numero a multiplicar: ";cin>>n2;
			cout<<"Indique el tercer numero a multiplicar: ";cin>>n3;
			cout<<"Indique el cuarto numero a multiplicar: ";cin>>n4;
			cout<<"Indique el quinto numero a multiplicar: ";cin>>n5;
			cout<<n1<<" x "<<n2<<" x "<<n3<<" x "<<n4<<" x "<<n5<<" = "<<n1*n2*n3*n4*n5<<endl;
		}
		else{
			cout<<"Disculpe pero esta version no multiplica mas de 5 numeros";
		}
	}
	return 0;
}
