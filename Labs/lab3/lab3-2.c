#include <stdio.h>
int main(){
    int user;
    while(user != 0 || user != 1){
    printf("Give me a number to check or 0 to shutdown: ");
    scanf("%d",&user);
    if (user == 1 || user == 0){
        return 0;}
    for(int a= 0; a < 100; a++){
        for(int b= 0; b < 10; b++){
            if (((a*8) + (b*7)) > user){
                break;}
        for(int c= 0; c < 100; c++){
            if (((a*8) + (b*7) + (c*6)) > user){
                    break;}
        for(int d= 0; d < 100; d++){
            if (((a*8) + (b*7) + (c*6) + (d*3)) > user){
                        break;}
        for(int e= 0; e < 100; e++){
            if (((a*8) + (b*7) + (c*6) + (d*3) + (e*2)) > user){
                break;
            }
            else if( ((a*8) + (b*7) + (c*6) + (d*3) + (e*2)) == user){
                printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Saftey \n",a,b,c,d,e);
            }
    }   
    }
    }
    }
    }
    }
    return 0;
}