#include<iostream>

using 
namespace std;

// inicializo las funciones

void relleno(int N,float **m);

void imprimeCabezas(int N,float **m);


// Creo el main

int main(){

cout<<"Escriba un numero del 3 al 11"<<endl;

int N=0;

cin>>N;

if(N<3 || N>11){
throw std::domain_error("Hay un error, por favor escriba un número entre 3 y 11 ");}
else{ 
float ** matriz = new float *[N+2];

for (int i =0; i < N+2; ++i){matriz[i] = new float[N];}
relleno(N,matriz);
imprimeCabezas(N,matriz);
}
return 
0;
}

//Creo la funcion relleno

void relleno(int N,float **m){
  cout<<"la matriz es: "<<endl;
  for(int ii=0;ii<N+2; ii++){
     for(int ij=0;ij<N; ij++){
      m[ii][ij]=ii+ij;
       cout<<" "<<m[ii][ij]<<" ";
      
     }
   cout<<endl;
  }
  
}



// Creo la funcion imprime cabezas

void imprimeCabezas(int N, float **m){

float sum=0;
cout<<"la fila es: ";
for (int i =0; i <N;i++) {

cout<<m[0][i]<<" ";


}


cout<<endl;
for (int j =0; j <N+2;j++) {

sum+=m[j][0];

}
cout<<"la suma es "<<sum<<endl;
}

