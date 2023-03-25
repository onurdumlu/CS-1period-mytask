#include <stdio.h>
    // bu program verilen bir matris uzerinde hareket etmeyi modellemelidir. R, L, U ve D sembolleri sirayla
    // right (sag), left (sol), up (yukari) ve down (asagi) yonlerini temsil eder.
    // matrix degiskeni iki boyutlu bir char dizisidir. 4 satir ve 4 sutundan olusur.
    // matrise yalnizca ust taraftan girilip alt taraftan cikilabilir. yanlardan giris ve cikis yasaklanmistir.
    // sinirdaki hucrelerdeyken disari dogru yonelme olursa matristen disari cikilir ancak bu yalnizca alt tarafta 
    // meydana gelebilir.
    // eger matrisin ust tarafindan herhangi bir hucreden girilip alt tarafindaki herhangi bir hucreden
    // cikilabiliyorsa ekrana 1, bu mumkun degilse ekrana 0 yazar.
    // kod 5x5, 6x6 vb. matrislerle uyumludur.
int main() {
    int boyutx=0, boyuty=0, kontrol=0, a=0, x=0, y=0;
    char matrix[4][4] = 
    {
        {'D', 'R', 'D', 'L'}, 
        {'L', 'L', 'D', 'R'}, 
        {'D', 'L', 'L', 'R'}, 
        {'R', 'R', 'R', 'D'}
    };
    
    for(int k=0;k>=0;k++){ //Boyutu bulur
        if(matrix[k][0]== 'D') continue;
        if(matrix[k][0]== 'U') continue;
        if(matrix[k][0]== 'R') continue;
        if(matrix[k][0]== 'L') continue;
        else {
            boyuty=k;
            break;
        }
    }
    boyutx=boyuty;
    for(int j=0;j<boyutx;j++){ //ustten sirayla dener
        a=0;
        x=j;
        y=0;
        while(a==0){ //yolu izler
            if(x<0) a=1;
            if(x>=boyutx) a=1;
            if(y<0) a=1;
            if(y>=boyuty){
                kontrol=kontrol+1;
                a=1;
            }
            if(matrix[y][x]=='D'){
                y=y+1;
                continue;
            }
            if(matrix[y][x]=='U'){
                y=y-1;
                continue;
            }
            if(matrix[y][x]=='R'){
                x=x+1;
                continue;
            }
            if(matrix[y][x]=='L'){
                x=x-1;
                continue;
            }
            
        }
        
    }
    if(kontrol==0) printf("0");//sonucu verir
    else printf("1");
    
    return 0;
}



        
