//Codigo tomado de https://www.youtube.com/watch?v=UhZ1ESRR4OM

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
void integralE(float tf,float dt, float w, float m, string datos);

int main(){
    float w = 100;
    float m=2;
    string datos= "ej14.dat";
    integralE(10, 0.01, w,m, datos); 
    
    
    return 0;
}

void integralE(float tf,float dt, float w, float m, string datos){
      
    float x=1;
    float vE=1;
    ofstream outfile;
    outfile.open(datos);
    for(float t=0; t<=tf;t+=dt){
        x-= dt*w/m*x;
        vE= vE+ dt* vE;
        outfile << t << x<< " " << vE<< std::endl;
    }
}
