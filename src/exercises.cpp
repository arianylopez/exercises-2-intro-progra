
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
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  int suma=0;
  while(n>0){
    suma += n%10;
    n /= 10;
  }
  cout<<suma;
  return 0;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
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
  for(int i=1; i<=n; ++i){
    suma+=pow(i,k); 
  }
  cout<<suma<<endl;
  return 0;
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
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}