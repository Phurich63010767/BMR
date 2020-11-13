#include <iostream>
using namespace std;

struct calorie
{
	char sex;
	int weight;
	int height;
	int exercise;
	int BMR;
	int age;
}BMR;

void print()
{
	struct calorie* bmr = &BMR;
	cout << "Enter your weight : ";
	scanf_s("%d", &bmr->weight);
	cout << endl;

	cout << "Enter your height : ";
	scanf_s("%d", &bmr->height);
	cout << endl;

	cout << "Enter your age : ";
	scanf_s("%d", &bmr->age);
	cout << endl;

	cout << "Type[1]--> Do not exercise." << endl;
	cout << "Type[2]--> Exercise 1-3 times a week. " << endl;
	cout << "Type[3]--> Exercise 3-5 times a week." << endl;
	cout << "Type[4]--> Exercise 6-7 times a week." << endl;
	cout << "Type[5]--> Exercise every day, morning and evening." << endl;
	cout << "Enter your exercise : ";
	scanf_s("%d", &bmr->exercise);
	cout << endl;
}

void check(char sex, int weight, int height, int exercise, int age)
{
	struct calorie* bmr = &BMR;
	double x[5] = {1.2, 1.375, 1.55, 1.725, 1.90};
	if (bmr->sex == 77)
	{
		bmr->BMR = (66 + (13.7 * bmr->weight) + (5.00 * bmr->height)) - (6.8 * bmr->age);
		if (bmr->exercise == 1) { bmr->BMR *= x[0]; }
		if (bmr->exercise == 2) { bmr->BMR *= x[1]; }
		if (bmr->exercise == 3) { bmr->BMR *= x[2]; }
		if (bmr->exercise == 4) { bmr->BMR *= x[3]; }
		if (bmr->exercise == 5) { bmr->BMR *= x[4]; }
		cout << "Your BMR : " << bmr->BMR;
	}
	if (bmr->sex == 70)
	{
		bmr->BMR = (665 + (9.6 * bmr->weight) + (1.8 * bmr->height)) - (4.7 * bmr->age);
		if (bmr->exercise == 1) { bmr->BMR *= x[0]; }
		if (bmr->exercise == 2) { bmr->BMR *= x[1]; }
		if (bmr->exercise == 3) { bmr->BMR *= x[2]; }
		if (exercise == 4) { bmr->BMR *= x[3]; }
		if (exercise == 5) { bmr->BMR *= x[4]; }
		cout << "Your BMR : " << bmr->BMR;
	}
}

int main()
{
	struct calorie* bmr = &BMR;
	cout << "Type[M]--> Male" << endl;
	cout << "Type[F]--> Female" << endl;
	cout << "Enter your sex : ";
	scanf_s("%c", &bmr->sex, 99);
	cout << endl;

	if (bmr->sex == 'F' || bmr->sex == 'M')
	{
		print();
		check(bmr->sex, bmr->weight, bmr->height, bmr->exercise, bmr->age);
	}
	else
	{
		cout << "Please enter \"M\" or \"F\" uppercase characters .\n\n";
	}
	return 0;
}