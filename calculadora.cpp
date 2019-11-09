#include<iostream>
using namespace std;
int main(){
	float n1,n2,n3,n4,n5,cantdn;
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
	return 0;
}
