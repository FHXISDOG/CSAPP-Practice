#include <stdio.h>


int bis(int x, int m) {
    return x | m;
}

int bic(int x, int m){
    return x & (~m);
}

void testBisAndBic() {
   int x = 0b1110;
   int m = 0b0011;
   int bis_z = bis(x,m);
   int bic_z = bic(x,m);
   printf("bis_z is %.2x: , bic_z is %.2x: \n", bis_z, bic_z);
}
// ============ practice ========
int bool_or(int x, int y) {
    int result = bis(x, y);
    return result;
}

//a⊕b = (¬a ∧ b) ∨ (a ∧¬b)
int bool_xor(int x , int y) {
    int result = bis(bic(x,y),bic(y,x));
    return result;
}
int main(int argc, char *argv[]) {
    return 0;
}
