#include <stdio.h>

int main(){

char sex;
  printf("Sind Sie ein Mann(m) oder eine Frau(f)\n");
  scanf("%c",&sex);
int weigth;
  printf("Wie viel kg wiegen Sie\n");
  scanf("%i",&weigth);
  
int gesamtMl;
double gesamtProzent;

void printer(){  
  char wahl[8][40] = {
    "1: kleines Bier (330ml, 4,9%%)",
    "2: grosses Bier (500ml, 4,9%%)",
    "3: ein Glas Wein (200ml, 12%%)",
    "4: ein Shot (20ml, 37%%)",
    "5: ein Shot (20ml, 40%%)",
    "6: ein doppelter Shot (40ml, 37%%)",
    "7: ein doppelter Shot (40ml, 40%%)",
    "8: Ende"
  };

for(int i = 0;i<8;i++){
    printf("%s\n",wahl[i]);
}}

printer();
  int wahlen;
  scanf("%i",&wahlen);
  
while(wahlen!=8){
  switch(wahlen){
    case 1:
      gesamtMl+=330;
      gesamtProzent+=4.9;
      printer();
      scanf("%i",&wahlen);
      break;
    case 2:
      gesamtMl+=500;
      gesamtProzent+=4.9;
      printer();
      scanf("%i",&wahlen);
      break;
    case 3:
      gesamtMl+=200;
      gesamtProzent+=12;
      printer();
      scanf("%i",&wahlen);
      break;
    case 4:
      gesamtMl+=20;
      gesamtProzent+=37;
      printer();
      scanf("%i",&wahlen);
      break;
    case 5:
        gesamtMl+=20;
        gesamtProzent+=40;
        printer();
        scanf("%i",&wahlen);
        break;
    case 6:
        gesamtMl+=40;
        gesamtProzent+=37;
        printer();
        scanf("%i",&wahlen);
        break;
    case 7:
        gesamtMl+=40;
        gesamtProzent+=40;
        printer();
        scanf("%i",&wahlen);
        break;
    case 8:
        wahlen+=8;
        break;
    default:
        printf("Falsche Wahl es soll zwischen 1 und 8 sein!!");
        printer();
        break;
  }
}

double gesamtPromilie;

  if(sex=='m'){ 
    gesamtPromilie = ((gesamtMl*gesamtProzent*0.8)/(weigth*0.7))/100;
    printf("Ihr Promillegehalt betragt:%g Promilie",gesamtPromilie);
  
  }else{
    gesamtPromilie = ((gesamtMl*gesamtProzent*0.8)/(weigth*0.6))/100;
    printf("Ihr Promillegehalt betragt:%g Promilie",gesamtPromilie);
  
  }

  return 0;
}
