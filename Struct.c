#include <stdio.h>
#include <math.h>

typedef struct {
	int ID;
	char gender;
	double ex1, ex2, ex3;
	double finalGrade;
} student;
int main ()
{
	setvbuf (stdout, NULL, _IONBF, 0);

    student A;
    scanf("%i %c %lf %lf %lf", &A.ID, &A.gender, &A.ex1, &A.ex2, &A.ex3);
    A.finalGrade = (A.ex1 + A.ex2 + A.ex3)/3;
    printf ("Student %i\n gender %c\n The results of three quizzes: %f %f %f\n has a final grade of: %lf", A.ID, A.gender, A.ex1, A.ex2, A.ex3, A.finalGrade);
    return 0;
}

