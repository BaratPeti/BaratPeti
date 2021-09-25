#include <stdio.h>
int hanyadiklendulet(int cel) {
    float magassag=0;
    int lendulet=0;
    int kor=1;
    while (magassag<cel) {
        magassag=magassag+(kor*10);
        magassag=magassag-(magassag*0,1);
        kor++;
        lendulet++;
    }
    return lendulet;
}

int main() {

    int be;
    for (int i=0;i<20;i++) {
        scanf("%d", &be);
        printf("cel : %dm lendulet: %d\n", be, hanyadiklendulet(be));
    }
    return 0;
}
