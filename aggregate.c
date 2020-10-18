#include<stdio.h>
#include<string.h>
struct pkt{
 char ch1,ch3;
 char ch2[2];
};

void main(){
 unsigned int Y;
 unsigned int new=0x00000000;
 struct pkt bytes;
 printf("Enter a Hexadecimal number:");
 scanf("%x",&Y);
 printf("Y=%x\n",Y);
 bytes.ch1=Y&0xFF;
 bytes.ch2[0]=(Y>>8)&0xFF;
 bytes.ch2[1]=(Y>>16)&0xFF;
 bytes.ch3=(Y>>24)&0xFF;
 printf("b0=%x\n",bytes.ch1);
 printf("b1=%x\n",bytes.ch2[0]);
 printf("b2=%x\n",bytes.ch2[1]);
 printf("b3=%x\n",bytes.ch3);
 new=(new|bytes.ch3)<<8u;
 new=(new|bytes.ch2[1])<<8u;
 new=(new|bytes.ch2[0])<<8u;
 new=(new|bytes.ch1);
 printf("Aggregated Number: %x\n",new);

}
