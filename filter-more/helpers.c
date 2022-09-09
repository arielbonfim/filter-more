#include <math.h>
#include <stdio.h>
#include "helpers.h"


// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    float average;
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            average = (float) ((image[i][j].rgbtBlue) + (image[i][j].rgbtGreen) + (image[i][j].rgbtRed)) /3;
            image[i][j].rgbtBlue = round(average);
            image[i][j].rgbtGreen = round(average);
            image[i][j].rgbtRed = round(average);
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp;
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < round(width / 2); j++)
        {
            temp = image[i][j];
            image[i][j] = image[i][width - 1 - j];
            image[i][width- 1 - j] = temp;
        }
    }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            temp[i][j] = image[i][j];
    for (int h = 0; h < height; h++)
        for(int w = 0; w < width; w++)
        {
            int tempBlue = 0;
            int tempGreen = 0;
            int tempRed = 0;
            int count = 0;

            for(int x = 0; x < 3; x++)
                for (int y = 0; y < 3; y++)
                {
                    if(h - 1 + x < 0 || h + x > height || w - 1 + y < 0 || w + y > width)
                        continue;
                    else
                    {
                        tempBlue = tempBlue + image[h - 1 + x][w - 1 + y].rgbtBlue;
                        tempGreen = tempGreen + image[h - 1 + x][w - 1 + y].rgbtGreen;
                        tempRed = tempRed + image[h - 1 + x][w - 1 + y].rgbtRed;
                        count++;
                    }
                }
            int blue = round((double)tempBlue / count);
            int green = round((double)tempGreen / count);
            int red = round((double)tempRed / count);
            if(blue > 255)
                blue = 255;
            if(green > 255)
                green = 255;
            if(red > 255)
                red = 255;
            temp[h][w].rgbtBlue = blue;
            temp[h][w].rgbtGreen = green;
            temp[h][w].rgbtRed = red;


        }

    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
             image[i][j] = temp[i][j];
    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
            temp[i][j] = image[i][j];
    int gx[3][3] = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
    int gy[3][3] = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};
    for (int h = 0; h < height; h++)
        for(int w = 0; w < width; w++)
        {
            int tempxBlue = 0;
            int tempxGreen = 0;
            int tempxRed = 0;
            int tempyBlue = 0;
            int tempyGreen = 0;
            int tempyRed = 0;

            for(int x = 0; x < 3; x++)
                for (int y = 0; y < 3; y++)
                {
                    if(h - 1 + x < 0 || h + x > height || w - 1 + y < 0 || w + y > width)
                        continue;
                    else
                    {
                        tempxBlue = tempxBlue + (image[h - 1 + x][w - 1 + y].rgbtBlue * gx[x][y]);
                        tempxGreen = tempxGreen + (image[h - 1 + x][w - 1 + y].rgbtGreen * gx[x][y]);
                        tempxRed = tempxRed + (image[h - 1 + x][w - 1 + y].rgbtRed * gx[x][y]);
                        tempyBlue = tempyBlue + (image[h - 1 + x][w - 1 + y].rgbtBlue * gy[x][y]);
                        tempyGreen = tempyGreen + (image[h - 1 + x][w - 1 + y].rgbtGreen * gy[x][y]);
                        tempyRed = tempyRed + (image[h - 1 + x][w - 1 + y].rgbtRed * gy[x][y]);
                    }
                }
            int blue = round(sqrt(pow(tempxBlue, 2) + pow(tempyBlue, 2)));
            int green = round(sqrt(pow(tempxGreen, 2) + pow(tempyGreen, 2)));
            int red = round(sqrt(pow(tempxRed, 2) + pow(tempyRed, 2)));
            if(blue > 255)
                blue = 255;
            if(green > 255)
                green = 255;
            if(red > 255)
                red = 255;
            temp[h][w].rgbtBlue = blue;
            temp[h][w].rgbtGreen = green;
            temp[h][w].rgbtRed = red;


        }
    for (int i = 0; i < height; i++)
        for (int j = 0; j < width; j++)
             image[i][j] = temp[i][j];
    return;
}
