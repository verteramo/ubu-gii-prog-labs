#include <stdio.h>
#include <stdlib.h>


int pideLargo(unsigned *l);
int leeNatural(unsigned *n);
int calculaAreaRectangulo(unsigned l, unsigned w);
void calculaVolumenParalelepipedo(unsigned l, unsigned w, unsigned h, unsigned *area);
int escribeNatural(unsigned natural);

/**
 * Escribe un número natural
 * en base 10, y devuelve el número
 * de caracteres escritos en pantalla
 *
 * @param n Número natural
 * @return  Número de caracteres
 */
int escribeNatural(unsigned n) {
  return printf("%d", n);
}

int main() {
  //int largo, ancho, alto;
  //int ok;
  //int volumen, area;
  
  //pideLargo(&largo);
  //pideAncho(&ancho);
  //ok = leeNatural(&alto);
  
  //area = calculaAreaParalelepipedo(largo, ancho, alto);

  //calculaVolumenParalelepipedo(largo, ancho, alto, &volumen);

  //printf(" y su superficie exterior es ");
  //escribeNatural(area);
  //printf("\n");

  int escrito = escribeNatural(10);

  printf("\nescritos: %d\n", escrito);
  

  return EXIT_SUCCESS;
}


