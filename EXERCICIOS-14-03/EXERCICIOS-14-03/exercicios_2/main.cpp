#include <cstdlib>
#include <iostream>

using namespace std;

int receber(){
    int numero;
    cout<<"Digite um numero\n";
                  cin>> numero;
    return numero;
    }
int quadrado(int x){
    int quad;
    quad = x*x;
    return quad;
    
    }


    
int calcular(int x, int y){
    int soma;
    soma = x + y;
    
    return soma;
    
    }

int main(int argc, char *argv[])
{  
    int a, b, c, d;
    
    
    a = receber();
    b = receber();
    
    c = quadrado(a);
    d - quadrado(b);
    
    
    
    cout<<calcular(c,d);
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
