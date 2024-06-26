
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
    char doc_char=s1[i];
    if(doc_char==' '||i==s1.size() && s1!=""){
      cout<<'['<<word<<']'<<endl;
      word="";
    } else{
      word=word+doc_char;
    }
  }
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
  int i=0;
  while(i<20){
    if(s1[i]=='1'){
      cout<<"Om-nom-nom :P"<<endl;
      i=i+1;
    } else if(s1[i]=='0'){
      cout<<"No cake :("<<endl;
      break;
    } else{
      i=i+1;
    }
  }
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
  int espacios=(n - 1)*3;
  for(int i=0; i<espacios; ++i){
    cout<< " ";
  }
    for(int i=1; i<=k; ++i){
      if(i<10){
        cout<< " ";
      }
      cout<<i;
      if((i + n - 1)%7==0 || i==k){
        if(i==k){
          cout<<" ";
        }
        cout<<endl;
      } else{
        cout<<" ";
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
  string s2;
  bool palindromo;
  if(s==""){
    cout<<"YES"<<endl;
  } else{
    for(int i=0; i<s.size();i++){
      if(s[i]!=' '){
        s2+=s[i];
      }
    }
    for(int i=0; i<s2.size();i++){
      if(s2[i]==s2[s2.size()-1-i]){
        palindromo=true;
      } else{
        cout<<"NO"<<endl;
        palindromo=false;
        break;
      }
    }
    if(palindromo==true){
      cout<<"YES"<<endl;
    }
  }
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
  string ubicacion;
  int letra=0;
  for(int i=0; i<s.size(); i++){
    if(s[i]=='f'){
      letra+=1;
      if(letra==2){
        ubicacion+=to_string(i);
      }
    }
  } if(letra==0){
    cout<<-2<<endl;
  } else if(letra==1){
    cout<<-1<<endl;
  } else {
    cout<<ubicacion<<endl;
  }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  while(b!=0){
    int mcd=b;
    b=a%b;
    a=mcd;
  }
  return a;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
  double UI=1;
  cout<<"U0 = 1"<<endl;
  for(int i=1; 10>=i; ++i){
    double resultado=UI/(i+1);
    cout<<"U"<<i<<" = "<<UI<<endl;
    UI=resultado;
  }
}

void exercise_12() {
  // TODO: YOUR CODE HERE
  double UI=1;
  double U=UI;
  for(int i=1; 10>=i; ++i){
    int VI=U;
    double resultado=UI/(i+1);
    cout<<"U"<<i<<" = "<<UI<<" "<<"V"<<i<<" = "<<VI<<endl;
    UI=resultado;
  }
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
  string original=to_string(n);
  string reversed="";
  for(int i=original.size()-1; i>=0; i--){
    reversed+=original[i];
  }
  if(reversed==original){
    return "Es palindrome";
  } else{
    return "No es palindrome";
  }
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
  int cociente=0;
  int residuo=divident;
  int i=0;
  if(divider!=0){
    for(i; residuo-divider>=0;++i){
      residuo=residuo-divider;
    }
    cociente=i;
    cout<<cociente<<" ";
    cout<<residuo<<endl;
  }
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
  if(fin>=debut){
    if(debut>0 && fin>0){
      for(debut; debut<=fin; ++debut){
        int i=0;
        int debutt=debut;
        while(debutt!=0){
          if(debutt%3==0){
            debutt+=4;
            ++i;
          } else if(debutt%4==0){
            debutt/=2;
            ++i;
          } else{
            --debutt;
            ++i;
          }
        }
        cout<<debut<<"->"<<i<<endl;
      }
    } else{
      cout<<"El numero debe de ser positivo y mayor a zero"<<endl;
    }
  } else{
    cout<<"El numero de fin no debe de ser menor al inicial"<<endl;
  }
}