
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
  for(int i=0; i<=s1.size(); ++i){
    if(s1[i]==' '){
      cout<<i<<endl;
    }
  }
  cout<<s1.size()<<endl;
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
  string word; 
  for(int i=0; i<=s1.size(); ++i){
    if(s1[i]==' '||i==s1.size()){
      if(!word.empty()){
        cout<<"["<<word<<"]"<<endl;
        word="";
      }
    } else{
      word+=s1[i];
    }
  }
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
  
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
  if(n<0){
    cout<<"El numero es negativo. Intentelo de nuevo"<<endl;
    return;
  } else if(n>14){
    cout<<"El numero es muy grande. Intentelo de nuevo"<<endl;
    return;
  }
  int resultado=1;
  for(int i=1; i<=n; ++i){
    resultado*=i;
  }
  cout<<resultado;
  cout<<endl; 
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
  int calendar[6][7]={0};
  int dia=1;
  for(int i=0; i<6; ++i){
    for(int columna=(i==0 ? n-1:0); columna <7 && dia<=k; ++columna){
      calendar[i][columna]=dia++;
    }
  }
  for(int i=0; i<6; ++i){
    for(int columna=0; columna<7; ++columna){
      if(calendar[i][columna]==0){
        cout<<"   ";
      } else{
        cout<<(calendar[i][columna]<10 ? " ": "")<<calendar[i][columna]<<" ";
      }
      cout<<endl;
    }
  }
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  int suma=0;
  string nstring=to_string(n);
  int nsize=to_string(n).size();
  if(n<=0){
    return 0;
  } else{
  for(int i=0; i<nsize; ++i){
    int digitos=nstring[i];
    suma=suma+digitos-'0';
  }
  }
  return suma;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
  double suma=0;
  for(int i=1;n>=i;++i){
    suma+=pow((-1),(i+1))/i;
  }
  cout<<suma<<endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
  
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE

}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  long suma=0;
  for(int i=1; n>=i; ++i){
    suma+=pow(i,k); 
  }
  return suma;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
  int binario[32];
  int i=0;
  if(decimal==0){
    cout<<0<<endl;
    return;
  }
  while(decimal>0){
    binario[i]=decimal%2;
    decimal /= 2;
    i++;
  }
  for(int j=i-1; j>=0; j--){
    cout<<binario[j];
  }
  cout<<endl;
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
  int contador=0;
  int num=2;
  while(contador<n){
    int primo=1;
    for(int i=2; i*i<=num; ++i){
      if(num%i==0){
        primo=0;
        break;
      }
    }
    if(primo){
      cout<<num<<" ";
      contador++;
    }
    num++;
  }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}