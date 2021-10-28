#include <stdio.h>
#include <math.h>

void EnterDouble(double* num, const char* num_name)
{
	printf("Enter %s: ", num_name);
	scanf_s("%lf", num);
}

void OutputSquareEquationRoots(double a, double b, double c, const char* variable_name)
{
	printf("Square equation %lf%s^2 + %lf%s + %lf = 0 ", a, variable_name, b, variable_name, c);

	if (a == 0.0)
	{
		if (b == 0.0)
		{
			if (c == 0.0)
			{
				printf("has infinite number of roots\n");
			}
			else
			{
				printf("doesn't have roots\n");
			}
		}
		else
		{
			printf("has one root: %lf\n", -c / b);
		}
	}
	else
	{
		double D = b * b - 4.0 * a * c;

		if (D < 0.0)
		{
			printf("doesn't have real roots\n");
		}
		else if (D == 0.0)
		{
			printf("has one root: %lf\n", -b / (2.0 * a));
		}
		else
		{
			double sqrt_D = sqrt(D);
			printf("has two roots: %lf and %lf\n", (-b + sqrt_D) / (2.0 * a), (-b - sqrt_D) / (2.0 * a));
		}
	}
}

int main()
{
	double a;
	EnterDouble(&a, "a");

	double b;
	EnterDouble(&b, "b");

	double c;
	EnterDouble(&c, "c");

	double d;
	EnterDouble(&d, "d");

	double f;
	EnterDouble(&f, "f");

	OutputSquareEquationRoots(1.0, -a, b, "x");
	OutputSquareEquationRoots(c, -d, -f, "y");

	getch();
	return 0;
}