#include <cstdlib>
#include <iostream>


using namespace std;

int primo(int numero)
      {
              int x, p=0;
              for(int i =1; i<=numero; i++){
                      if(numero % i == 0){
                      p = p +1;          
                                
                      }
              }
              if(p == 2){
                   x=1;     
              }else{
               x = 0;
              }
              return x;              
                   
      }

int main(int argc, char *argv[])
{
    float y;
    cout<<"Digite um numero: "<<"\n";
    cin>>y;
    cout<<primo(y)<<"\n";
    

    system("PAUSE");
    return EXIT_SUCCESS;
}
