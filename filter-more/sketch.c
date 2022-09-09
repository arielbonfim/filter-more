//the code below is just a sketch and it's not in use.
//edge
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE tempx;
    RGBTRIPLE tempy;
    for (int h = 0; h < height; h++)
    {
        for(int w = 0; w < width; w++)
        {
            if (h == 0 && w == 0)
            {
                tempx.rgbtBlue = 0 * (image[h][w].rgbtBlue) + 00 + 00 + 00 + 0 * (image[h + 1][w].rgbtBlue) + 00 + 2 * (image[h][w + 1].rgbtBlue) + 1 * (image[h + 1][w + 1].rgbtBlue) + 00;
                tempy.rgbtBlue = 0 * (image[h][w].rgbtBlue) + 00 + 00 + 00 + 2 * (image[h + 1][w].rgbtBlue) + 00 + 0 * (image[h][w + 1].rgbtBlue) + 1 * (image[h + 1][w + 1].rgbtBlue) + 00;
                image[h][w].rgbtBlue = round(sqrt(pow(tempx.rgbtBlue, 2) + pow(tempy.rgbtBlue, 2)));
                tempx.rgbtRed = 0 * (image[h][w].rgbtRed) + 00 + 00 + 00 + 0 * (image[h + 1][w].rgbtRed) + 00 + 2 * (image[h][w + 1].rgbtRed) + 1 * (image[h + 1][w + 1].rgbtRed) + 00;
                tempy.rgbtRed = 0 * (image[h][w].rgbtRed) + 00 + 00 + 00 + 2 * (image[h + 1][w].rgbtRed) + 00 + 0 * (image[h][w + 1].rgbtRed) + 1 * (image[h + 1][w + 1].rgbtRed) + 00;
                image[h][w].rgbtRed = round(sqrt(pow(tempx.rgbtRed, 2) + pow(tempy.rgbtRed, 2)));
                tempx.rgbtGreen = 0 * (image[h][w].rgbtGreen) + 00 + 00 + 00 + 0 * (image[h + 1][w].rgbtGreen) + 00 + 2 * (image[h][w + 1].rgbtGreen) + 1 * (image[h + 1][w + 1].rgbtGreen) + 00;
                tempy.rgbtGreen = 0 * (image[h][w].rgbtGreen) + 00 + 00 + 00 + 2 * (image[h + 1][w].rgbtGreen) + 00 + 0 * (image[h][w + 1].rgbtGreen) + 1 * (image[h + 1][w + 1].rgbtGreen) + 00;
                image[h][w].rgbtGreen = round(sqrt(pow(tempx.rgbtGreen, 2) + pow(tempy.rgbtGreen, 2)));
            }
            else if (h == 0 && w == width - 1)
            {
                tempx.rgbtBlue = 0 * (image[h][w].rgbtBlue) + -2 * (image[h][w - 1].rgbtBlue) + -1 * (image[h + 1][w - 1].rgbtBlue) + 0 * (image[h + 1][w].rgbtBlue);
                tempy.rgbtBlue = 0 * (image[h][w].rgbtBlue) + 0 * (image[h][w - 1].rgbtBlue) + 1 * (image[h + 1][w - 1].rgbtBlue) + 2 * (image[h + 1][w].rgbtBlue);
                image[h][w].rgbtBlue = round(sqrt(pow(tempx.rgbtBlue, 2) + pow(tempy.rgbtBlue, 2)));
                tempx.rgbtRed = 0 * (image[h][w].rgbtRed) + -2 * (image[h][w - 1].rgbtRed) + -1 * (image[h + 1][w - 1].rgbtRed) + 0 * (image[h + 1][w].rgbtRed);
                tempy.rgbtRed = 0 * (image[h][w].rgbtRed) + 0 * (image[h][w - 1].rgbtRed) + 1 * (image[h + 1][w - 1].rgbtRed) + 2 * (image[h + 1][w].rgbtRed);
                image[h][w].rgbtRed = round(sqrt(pow(tempx.rgbtRed, 2) + pow(tempy.rgbtRed, 2)));
                tempx.rgbtGreen = 0 * (image[h][w].rgbtGreen) + -2 * (image[h][w - 1].rgbtGreen) + -1 * (image[h + 1][w - 1].rgbtGreen) + 0 * (image[h + 1][w].rgbtGreen);
                tempy.rgbtGreen = 0 * (image[h][w].rgbtGreen) + 0 * (image[h][w - 1].rgbtGreen) + 1 * (image[h + 1][w - 1].rgbtGreen) + 2 * (image[h + 1][w].rgbtGreen);
                image[h][w].rgbtGreen = round(sqrt(pow(tempx.rgbtGreen, 2) + pow(tempy.rgbtGreen, 2)));
            }
            else if (h == height - 1 && w == width - 1)
            {
                tempx.rgbtBlue = 0 * (image[h][w].rgbtBlue) + -2 * (image[h][w - 1].rgbtBlue) + -1 * (image[h - 1][w - 1].rgbtBlue) + 0 * (image[h - 1][w].rgbtBlue);
                tempy.rgbtBlue = 0 * (image[h][w].rgbtBlue) + 0 * (image[h][w - 1].rgbtBlue) + -1 * (image[h - 1][w - 1].rgbtBlue) + -2 * (image[h - 1][w].rgbtBlue);
                image[h][w].rgbtBlue = round(sqrt(pow(tempx.rgbtBlue, 2) + pow(tempy.rgbtBlue, 2)));
                tempx.rgbtRed = 0 * (image[h][w].rgbtRed) + -2 * (image[h][w - 1].rgbtRed) + -1 * (image[h - 1][w - 1].rgbtRed) + 0 * (image[h - 1][w].rgbtRed);
                tempy.rgbtRed = 0 * (image[h][w].rgbtRed) + 0 * (image[h][w - 1].rgbtRed) + -1 * (image[h - 1][w - 1].rgbtRed) + -2 * (image[h - 1][w].rgbtRed);
                image[h][w].rgbtRed = round(sqrt(pow(tempx.rgbtRed, 2) + pow(tempy.rgbtRed, 2)));
                tempx.rgbtGreen = 0 * (image[h][w].rgbtGreen) + -2 * (image[h][w - 1].rgbtGreen) + -1 * (image[h - 1][w - 1].rgbtGreen) + 0 * (image[h - 1][w].rgbtGreen);
                tempy.rgbtGreen = 0 * (image[h][w].rgbtGreen) + 0 * (image[h][w - 1].rgbtGreen) + -1 * (image[h - 1][w - 1].rgbtGreen) + -2 * (image[h - 1][w].rgbtGreen);
                image[h][w].rgbtGreen = round(sqrt(pow(tempx.rgbtGreen, 2) + pow(tempy.rgbtGreen, 2)));
            }
            else if (h == height - 1 && w == 0)
            {
                tempx.rgbtBlue = 0 * (image[h][w].rgbtBlue) + 0 * (image[h - 1][w].rgbtBlue) + 2 * (image[h][w + 1].rgbtBlue) + 1 * (image[h - 1][w + 1].rgbtBlue);
                tempy.rgbtBlue = 0 * (image[h][w].rgbtBlue) + -2 * (image[h - 1][w].rgbtBlue) + 0 * (image[h][w + 1].rgbtBlue) + -1 * (image[h - 1][w + 1].rgbtBlue);
                image[h][w].rgbtBlue = round(sqrt(pow(tempx.rgbtBlue, 2) + pow(tempy.rgbtBlue, 2)));
                tempx.rgbtRed = 0 * (image[h][w].rgbtRed) + 0 * (image[h - 1][w].rgbtRed) + 2 * (image[h][w + 1].rgbtRed) + 1 * (image[h - 1][w + 1].rgbtRed);
                tempy.rgbtRed = 0 * (image[h][w].rgbtRed) + -2 * (image[h - 1][w].rgbtRed) + 0 * (image[h][w + 1].rgbtRed) + -1 * (image[h - 1][w + 1].rgbtRed);
                image[h][w].rgbtRed = round(sqrt(pow(tempx.rgbtRed, 2) + pow(tempy.rgbtRed, 2)));
                tempx.rgbtGreen = 0 * (image[h][w].rgbtGreen) + 0 * (image[h - 1][w].rgbtGreen) + 2 * (image[h][w + 1].rgbtGreen) + 1 * (image[h - 1][w + 1].rgbtGreen);
                tempy.rgbtGreen = 0 * (image[h][w].rgbtGreen) + -2 * (image[h - 1][w].rgbtGreen) + 0 * (image[h][w + 1].rgbtGreen) + -1 * (image[h - 1][w + 1].rgbtGreen);
                image[h][w].rgbtGreen = round(sqrt(pow(tempx.rgbtGreen, 2) + pow(tempy.rgbtGreen, 2)));
            }
            else if (h == 0)
            {
                tempx.rgbtBlue = 0 * (image[h][w].rgbtBlue) + -2 * (image[h][w - 1].rgbtBlue) + -1 * (image[h + 1][w - 1].rgbtBlue) + 0 * (image[h + 1][w].rgbtBlue) + 2 * (image[h][w + 1].rgbtBlue) + 1 * (image[h + 1][w + 1].rgbtBlue);
                tempy.rgbtBlue = 0 * (image[h][w].rgbtBlue) + 0 * (image[h][w - 1].rgbtBlue) + 1 * (image[h + 1][w - 1].rgbtBlue) + 2 * (image[h + 1][w].rgbtBlue) + 0 * (image[h][w + 1].rgbtBlue) + 1 * (image[h + 1][w + 1].rgbtBlue);
                image[h][w].rgbtBlue = round(sqrt(pow(tempx.rgbtBlue, 2) + pow(tempy.rgbtBlue, 2)));
                tempx.rgbtRed = 0 * (image[h][w].rgbtRed) + -2 * (image[h][w - 1].rgbtRed) + -1 * (image[h + 1][w - 1].rgbtRed) + 0 * (image[h + 1][w].rgbtRed) + 2 * (image[h][w + 1].rgbtRed) + 1 * (image[h + 1][w + 1].rgbtRed);
                tempy.rgbtRed = 0 * (image[h][w].rgbtRed) + 0 * (image[h][w - 1].rgbtRed) + 1 * (image[h + 1][w - 1].rgbtRed) + 2 * (image[h + 1][w].rgbtRed) + 0 * (image[h][w + 1].rgbtRed) + 1 * (image[h + 1][w + 1].rgbtRed);
                image[h][w].rgbtRed = round(sqrt(pow(tempx.rgbtRed, 2) + pow(tempy.rgbtRed, 2)));
                tempx.rgbtGreen = 0 * (image[h][w].rgbtGreen) + -2 * (image[h][w - 1].rgbtGreen) + -1 * (image[h + 1][w - 1].rgbtGreen) + 0 * (image[h + 1][w].rgbtGreen) + 2 * (image[h][w + 1].rgbtGreen) + 1 * (image[h + 1][w + 1].rgbtGreen);
                tempy.rgbtGreen = 0 * (image[h][w].rgbtGreen) + 0 * (image[h][w - 1].rgbtGreen) + 1 * (image[h + 1][w - 1].rgbtGreen) + 2 * (image[h + 1][w].rgbtGreen) + 0 * (image[h][w + 1].rgbtGreen) + 1 * (image[h + 1][w + 1].rgbtGreen);
                image[h][w].rgbtGreen = round(sqrt(pow(tempx.rgbtGreen, 2) + pow(tempy.rgbtGreen, 2)));
            }
            else if (h == height - 1)
            {
                tempx.rgbtBlue = 0 * (image[h][w].rgbtBlue) + -2 * (image[h][w - 1].rgbtBlue) + -1 * (image[h - 1][w - 1].rgbtBlue) + 0 * (image[h - 1][w].rgbtBlue) + 2 * (image[h][w + 1].rgbtBlue) + 1 * (image[h - 1][w + 1].rgbtBlue);
                tempy.rgbtBlue = 0 * (image[h][w].rgbtBlue) + 0 * (image[h][w - 1].rgbtBlue) + -1 * (image[h - 1][w - 1].rgbtBlue) + -2 * (image[h - 1][w].rgbtBlue) + 0 * (image[h][w + 1].rgbtBlue) + -1 * (image[h - 1][w + 1].rgbtBlue);
                image[h][w].rgbtBlue = round(sqrt(pow(tempx.rgbtBlue, 2) + pow(tempy.rgbtBlue, 2)));
                tempx.rgbtRed = 0 * (image[h][w].rgbtRed) + -2 * (image[h][w - 1].rgbtRed) + -1 * (image[h - 1][w - 1].rgbtRed) + 0 * (image[h - 1][w].rgbtRed) + 2 * (image[h][w + 1].rgbtRed) + 1 * (image[h - 1][w + 1].rgbtRed);
                tempy.rgbtRed = 0 * (image[h][w].rgbtRed) + 0 * (image[h][w - 1].rgbtRed) + -1 * (image[h - 1][w - 1].rgbtRed) + -2 * (image[h - 1][w].rgbtRed) + 0 * (image[h][w + 1].rgbtRed) + -1 * (image[h - 1][w + 1].rgbtRed);
                image[h][w].rgbtRed = round(sqrt(pow(tempx.rgbtRed, 2) + pow(tempy.rgbtRed, 2)));
                tempx.rgbtGreen = 0 * (image[h][w].rgbtGreen) + -2 * (image[h][w - 1].rgbtGreen) + -1 * (image[h - 1][w - 1].rgbtGreen) + 0 * (image[h - 1][w].rgbtGreen) + 2 * (image[h][w + 1].rgbtGreen) + 1 * (image[h - 1][w + 1].rgbtGreen);
                tempy.rgbtGreen = 0 * (image[h][w].rgbtGreen) + 0 * (image[h][w - 1].rgbtGreen) + -1 * (image[h - 1][w - 1].rgbtGreen) + -2 * (image[h - 1][w].rgbtGreen) + 0 * (image[h][w + 1].rgbtGreen) + -1 * (image[h - 1][w + 1].rgbtGreen);
                image[h][w].rgbtGreen = round(sqrt(pow(tempx.rgbtGreen, 2) + pow(tempy.rgbtGreen, 2)));
            }
            else if (w == 0)
            {
                tempx.rgbtBlue = 0 * (image[h][w].rgbtBlue) + 0 * (image[h + 1][w].rgbtBlue) + 0 * (image[h - 1][w].rgbtBlue) + 2 * (image[h][w + 1].rgbtBlue) + 1 * (image[h + 1][w + 1].rgbtBlue) + 1 * (image[h - 1][w + 1].rgbtBlue);
                tempy.rgbtBlue = 0 * (image[h][w].rgbtBlue) + 2 * (image[h + 1][w].rgbtBlue) + -2 * (image[h - 1][w].rgbtBlue) + 0 * (image[h][w + 1].rgbtBlue) + 1 * (image[h + 1][w + 1].rgbtBlue) + -1 * (image[h - 1][w + 1].rgbtBlue);
                image[h][w].rgbtBlue = round(sqrt(pow(tempx.rgbtBlue, 2) + pow(tempy.rgbtBlue, 2)));
                tempx.rgbtRed = 0 * (image[h][w].rgbtRed) + 0 * (image[h + 1][w].rgbtRed) + 0 * (image[h - 1][w].rgbtRed) + 2 * (image[h][w + 1].rgbtRed) + 1 * (image[h + 1][w + 1].rgbtRed) + 1 * (image[h - 1][w + 1].rgbtRed);
                tempy.rgbtRed = 0 * (image[h][w].rgbtRed) + 2 * (image[h + 1][w].rgbtRed) + -2 * (image[h - 1][w].rgbtRed) + 0 * (image[h][w + 1].rgbtRed) + 1 * (image[h + 1][w + 1].rgbtRed) + -1 * (image[h - 1][w + 1].rgbtRed);
                image[h][w].rgbtRed = round(sqrt(pow(tempx.rgbtRed, 2) + pow(tempy.rgbtRed, 2)));
                tempx.rgbtGreen = 0 * (image[h][w].rgbtGreen) + 0 * (image[h + 1][w].rgbtGreen) + 0 * (image[h - 1][w].rgbtGreen) + 2 * (image[h][w + 1].rgbtGreen) + 1 * (image[h + 1][w + 1].rgbtGreen) + 1 * (image[h - 1][w + 1].rgbtGreen);
                tempy.rgbtGreen = 0 * (image[h][w].rgbtGreen) + 2 * (image[h + 1][w].rgbtGreen) + -2 * (image[h - 1][w].rgbtGreen) + 0 * (image[h][w + 1].rgbtGreen) + 1 * (image[h + 1][w + 1].rgbtGreen) + -1 * (image[h - 1][w + 1].rgbtGreen);
                image[h][w].rgbtGreen = round(sqrt(pow(tempx.rgbtGreen, 2) + pow(tempy.rgbtGreen, 2)));
            }
            else if (w == width - 1)
            {
                tempx.rgbtBlue = 0 * (image[h][w].rgbtBlue) + -2 * (image[h][w - 1].rgbtBlue) + -1 * (image[h + 1][w - 1].rgbtBlue) + -1 * (image[h - 1][w - 1].rgbtBlue) + 0 * (image[h + 1][w].rgbtBlue) + 0 * (image[h - 1][w].rgbtBlue);
                tempy.rgbtBlue = 0 * (image[h][w].rgbtBlue) + 0 * (image[h][w - 1].rgbtBlue) + 1 * (image[h + 1][w - 1].rgbtBlue) + -1 * (image[h - 1][w - 1].rgbtBlue) + 2 * (image[h + 1][w].rgbtBlue) + -2 * (image[h - 1][w].rgbtBlue);
                image[h][w].rgbtBlue = round(sqrt(pow(tempx.rgbtBlue, 2) + pow(tempy.rgbtBlue, 2)));
                tempx.rgbtRed = 0 * (image[h][w].rgbtRed) + -2 * (image[h][w - 1].rgbtRed) + -1 * (image[h + 1][w - 1].rgbtRed) + -1 * (image[h - 1][w - 1].rgbtRed) + 0 * (image[h + 1][w].rgbtRed) + 0 * (image[h - 1][w].rgbtRed);
                tempy.rgbtRed = 0 * (image[h][w].rgbtRed) + 0 * (image[h][w - 1].rgbtRed) + 1 * (image[h + 1][w - 1].rgbtRed) + -1 * (image[h - 1][w - 1].rgbtRed) + 2 * (image[h + 1][w].rgbtRed) + -2 * (image[h - 1][w].rgbtRed);
                image[h][w].rgbtRed = round(sqrt(pow(tempx.rgbtRed, 2) + pow(tempy.rgbtRed, 2)));
                tempx.rgbtGreen = 0 * (image[h][w].rgbtGreen) + -2 * (image[h][w - 1].rgbtGreen) + -1 * (image[h + 1][w - 1].rgbtGreen) + -1 * (image[h - 1][w - 1].rgbtGreen) + 0 * (image[h + 1][w].rgbtGreen) + 0 * (image[h - 1][w].rgbtGreen);
                tempy.rgbtGreen = 0 * (image[h][w].rgbtGreen) + 0 * (image[h][w - 1].rgbtGreen) + 1 * (image[h + 1][w - 1].rgbtGreen) + -1 * (image[h - 1][w - 1].rgbtGreen) + 2 * (image[h + 1][w].rgbtGreen) + -2 * (image[h - 1][w].rgbtGreen);
                image[h][w].rgbtGreen = round(sqrt(pow(tempx.rgbtGreen, 2) + pow(tempy.rgbtGreen, 2)));
            }
            else
            {
                tempx.rgbtBlue = 0 * image[h][w].rgbtBlue - 2 * image[h][w - 1].rgbtBlue - 1 * image[h + 1][w - 1].rgbtBlue - 1 * image[h - 1][w - 1].rgbtBlue + 0 * image[h + 1][w].rgbtBlue + 0 * image[h - 1][w].rgbtBlue + 2 * image[h][w + 1].rgbtBlue + 1 * image[h + 1][w + 1].rgbtBlue + 1 * image[h - 1][w + 1].rgbtBlue;
                printf("n: %i",tempx.rgbtBlue);
                break;
                tempy.rgbtBlue = 0 * image[h][w].rgbtBlue + 0 * image[h][w - 1].rgbtBlue + 1 * image[h + 1][w - 1].rgbtBlue - 1 * image[h - 1][w - 1].rgbtBlue + 2 * image[h + 1][w].rgbtBlue - 2 * image[h - 1][w].rgbtBlue + 0 * image[h][w + 1].rgbtBlue + 1 * image[h + 1][w + 1].rgbtBlue - 1 * image[h - 1][w + 1].rgbtBlue;
                image[h][w].rgbtBlue = (int)round(sqrt((tempx.rgbtBlue * tempx.rgbtBlue) + (tempy.rgbtBlue * tempy.rgbtBlue)));
                if((int)image[h][w].rgbtBlue > 255)
                    image[h][w].rgbtBlue = 0;
                tempx.rgbtRed = ((0 * (image[h][w].rgbtRed)) + (-2 * (image[h][w - 1].rgbtRed)) + (-1 * (image[h + 1][w - 1].rgbtRed)) + (-1 * (image[h - 1][w - 1].rgbtRed)) + (0 * (image[h + 1][w].rgbtRed)) + (0 * (image[h - 1][w].rgbtRed)) + (2 * (image[h][w + 1].rgbtRed)) + (1 * (image[h + 1][w + 1].rgbtRed)) + (1 * (image[h - 1][w + 1].rgbtRed)));
                tempy.rgbtRed = ((0 * (image[h][w].rgbtRed)) + (0 * (image[h][w - 1].rgbtRed)) + (1 * (image[h + 1][w - 1].rgbtRed)) + (-1 * (image[h - 1][w - 1].rgbtRed)) + (2 * (image[h + 1][w].rgbtRed)) + (-2 * (image[h - 1][w].rgbtRed)) + (0 * (image[h][w + 1].rgbtRed)) + (1 * (image[h + 1][w + 1].rgbtRed)) + (-1 * (image[h - 1][w + 1].rgbtRed)));
                image[h][w].rgbtRed = (int)round(sqrt((tempx.rgbtRed * tempx.rgbtRed) + (tempy.rgbtRed * tempy.rgbtRed)));
                if((int)image[h][w].rgbtRed > 255)
                    image[h][w].rgbtRed = 0;
                tempx.rgbtGreen = ((0 * (image[h][w].rgbtGreen)) + (-2 * (image[h][w - 1].rgbtGreen)) + (-1 * (image[h + 1][w - 1].rgbtGreen)) + (-1 * (image[h - 1][w - 1].rgbtGreen)) + (0 * (image[h + 1][w].rgbtGreen)) + (0 * (image[h - 1][w].rgbtGreen)) + (2 * (image[h][w + 1].rgbtGreen)) + (1 * (image[h + 1][w + 1].rgbtGreen)) + (1 * (image[h - 1][w + 1].rgbtGreen)));
                tempy.rgbtGreen = ((0 * (image[h][w].rgbtGreen)) + (0 * (image[h][w - 1].rgbtGreen)) + (1 * (image[h + 1][w - 1].rgbtGreen)) + (-1 * (image[h - 1][w - 1].rgbtGreen)) + (2 * (image[h + 1][w].rgbtGreen)) + (-2 * (image[h - 1][w].rgbtGreen)) + (0 * (image[h][w + 1].rgbtGreen)) + (1 * (image[h + 1][w + 1].rgbtGreen)) + (-1 * (image[h - 1][w + 1].rgbtGreen)));
                image[h][w].rgbtGreen = round(sqrt((tempx.rgbtGreen * tempx.rgbtGreen) + (tempy.rgbtGreen * tempy.rgbtGreen)));
                if((int)image[h][w].rgbtGreen > 255)
                    image[h][w].rgbtGreen = 0;
            }


        }
    }
    return;
}

            if (h == 0 && w == 0)
            {

            }
            else if (h == 0 && w == width - 1)
            {

            }
            else if (h == height - 1 && w == width - 1)
            {

            }
            else if (h == height - 1 && w == 0)
            {

            }
            else if (h == 0)
            {

            }
            else if (h == height - 1)
            {

            }
            else if (w == 0)
            {

            }
            else if (w == width - 1)
            {

            }
            else
            {

            }

            //blur

            double temprgbtBlue;
    double temprgbtRed;
    double temprgbtGreen;
    for (int h = 0; h < height; h++)
    {
        for(int w = 0; w < width; w++)
        {
            if (h == 0 && w == 0)
            {
                temprgbtBlue = round((image[h][w].rgbtBlue + image[h + 1][w].rgbtBlue + image[h + 1][w + 1].rgbtBlue + image[h][w + 1].rgbtBlue)/4);
                temprgbtRed = round((image[h][w].rgbtRed + image[h + 1][w].rgbtRed + image[h + 1][w + 1].rgbtRed + image[h][w + 1].rgbtRed)/4);
                temprgbtGreen = round((image[h][w].rgbtGreen + image[h + 1][w].rgbtGreen + image[h + 1][w + 1].rgbtGreen + image[h][w + 1].rgbtGreen)/4);
                image[h][w].rgbtBlue = temprgbtBlue;
                image[h][w].rgbtGreen = temprgbtGreen;
                image[h][w].rgbtRed = temprgbtRed;
            }
            else if (h == 0 && w == width - 1)
            {
                temprgbtBlue = round((image[h][w].rgbtBlue + image[h + 1][w].rgbtBlue + image[h + 1][w - 1].rgbtBlue + image[h][w - 1].rgbtBlue)/4);
                temprgbtRed = round((image[h][w].rgbtRed + image[h + 1][w].rgbtRed + image[h + 1][w - 1].rgbtRed + image[h][w - 1].rgbtRed)/4);
                temprgbtGreen = round((image[h][w].rgbtGreen + image[h + 1][w].rgbtGreen + image[h + 1][w - 1].rgbtGreen + image[h][w - 1].rgbtGreen)/4);
                image[h][w].rgbtBlue = temprgbtBlue;
                image[h][w].rgbtGreen = temprgbtGreen;
                image[h][w].rgbtRed = temprgbtRed;
            }
            else if (h == height - 1 && w == width - 1)
            {
                temprgbtBlue = round((image[h][w].rgbtBlue + image[h - 1][w].rgbtBlue + image[h - 1][w - 1].rgbtBlue + image[h][w - 1].rgbtBlue)/4);
                temprgbtRed = round((image[h][w].rgbtRed + image[h - 1][w].rgbtRed + image[h - 1][w - 1].rgbtRed + image[h][w - 1].rgbtRed)/4);
                temprgbtGreen = round((image[h][w].rgbtGreen + image[h - 1][w].rgbtGreen + image[h - 1][w - 1].rgbtGreen + image[h][w - 1].rgbtGreen)/4);
                image[h][w].rgbtBlue = temprgbtBlue;
                image[h][w].rgbtGreen = temprgbtGreen;
                image[h][w].rgbtRed = temprgbtRed;
            }
            else if (h == height - 1 && w == 0)
            {
                temprgbtBlue = round((image[h][w].rgbtBlue + image[h - 1][w].rgbtBlue + image[h - 1][w + 1].rgbtBlue + image[h][w + 1].rgbtBlue)/4);
                temprgbtRed = round((image[h][w].rgbtRed + image[h - 1][w].rgbtRed + image[h - 1][w + 1].rgbtRed + image[h][w + 1].rgbtRed)/4);
                temprgbtGreen = round((image[h][w].rgbtGreen + image[h - 1][w].rgbtGreen + image[h - 1][w + 1].rgbtGreen + image[h][w + 1].rgbtGreen)/4);
                image[h][w].rgbtBlue = temprgbtBlue;
                image[h][w].rgbtGreen = temprgbtGreen;
                image[h][w].rgbtRed = temprgbtRed;
            }
            else if (h == 0)
            {
                temprgbtBlue = round((image[h][w].rgbtBlue + image[h + 1][w].rgbtBlue + image[h + 1][w + 1].rgbtBlue + image[h + 1][w - 1].rgbtBlue + image[h][w + 1].rgbtBlue + image[h][w - 1].rgbtBlue)/6);
                temprgbtRed = round((image[h][w].rgbtRed + image[h + 1][w].rgbtRed + image[h + 1][w + 1].rgbtRed + image[h + 1][w - 1].rgbtRed + image[h][w + 1].rgbtRed + image[h][w - 1].rgbtRed)/6);
                temprgbtGreen = round((image[h][w].rgbtGreen + image[h + 1][w].rgbtGreen + image[h + 1][w + 1].rgbtGreen + image[h + 1][w - 1].rgbtGreen + image[h][w + 1].rgbtGreen + image[h][w - 1].rgbtGreen)/6);
                image[h][w].rgbtBlue = temprgbtBlue;
                image[h][w].rgbtGreen = temprgbtGreen;
                image[h][w].rgbtRed = temprgbtRed;
            }
            else if (h == height - 1)
            {
                temprgbtBlue = round((image[h][w].rgbtBlue + image[h - 1][w].rgbtBlue + image[h - 1][w + 1].rgbtBlue + image[h - 1][w - 1].rgbtBlue + image[h][w + 1].rgbtBlue + image[h][w - 1].rgbtBlue)/6);
                temprgbtRed = round((image[h][w].rgbtRed + image[h - 1][w].rgbtRed + image[h - 1][w + 1].rgbtRed + image[h - 1][w - 1].rgbtRed + image[h][w + 1].rgbtRed + image[h][w - 1].rgbtRed)/6);
                temprgbtGreen = round((image[h][w].rgbtGreen + image[h - 1][w].rgbtGreen + image[h - 1][w + 1].rgbtGreen + image[h - 1][w - 1].rgbtGreen + image[h][w + 1].rgbtGreen + image[h][w - 1].rgbtGreen)/6);
                image[h][w].rgbtBlue = temprgbtBlue;
                image[h][w].rgbtGreen = temprgbtGreen;
                image[h][w].rgbtRed = temprgbtRed;
            }
            else if (w == 0)
            {
                temprgbtBlue = round((image[h][w].rgbtBlue + image[h][w + 1].rgbtBlue + image[h + 1][w + 1].rgbtBlue + image[h - 1][w + 1].rgbtBlue + image[h + 1][w].rgbtBlue + image[h - 1][w].rgbtBlue)/6);
                temprgbtRed = round((image[h][w].rgbtRed + image[h][w + 1].rgbtRed + image[h + 1][w + 1].rgbtRed + image[h - 1][w + 1].rgbtRed + image[h + 1][w].rgbtRed + image[h - 1][w].rgbtRed)/6);
                temprgbtGreen = round((image[h][w].rgbtGreen + image[h][w + 1].rgbtGreen + image[h + 1][w + 1].rgbtGreen + image[h - 1][w + 1].rgbtGreen + image[h + 1][w].rgbtGreen + image[h - 1][w].rgbtGreen)/6);
                image[h][w].rgbtBlue = temprgbtBlue;
                image[h][w].rgbtGreen = temprgbtGreen;
                image[h][w].rgbtRed = temprgbtRed;
            }
            else if (w == width - 1)
            {
                temprgbtBlue = round((image[h][w].rgbtBlue + image[h][w - 1].rgbtBlue + image[h + 1][w - 1].rgbtBlue + image[h - 1][w - 1].rgbtBlue + image[h + 1][w].rgbtBlue + image[h - 1][w].rgbtBlue)/6);
                temprgbtRed = round((image[h][w].rgbtRed + image[h][w - 1].rgbtRed + image[h + 1][w - 1].rgbtRed + image[h - 1][w - 1].rgbtRed + image[h + 1][w].rgbtRed + image[h - 1][w].rgbtRed)/6);
                temprgbtGreen = round((image[h][w].rgbtGreen + image[h][w - 1].rgbtGreen + image[h + 1][w - 1].rgbtGreen + image[h - 1][w - 1].rgbtGreen + image[h + 1][w].rgbtGreen + image[h - 1][w].rgbtGreen)/6);
                image[h][w].rgbtBlue = temprgbtBlue;
                image[h][w].rgbtGreen = temprgbtGreen;
                image[h][w].rgbtRed = temprgbtRed;
            }
            else
            {
                temprgbtBlue = image[h][w].rgbtBlue + image[h][w - 1].rgbtBlue + image[h + 1][w - 1].rgbtBlue + image[h - 1][w - 1].rgbtBlue + image[h + 1][w].rgbtBlue + image[h - 1][w].rgbtBlue + image[h][w + 1].rgbtBlue + image[h + 1][w + 1].rgbtBlue + image[h - 1][w + 1].rgbtBlue;
                temprgbtRed = image[h][w].rgbtRed + image[h][w - 1].rgbtRed + image[h + 1][w - 1].rgbtRed + image[h - 1][w - 1].rgbtRed + image[h + 1][w].rgbtRed + image[h - 1][w].rgbtRed + image[h][w + 1].rgbtRed + image[h + 1][w + 1].rgbtRed + image[h - 1][w + 1].rgbtRed;
                temprgbtGreen = image[h][w].rgbtGreen + image[h][w - 1].rgbtGreen + image[h + 1][w - 1].rgbtGreen + image[h - 1][w - 1].rgbtGreen + image[h + 1][w].rgbtGreen + image[h - 1][w].rgbtGreen + image[h][w + 1].rgbtGreen + image[h + 1][w + 1].rgbtGreen + image[h - 1][w + 1].rgbtGreen;
                image[h][w].rgbtBlue = round((double)temprgbtBlue/9);
                image[h][w].rgbtGreen = round((double)temprgbtGreen/9);
                image[h][w].rgbtRed = round((double)temprgbtRed/9);
            }


        }
    }
