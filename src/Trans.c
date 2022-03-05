


/*
/**************************************************************
 *                                                            *
 *                     Done By: ApoAlquaary                   *
 *            Github: https://github.com/ApoAlquaary          *
 *                    Date: 27/10/2021                        *
 * 				   	 									                              *
 *************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include "Trans.h"


void translate(float **image, int size, int startX, int startY, int width,
	int height, int transformed_X, int transformed_Y){

	int i, j, temp_start_X, temp_start_y, trans_ind_X, trans_ind_y;

	startY = size - startY - 1;
	transformed_Y = size - transformed_Y - 1;

	float **features = extract_feature(image, size, startX, startY, height, width);

	temp_start_X = startX;
	temp_start_y = startY;

	trans_ind_X = transformed_X;
	trans_ind_y = transformed_Y;

	for(i = 0; i < height; i++){
		for(j = 0; j < width; j++){

			image[trans_ind_y][trans_ind_X] = features[i][j];
			trans_ind_X++;
		}
		trans_ind_y--;
		trans_ind_X = transformed_X;
	}

}


void print_image(float **image, int size){

	int i, j;
	for (i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++){
			printf("%.2f\t", image[i][j]);
		}
		printf("\n");
	}
}

float **create_matrix(int height, int width){

	int i, j, counterX, counterY;
	float **image;

	int tempX = width - 1;
	int tempY = height - 1;

	counterX = 0;
	counterY = tempY;

	image = (float**)malloc(sizeof(float*) * height);

	for (i = 0; i < height; i++)
	{
		image[i] = (float*)malloc(sizeof(float) * width);
	}
	int counter = 0;
	for(i = 0; i < height; i++){
		for (j = 0; j < width; j++)
		{
			image[counterY][counterX] = counter;
			counter++;
			counterX++;
		}
		counterX = 0;
		counterY--;
	}


	return image;
}

float **extract_feature(float **image, int img_size, int X, int Y, int height, int width){

	int i,j, counterX, counterY;
	float **feature_matrix;

	counterX = X;
	counterY = Y;

	feature_matrix = (float**)malloc(sizeof(float*) * height);
	for (i = 0; i < height; i++)
	{
		feature_matrix[i] = (float*)malloc(sizeof(float) * width);
	}

	for(i = 0; i < height; i++){
		for (j = 0; j < width; j++)
		{
			feature_matrix[i][j] = image[counterY][counterX];
			counterX++;
		}
		counterX = X;
		counterY--;
	}
	return feature_matrix;
}
