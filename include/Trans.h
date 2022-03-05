
/*
/**************************************************************
 *                                                            *
 *                     Done By: ApoAlquaary                   *
 *            Github: https://github.com/ApoAlquaary          *
 *                    Date: 27/10/2021                        *
 * 				   	 									                              *
 *************************************************************/


#ifndef __TRANS__
#define __TRANS__

void print_image(float **image, int size);
void translate(float **image, int size, int startX, int startY, int endX
	, int endY, int	width, int height);
float **create_matrix(int height, int width);
float **extract_feature(float **image, int img_size, int X, int Y, int height, int width);



#endif
