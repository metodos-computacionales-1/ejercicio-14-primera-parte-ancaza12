//Codigo tomado de https://www.youtube.com/watch?v=UhZ1ESRR4OM

#include <iostream>
#include <cmath>
void integralE(float tf,float dt, float w, float m);

int main(){
    float w = 100;
    float m=2;
    integralE(10, 0.01, w,m);    
    return 0;
}

void integralE(float tf,float dt, float w, float m){
    std::cout <<"Integral explicita de Euler"<< std::endl;
    float x=1;
    float vE=1;

    for(float t=0; t<=tf;t+=dt){
        x-= dt*w/m*x;
        vE= vE+ dt* vE;
        std::cout << t << x<< " " << vE<< std::endl;
    }
}
