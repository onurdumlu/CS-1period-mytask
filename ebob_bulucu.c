#include <stdio.h>
int main() {
    printf("%d", ebob1(7, 200));
    int arrayB[] = {450, 200, 120, 100};
    printf("\n%d",ebob2(arrayB, 4));
    
    return 0;
}
// Function to find the greatest common divisor of two given numbers
// verilen iki sayinin en buyuk ortak bolenini hesaplar
int ebob1(int num1, int num2) {
    int kucuk, ebob=1;
    if (num1==0) return num2;
    if (num2==0) return num1;
    if (num1<num2) kucuk=num1;
    else kucuk=num2;
    for(int i=1 ; kucuk>=i ; i++)
        {
            if (num1%i==0 & num2%i==0) ebob=i;
        }
    return ebob;
}
//Calculates the greatest common divisor of numbers in the given sequence
// verilen dizideki sayilarin en buyuk ortak bolenini hesaplar
int ebob2(int numbers[], int n) { //buradaki n sayisi dizinin kac boyutlu oldugunu alir main fonsiyonundan
    int ebob,x, bkucuk;
    if (numbers[0]>numbers[1]) bkucuk=numbers[1];
    if (numbers[1]>numbers[0]) bkucuk=numbers[0];
    for(int q=1 ; bkucuk>=q ; q++){
            if (numbers[0]%q==0 & numbers[1]%q==0) ebob=q;
        }
    x=ebob;
    for(int j=2;j<n;j++){
        for(int k=1;k<=x;k++){
            if(x%k==0 & numbers[j]%k==0) ebob=k;
        }
    x=ebob;
    }
    return ebob;
}