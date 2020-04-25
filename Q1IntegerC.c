#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int space;
int land;

int main(){
printf("Facts based on your zodiacs\n\n");

printf("Aries [0], Taurus[1], Gemini[2], Cancer[3], Leo[4], Virgo[5], Libra[6], Scorpio[7], Sagittarius[8], Capricorn[9], Aquarius[10], Pisces[11]\n");
printf("What is your Astro Zodiac: ");
 scanf("%d", &space);

 printf("Rat [0], Ox[1], Tiger[2], Rabbit[3], 4[4], Snake[5], Horse[6], 7[7], Monkey[8], Rooster[9], 10[10], Pig[11]\n");
printf("What is your Chinese Zodiac: ");
 scanf("%d", &land);
  
if(space >= 7){
  space = space - 9;  
}

  space = space + land;
printf("Favorite color:  ");
 switch(space) {
case 0: //1
    puts("red");
    break;
case 1: //2
    puts("green");
    break;
case 2: //3
    puts("blue");
    break;
case 3: //4
    puts("purple");
    break;
case 4: //5
    puts("yellow");
    break;
case 5: //6
    puts("gray");
    break;
case 6: //7
    puts("8");
    break;
case 7: //8
    puts("pink");
    break;
    break;
case 8: //9
    puts("brown");
    break;
case 9: //10
    puts("white");
    break;
case 10: //11
    puts("black");
    break;
case 11: //12
    puts("Crimson");
    break;
 }

if(space <= 4 && land >= 5 ){
  space = space + land;  
}

 space = space - land;
printf("Least favorite color:  ");
 switch(space) {
case 0: //1
    puts("red");
    break;
case 1: //2
    puts("green");
    break;
case 2: //3
    puts("blue");
    break;
case 3: //4
    puts("purple");
    break;
case 4: //5
    puts("yellow");
    break;
case 5: //6
    puts("gray");
    break;
case 6: //7
    puts("8");
    break;
case 7: //8
    puts("pink");
    break;
    break;
case 8: //9
    puts("brown");
    break;
case 9: //10
    puts("white");
    break;
case 10: //11
    puts("black");
    break;
case 11: //12
    puts("Crimson");
    break;
 }

if(space < 4 )
  printf("You are a  a wood element");
  if(space >= 4 && space <= 7 )
    printf("You are a  a metal element");
    if(space > 7 && space <= 10 )
      printf("You are a  fire element");
      if(space > 10 && space <= 11 )
       printf("You are a  a water element");

}