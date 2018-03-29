#include "../include/ced.h"
#include <stdlib.h>

int main() {
  unsigned char *image;

  image = malloc(186 * 182 * sizeof(unsigned char));
  
  read_image_file("test.txt", image);
  convolve_image(image, gaussian_kernel, GAUSSIAN_KERNEL_SIZE);
  calculate_gradient(image);
  write_image_file("result.txt", image);
  
  free(image);
}
