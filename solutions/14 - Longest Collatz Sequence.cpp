#include <iosteam>

int main (void){

unsigned int largest = 0;
unsigned int largestb = 0;
for (unsigned int i = 1; i < 1000000; i++){
    
    unsigned int j = i;
    unsigned int k = 0;
    while (j != 1){
        if(j%2==0){
            j /= 2;
        } else {
            j = 3 * j + 1;
        }
        k++;
    }
    if(k > largest){
        largest = k;
        largestb = i;
    }
}
    
std::cout<<largestb<<std::endl;

return 0;    
}
