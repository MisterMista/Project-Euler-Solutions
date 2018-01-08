#include <iostream>

int main() {
    
int a = 2; //nth term
int b = 1; //n-1 term
int c; //temp variable
int sum = 0;

while(a <= 4000000){
    if(a % 2 == 0){
        sum += a;
    }
    //std::cout<<a<<"\n";
    c = a;
    a += b;
    b = c;
}

std::cout<<sum<<std::endl;

return 0;
}
