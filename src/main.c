
/*
/**************************************************************
 *                                                            *
 *                     Done By: ApoAlquaary                   *
 *            Github: https://github.com/ApoAlquaary          *
 *                    Date: 27/10/2021                        *
 * 				   	 									                              *
 *************************************************************/





#include <stdio.h>
#include "Trans.h"



int main(int argv, char** argc){

	// the size of the image
	int size = 8;

	// create an image
	float **image = create_matrix(size, size);

	printf("Normal Image: \n");
	print_image(image, size);

	// transform
	printf("\n");
	printf("1st transform:\n");
	translate(image, size, 4, 4, 2, 2, 2, 0);
	print_image(image, size);
	printf("\n");

	// transform
	// printf("\n");
	// printf("2nd transform:\n");
	// translate(image, size, 2, 1, 3, 5, 3, 1);
	// print_image(image, size);
	// printf("\n");

	// // transform
	// printf("\n");
	// printf("3rd transform:\n");
	// translate(image, size, 1, 1, 4, 5, 3, 2);
	// print_image(image, size);
	// printf("\n");

	return 0;
}
