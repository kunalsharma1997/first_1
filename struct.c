#include<stdio.h>
#include<iostream>
#include<conio.h>
struct box {
  int l;
  int b;
  int h;
};

void printBox(struct box);
int findVolume(struct box);

int main() {
  struct box b1={10,12,5};    
  printbox(b1);
  int vol=findVolume(b1);
  printf("volume=%d\n",vol);
  return 0;
}

int findVolume(struct box b) {
  return b.l*b.b*b.h;
}
void printBox(struct box b) {
  printf("l=%d,b=%d,h=%d\n",b.l,b.b,b.h);
}
