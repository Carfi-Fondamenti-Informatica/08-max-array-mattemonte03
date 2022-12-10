#include <iostream>
#include "lib.h"

int main(){
int arraySize=0;
    std::cin>>arraySize;
    float * array=new float[arraySize];
    for(int i=0;i<arraySize;++i)
std::cin>>array[i];
    float maxValue=getMaxElement(array,arraySize);
std::cout<<maxValue;  
  return 0;
}
