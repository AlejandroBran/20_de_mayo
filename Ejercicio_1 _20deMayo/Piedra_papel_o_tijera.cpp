#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    int a, b;


    

 do {
    
    cout << "Seleccione una opcion: (salirse==0, piedra==1, papel==2, tijera==3): \n";
    cin >> a;

    int b=1 +rand()%3;

    if (a>3 || a<0){
        cout << "Error. \n";
    }else{
        cout<<"la maquina eligio :"<<b<<endl;
          if(a==b){

        cout << "Empate. \n";
    }
    else if((a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2)){


        cout << "Haz Ganado. \n";
    }
    else if (a==0){

        cout << "Fin del Gamer over!!. \n";
    }
    else {

        cout <<"Haz perdido. \n";
        
    }
    }
 }

    while (a=1 || a==2 || a==3);
    

    return 0;

}