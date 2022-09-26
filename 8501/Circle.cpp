#include <iostream>
const int radius = 5;
const int width = 100;
const int height = 100;
int main()
{
	int radiusSquared = radius * radius;
	int grid[height][width] = { {0} };
	for (int y = 0; y < height; y++)
	{
		bool lineComplete = false;
		for (int x = 0; x < width; x++)
		{
			int xOffset = abs(width/2 - x);
			int yOffset = abs(height/2 - y);
			
			if (xOffset * xOffset + yOffset * yOffset <= radiusSquared && !lineComplete) {
				grid[y][x] = 1;
				grid[y][width/2 + (width/2-x)] = 1;
				lineComplete = true;
			}
			std::cout << grid[y][x];
		}
		std::cout << "\n";
	}
}