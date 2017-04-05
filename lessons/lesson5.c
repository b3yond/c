# include <stdio.h>

void quadrat(int *seite) {
    *seite *= *seite;
}

int main() {
    int var;
    int *ptr;
    ptr=&var;
    *ptr=10;

    printf("var=%d *ptr=%d ptr=%d\n",var,*ptr, ptr);
    printf("Adresse von var:            %p\n",&var);
    printf("Adresse auf die *ptr zeigt: %p\n",ptr);
    printf("Adresse des Zeigers ptr:    %p\n",&ptr);
    
    int x;
    printf("Bitte Seitenlänge eines Quadrats: ");
    scanf("%d",&x);
    quadrat(&x);
    printf("Die Fläche beträgt %d.\n",x);
return 0;
}
