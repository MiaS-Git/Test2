#include <stdio.h>
#include<string.h>
#include<stdlib.h>


enum Astro {Aries, Taurus, Gemini, Cancer, Leo, Virgo, Libra, Scorpio, Sagittarius, Capricorn, Aquarius, Pisces} space;

enum ChineseZ{Rat, Ox, Tiger, Rabbit, Dragon, Snake, Horse, Goat, Monkey, Rooster, Dog, Pig} land;


int main(){
printf("Facts based on your zodiacs\n\n");

printf("Aries [%d], Taurus[%d], Gemini[%d], Cancer[%d], Leo[%d], Virgo[%d], Libra[%d], Scorpio[%d], Sagittarius[%d], Capricorn[%d], Aquarius[%d], Pisces[%d]\n", Aries, Taurus, Gemini, Cancer, Leo, Virgo, Libra, Scorpio, Sagittarius, Capricorn, Aquarius, Pisces);
printf("What is your Astro Zodiac: ");
 scanf("%d", &space);

 printf("Rat [%d], Ox[%d], Tiger[%d], Rabbit[%d], Dragon[%d], Snake[%d], Horse[%d], Goat[%d], Monkey[%d], Rooster[%d], Dog[%d], Pig[%d]\n", Rat, Ox, Tiger, Rabbit, Dragon, Snake, Horse, Goat, Monkey, Rooster, Dog, Pig);
printf("What is your Chinese Zodiac: ");
 scanf("%d", &land);
  
if(space >= Goat){
  space = space - Rooster;  
}

  space = space + land;
printf("Favorite color:  ");
 switch(space) {
case Aries: //1
    puts("red");
    break;
case Taurus: //2
    puts("green");
    break;
case Gemini: //3
    puts("blue");
    break;
case Cancer: //4
    puts("purple");
    break;
case Leo: //5
    puts("yellow");
    break;
case Virgo: //6
    puts("gray");
    break;
case Libra: //7
    puts("8");
    break;
case Scorpio: //8
    puts("pink");
    break;
    break;
case Sagittarius: //9
    puts("brown");
    break;
case Capricorn: //10
    puts("white");
    break;
case Aquarius: //11
    puts("black");
    break;
case Pisces: //12
    puts("Crimson");
    break;
 }

if(space <= Dragon && land >= Snake ){
  space = space + land;  
}

 space = space - land;
printf("Least favorite color:  ");
 switch(space) {
case Aries: //1
    puts("red");
    break;
case Taurus: //2
    puts("green");
    break;
case Gemini: //3
    puts("blue");
    break;
case Cancer: //4
    puts("purple");
    break;
case Leo: //5
    puts("yellow");
    break;
case Virgo: //6
    puts("gray");
    break;
case Libra: //7
    puts("8");
    break;
case Scorpio: //8
    puts("pink");
    break;
    break;
case Sagittarius: //9
    puts("brown");
    break;
case Capricorn: //10
    puts("white");
    break;
case Aquarius: //11
    puts("black");
    break;
case Pisces: //12
    puts("Crimson");
    break;
 }

if(space < Dragon )
  printf("You are a  a wood element");
  if(space >= Dragon && space <= Goat )
    printf("You are a  a metal element");
    if(space > Goat && space <= Dog )
      printf("You are a  fire element");
      if(space > Dog && space <= Pig )
       printf("You are a  a water element");

}