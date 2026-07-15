#include <stdio.h>

float force(float m);
float force(float m){
    float g=9.8; //Value of g is in m/s
    return m*g;
}

int main(){
    float mass;
    printf("Enter Mass(in kg): ");
    scanf("%f",&mass);
    printf("The Force of Attraction by earth is %.2f N",force(mass));


    return 0;
}