#include <Speaker.h>
#include <stdio.h>
#include <iostream>

using namespace std;
using namespace Hello;

#define MAJID "majid"

int main(int argc, char *argv[]) {
//   Speaker* speaker = new Speaker();

//   speaker->sayHello();  

  std::cout<<"FOO:"<<__FOO__<<" BAR"<<__BAR__<<" __AA__:"<<__AA__<<"\n";

// #if(SEARCH==MAJID)
//   std::cout<<"FOO is define:"<<FOO<<"\n";
// #endif

if(std::string(__FOO__) == MAJID){
  std::cout<<"FOO is define:"<<__FOO__<<"\n";
}

if(atoi(__BAR__) == 100){
  std::cout<<"BAR is define:"<<__BAR__<<"\n";
}
}
