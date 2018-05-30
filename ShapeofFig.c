#include <stdio.h>

typedef struct{
	int r, g, b;
} Color;
typedef struct{
	int x, y;
}Coords;
typedef struct{
	Color color;
	Coords point[5];
}Pentagon;
int main ()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	FILE *file;
	file = fopen("file.txt", "r");
	if(file == NULL)
	{
		printf("Wrong");
		return 1;
	}
	//Color white = {255, 255, 255};
	//Color  red = {255, 0, 0};
	//Color black = {0, 0, 0};
	Pentagon shape;
	int i;
	fscanf(file, "%i %i %i", &shape.color.r, &shape.color.g, &shape.color.b);
	for(i = 0; i<5; ++i)
	{
		fscanf(file, "%i %i", &shape.point[i].x, &shape.point[i].y);
		printf("%i %i\n", shape.point[i].x, shape.point[i].y);
	}
	fclose(file);
		return 0;
}




