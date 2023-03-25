#include <stdio.h>
int is_palindromic();
int main() {
    printf("%d", is_palindromic("yapay", 5));
    printf("\n%d", is_palindromic("Anastas mum satsanA", 19));
    printf("\n%d", is_palindromic("Eli bitti bile", 14));
    printf("\n%d", is_palindromic("!iMrEnSeM aDaMa mAdAm EsNeR mi", 30));
    return 0;
}

// palindromik yani tersi kendisine esit olan string'ler icin 1, olmayanlar icin 0 dondurur
// cumle yapisinda olanlar icin farkli calisir
// yalnizca unlemle baslayan cumleler icin buyuk kucuk harf ayrimi yapmaz
int is_palindromic(char string[], int n) {
    int a=0, b=n-1;
    char string2[n];
    if(string[0]=='!') {
        for(int i = 1;i < n;i++)
        {
            if(string[i] >96 & string[i] <123) string2[i] = string[i] - ('a' - 'A');
            else string2[i] = string[i];
        }
        for(int j=0;j<(n/2);j++){ //kontrol eder
        if(a==b) break;
        if(string2[a]==' ') a++;
        if(string2[b]==' ') b--;
        if(string2[a]=='\0') a++;
        if(string2[b]=='\0') b--;
        if(string2[a]!=string2[b]) return 0;
        a++;
        b--;
    }
    }
    else {
        for(int j=0;j<(n/2);j++){ //kontrol eder
        if(a==b) break;
        if(string[a]==' ') a++;
        if(string[b]==' ') b--;
        if(string[a]=='\0') a++;
        if(string[b]=='\0') b--;
        if(string[a]!=string[b]) return 0;
        a++;
        b--;
    }
    }
    return 1;
}