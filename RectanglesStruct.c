#include <stdio.h>

typedef struct{
	int r, g, b;
} Color;
typedef struct{
	int x, y;
}Coords;
typedef struct{
	Coords upperleft;
	int sidelength;
	Color outl, fill;
}Square;
typedef struct{
	Coords upperleft;
	int sidelength, height;
	Color outl, fill;
}Rectangle;


int main ()
{
	Color white = {255, 255, 255};
	Color  red = {255, 0, 0};
	Color black = {0, 0, 0};
	Square kv = { {1, 6},
			        5,
					white,
					black
	};
	Rectangle T = {{5, 5},
				  2,
				  3,
				  red,
				  black
	};
    printf("The coordinates of the square are: (%i, %i) (%i, %i) (%i %i) (%i %i)\n", kv.upperleft.x, kv.upperleft.y - kv.sidelength,  kv.upperleft.x+kv.sidelength, kv.upperleft.y - kv.sidelength,  kv.upperleft.x + kv.sidelength, kv.upperleft.y,  kv.upperleft.x, kv.upperleft.y);
    printf("The coordinates of the rectangle are: (%i, %i) (%i, %i) (%i %i) (%i %i)", T.upperleft.x, T.upperleft.y - T.height,  T.upperleft.x+T.sidelength, T.upperleft.y - T.height,  T.upperleft.x + T.sidelength, T.upperleft.y,  T.upperleft.x, T.upperleft.y);

    return 0;
}

