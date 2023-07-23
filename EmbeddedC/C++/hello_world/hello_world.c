#include<stdio.h>
#include<stdint.h>

#define PHUCD(a,b) \
                    (( a > b) ? ( a ) : ( b ))
char name[] = "Cao Dai Phuc";
char tuoi[2] = "26";    
char gioi_tinh[3] = { 'N','A','M' }; 
char *str = "hello world";

uint16_t g_days    = 1329;
uint8_t  g_years   =    0;
uint8_t  g_weeks   =    0;
uint8_t  g_rem_day =    0; 

int main( ){
    
    g_years =   g_days/365;
 //   g_days  = ( g_days - g_years*365 );
    g_weeks = ( ( g_days%365 ) /7 );
    g_rem_day  = ( g_days -  ( g_years )*365  - g_weeks*7 );

    printf(" %d,  %d , %d", g_years, g_weeks, g_rem_day );
    return 0;
}