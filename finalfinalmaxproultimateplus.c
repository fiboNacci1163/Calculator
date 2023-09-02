#include <math.h>
#include <stdio.h>
#include <string.h>

void main_menu();
void add_menu();
void subt_menu();
void div_menu();
void mult_menu();
void eqn_menu();
void misc_menu();
void area_menu();
void extra_menu();

void add_simple();
void add_advanced();
void add_matrix();
void subt_simple();
void subt_absolute();
void div_simple();
void div_advanced();
void mult_simple();
void mult_modulo();
void mult_matrix();
void mult_exponent();

void eqn_simple();
void eqn_complex();
void misc_age();
void misc_statistics();
void area_triangle();
void area_rectangle();
void area_trapezium();
void area_circle();

void extra_factoring();
void extra_prime_factoring();
void extra_gcd_lcm();

int days_in_previous_month(int current_month, int current_year);
void selection_sort(long long A[], int n);


void print_menu(char menu_name[], char prompt[], char options[][30], int no_of_options);
void print_repeated_char(char ch, int length);
int print_centered_str(char str[], int width);
void heading(char title[]);
void invalid();


/*---------- The BIG BANG, where it all started ----------*/

int main() {
	main_menu();
	puts("Thanks for using our program!");
	return 0;
}


/*---------- Menu functions ----------*/

void main_menu() {
	char menu_name[] = "Main Menu";
	char prompt[] = "Which operation would you like to perform?";
	char options[][30] = {
		"Add",
		"Subtract",
		"Divide",
		"Multiply",
		"Solve Equation",
		"Miscellaneous",
		"Exit",
		"Extra"
	};

	int no_of_options = sizeof(options) / sizeof(options[0]);

	while (1) {
		print_menu(menu_name, prompt, options, no_of_options);

		int choice;
		scanf("%d", &choice);

		switch (choice) {
			case 1: add_menu(); break;
			case 2: subt_menu(); break;
			case 3: div_menu(); break;
			case 4: mult_menu(); break;
			case 5: eqn_menu(); break;
			case 6: misc_menu(); break;
			case 7: return;
			case 8: extra_menu(); break;
			default: invalid();
		}
	}
}


void add_menu() {
	char menu_name[] = "Addition Menu";
	char prompt[] = "Which type of addition would you like to perform?";
	char options[][30] = {
		"Simple Addition",
		"Advanced Addition",
		"Matrix Addition",
		"Return to Main Menu"
	};

	int no_of_options = sizeof(options) / sizeof(options[0]);

	while (1) {
		print_menu(menu_name, prompt, options, no_of_options);

		int choice;
		scanf("%d", &choice);

		switch (choice) {
			case 1: add_simple(); break;
			case 2: add_advanced(); break;
			case 3: add_matrix(); break;
			case 4: return;
			default: invalid();
		}
	}
}


void subt_menu() {
	char menu_name[] = "Subtraction Menu";
	char prompt[] = "Which type of subtraction would you like to perform?";
	char options[][30] = {
		"Simple Subtraction",
		"Absolute Difference",
		"Return to Main Menu"
	};

	int no_of_options = sizeof(options) / sizeof(options[0]);

	while (1) {
		print_menu(menu_name, prompt, options, no_of_options);

		int choice;
		scanf("%d", &choice);

		switch (choice) {
			case 1: subt_simple(); break;
			case 2: subt_absolute(); break;
			case 3: return;
			default: invalid();
		}
	}
}


void div_menu() {
	char menu_name[] = "Division Menu";
	char prompt[] = "Which type of division would you like to perform?";
	char options[][30] = {
		"Simple Division",
		"Advanced Division",
		"Return to Main Menu"
	};

	int no_of_options = sizeof(options) / sizeof(options[0]);

	while (1) {
		print_menu(menu_name, prompt, options, no_of_options);

		int choice;
		scanf("%d", &choice);

		switch (choice) {
			case 1: div_simple(); break;
			case 2: div_advanced(); break;
			case 3: return;
			default: invalid();
		}
	}
}


void mult_menu() {
	char menu_name[] = "Multiplication Menu";
	char prompt[] = "Which type of multiplication would you like to perform?";
	char options[][30] = {
		"Simple Multiplication",
		"Modulo Multiplication",
		"Matrix Multiplication",
		"Exponentiation",
		"Return to Main Menu"
	};

	int no_of_options = sizeof(options) / sizeof(options[0]);

	while (1) {
		print_menu(menu_name, prompt, options, no_of_options);

		int choice;
		scanf("%d", &choice);

		switch (choice) {
			case 1: mult_simple(); break;
			case 2: mult_modulo(); break;
			case 3: mult_matrix(); break;
			case 4: mult_exponent(); break;
			case 5: return;
			default: invalid();
		}
	}
}


void eqn_menu() {
	char menu_name[] = "Equation Menu";
	char prompt[] = "Which type of equation would you like to solve?";
	char options[][30] = {
		"Simple Equation",
		"Complex Equation",
		"Return to Main Menu"
	};

	int no_of_options = sizeof(options) / sizeof(options[0]);

	while (1) {
		print_menu(menu_name, prompt, options, no_of_options);

		int choice;
		scanf("%d", &choice);

		switch (choice) {
			case 1: eqn_simple(); break;
			case 2: eqn_complex(); break;
			case 3: return;
			default: invalid();
		}
	}
}


void misc_menu() {
	char menu_name[] = "Miscellaneous Menu";
	char prompt[] = "Which operation would you like to perform?";
	char options[][30] = {
		"Calculate Area",
		"Calculate Age",
		"Statistics",
		"Return to Main Menu"
	};

	int no_of_options = sizeof(options) / sizeof(options[0]);

	while (1) {
		print_menu(menu_name, prompt, options, no_of_options);

		int choice;
		scanf("%d", &choice);

		switch (choice) {
			case 1: area_menu(); break;
			case 2: misc_age(); break;
			case 3: misc_statistics(); break;
			case 4: return;
			default: invalid();
		}
	}
}


void area_menu() {
	char menu_name[] = "Area Menu";
	char prompt[] = "Which type of area would you like to calculate?";
	char options[][30] = {
		"Triangle",
		"Rectangle",
		"Trapezium",
		"Circle",
		"Return to Miscellaneous Menu"
	};

	int no_of_options = sizeof(options) / sizeof(options[0]);

	while (1) {
		print_menu(menu_name, prompt, options, no_of_options);

		int choice;
		scanf("%d", &choice);

		switch (choice) {
			case 1: area_triangle(); break;
			case 2: area_rectangle(); break;
			case 3: area_trapezium(); break;
			case 4: area_circle(); break;
			case 5: return;
			default: invalid();
		}
	}
}


void extra_menu() {
	char menu_name[] = "Extra Menu";
	char prompt[] = "Which operation would you like to perform?";
	char options[][30] = {
		"Factorization",
		"Prime Factorization",
		"GCD and LCM",
		"Return to Main Menu"
	};

	int no_of_options = sizeof(options) / sizeof(options[0]);

	while (1) {
		print_menu(menu_name, prompt, options, no_of_options);

		int choice;
		scanf("%d", &choice);

		switch (choice) {
			case 1: extra_factoring(); break;
			case 2: extra_prime_factoring(); break;
			case 3: extra_gcd_lcm(); break;
			case 4: return;
			default: invalid();
		}
	}
}


/*---------- Helper functions for output formatting ----------*/

// prints a menu with box formatting
void print_menu(char menu_name[], char prompt[], char options[][30], int no_of_options) {
    int box_width = 60;
    char horizontal_line_char = '-';
    char vertical_line_char = '|';
    char corner_char = '+';

	// top border
    putchar('\n');
	putchar(corner_char);
    print_repeated_char(horizontal_line_char, box_width-2);
	putchar(corner_char);
    putchar('\n');

	// menu name
	putchar(vertical_line_char);
	print_centered_str(menu_name, box_width-2);
	putchar(vertical_line_char);
    putchar('\n');

	// divider line
	putchar(vertical_line_char);
	print_repeated_char(horizontal_line_char, box_width-2);
	putchar(vertical_line_char);
    putchar('\n');

	// prompt
	putchar(vertical_line_char);
	int left_spaces = print_centered_str(prompt, box_width-2);
	putchar(vertical_line_char);
    putchar('\n');

	// blank
	putchar(vertical_line_char);
	print_repeated_char(' ', box_width-2);
	putchar(vertical_line_char);
    putchar('\n');

    // options
	int num_width = left_spaces + 1;
	int option_width = box_width - num_width - 4;

	for (int i = 0; i < no_of_options; i++) {
		putchar(vertical_line_char);
		printf("%*d. ", num_width, i+1);
		printf("%-*s", option_width, options[i]);
		putchar(vertical_line_char);
		putchar('\n');
	}

	// bottom border
	putchar(corner_char);
    print_repeated_char(horizontal_line_char, box_width-2);
	putchar(corner_char);
    putchar('\n');

    printf("\nEnter your choice: ");
}

// prints a centered title with underline
void heading(char title[]) {
    int width = 60;
    char horizontal_line_char = '=';

    putchar('\n');
    print_repeated_char(horizontal_line_char, width);

	// title
    putchar('\n');
	print_centered_str(title, width);
    putchar('\n');

	// underline
    print_repeated_char(horizontal_line_char, width);
    putchar('\n');
}

// repeatedly prints a character for a specified number of times
void print_repeated_char(char ch, int length) {
	while (length--)
		putchar(ch);
}

// prints a string centered within a given width,
// by printing equal amount of spaces on both sides
int print_centered_str(char str[], int width) {
	int spaces = width - strlen(str);
	int left_spaces = spaces / 2;
	int right_spaces = spaces - left_spaces;

	print_repeated_char(' ', left_spaces);
	printf("%s", str);
	print_repeated_char(' ', right_spaces);

	return left_spaces;
}

// alert for invalid choice
void invalid() {
	heading("Invalid choice! Please select a valid option");
}


/*---------- Actual operations ----------*/

// adds two numbers
void add_simple() {
	heading("Simple Addition");
	printf("Enter two numbers: ");

	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("Sum: %.15g\n", num1+num2);
}

// adds multiple numbers
void add_advanced() {
	heading("Advanced Addition");
	puts("How many numbers would you like to add?");
	int n;
	scanf("%d", &n);

	printf("Enter %d numbers: ", n);
	double sum = 0;

	while (n--) {
		double num;
		scanf("%lf", &num);
		sum += num;
	}

	printf("Sum: %.15g\n", sum);
}

// adds two matrix
void add_matrix() {
	heading("Matrix Addition");
	printf("Enter the the number of rows and columns of the matrix: ");
	int row, col;
	scanf("%d %d", &row, &col);

	puts("Enter the first matrix:");
	double A[row][col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%lf", &A[i][j]);
		}
	}

	puts("Enter the second matrix:");
	double B[row][col];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			scanf("%lf", &B[i][j]);
		}
	}

	puts("Sum matrix:");
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%.15g ", A[i][j] + B[i][j]);
		}
		puts("");
	}
}


// subtracts one number from another
void subt_simple() {
	heading("Simple Subtraction");
	printf("Enter two numbers: ");

	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("Subtraction result: %.15g\n", num1-num2);
}

// finds the absolute difference between two numbers
void subt_absolute() {
	heading("Absolute Difference");
	printf("Enter two numbers: ");
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);

	double dif = num1-num2;
	if (dif < 0) dif *= -1;
	printf("Absolute difference: %.15g\n", dif);
}


// finds the ratio of two numbers
void div_simple() {
	heading("Simple Division");
	printf("Enter two numbers: ");

	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("Ratio: %.15g\n", num1/num2);
}

// divides an integer with another and shows the quotient and remainder
void div_advanced() {
	heading("Advanced Division");
	printf("Enter two numbers: ");
	long long num1, num2;
	scanf("%lld %lld", &num1, &num2);

	long long quotient = num1 / num2;
	long long remainder = num1 % num2;
	printf("Quotient: %lld, Remainder: %lld\n", quotient, remainder);
}


// multiplies two numbers
void mult_simple() {
	heading("Simple Multiplication");
	printf("Enter two numbers: ");

	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("Product: %.15g\n", num1*num2);
}

// multiplies two integers and shows the remainder of the product with respect to another integer
void mult_modulo() {
	heading("Modulo Multiplication");
	printf("Enter three numbers: ");
	long long a, b, m;
	scanf("%lld %lld %lld", &a, &b, &m);

	long long res = (a % m * b % m) % m; // modular arithmetic
	printf("Result: %lld\n", res);
}

// multiplies two matrix
void mult_matrix() {
	heading("Matrix Multiplication");
	printf("Enter the dimension of the first matrix: ");
	int row1, col1;
	scanf("%d %d", &row1, &col1);

	puts("Enter the first matrix:");
	double X[row1][col1];
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			scanf("%lf", &X[i][j]);
		}
	}

	printf("Enter the dimension of the second matrix: ");
	int row2, col2;
	scanf("%d %d", &row2, &col2);

	puts("Enter the second matrix:");
	double Y[row2][col2];
	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			scanf("%lf", &Y[i][j]);
		}
	}

	if (col1 != row2) {
		puts(
			"The two matrix can't be multiplied because "
			"the number of rows in the first matrix does not "
			"match the number of rows in the second matrix"
		);
		return;
	}

	puts("Result matrix:");
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col2; j++) {
			float z = 0;
			for (int k = 0; k < col1; k++) {
				z += X[i][k] * Y[k][j];
			}
			printf("%.15g ", z);
		}
		puts("");
	}
}

// raises one integer to the power of another integer and shows the remainder with respect to another integer
void mult_exponent() {
	heading("Exponentiation");
	printf("Enter three numbers: ");
	long long a, b, m;
	scanf("%lld %lld %lld", &a, &b, &m);

	a %= m;
	long long res = 1;

	while (b--) {
		res *= a;
		res %= m;
	}

	printf("Result: %lld\n", res);
}


// solves a system of linear equations with two variables
void eqn_simple() {
	heading("Simple Equation");
	puts("(Two-Variable Linear) ax + by = c");
	printf("Enter the coefficients of the first equation: ");

	double a1, b1, c1;
	scanf("%lf %lf %lf", &a1, &b1, &c1);

	printf("Enter the coefficients of the second equation: ");
	double a2, b2, c2;
	scanf("%lf %lf %lf", &a2, &b2, &c2);

	// cramer's rule
	double det = a1*b2 - b1*a2;
	double detx = c1*b2 - b1*c2;
	double dety = a1*c2 - c1*a2;

	double x;
	double y;

	if (det == 0) {
		if (detx != 0) {
			puts("There are no solution!");
			return;
		}
		else {
			puts("There are infinite solutions!");
			printf("One Possible ");
			x = 0;
			y = (c1+c2) / (b1+b2);
		}
	}
	else {
		x = detx / det;
		y = dety / det;
	}

	// fixing negative zero
	if (x == -0.0) x = 0;
	if (y == -0.0) y = 0;

	printf("Solution: x = %.15g, y = %.15g\n", x, y);
}

// solves a quadratic equation
void eqn_complex() {
	heading("Complex Equation");
	puts("(Quadratic) ax^2 + bx + c = 0");
	printf("Enter the coefficients of the quadratic equation: ");
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	printf("Solution: x = ");

	if (a == 0) { // linear solution
		printf("%g\n", -c/b);
		return;
	}

	// quadratic solution
	double d = b*b - 4*a*c; // discriminant
	double x = -b / (2*a);
	double y = sqrt(fabs(d)) / (2*fabs(a)); // sqrt(discriminant)/2a, with absolute function to keep the result positive

	if (d == 0) {
		printf("%.15g\n", x);
	}
	else if (d > 0) {
		printf("{ %.15g, %.15g }\n", x+y, x-y);
	}
	else { // complex number solution
		if (x != 0) printf("%.15g ", x);
		printf("%c", 241); // plusminus (±) symbol
		if (y != 1) printf(" %.15g ", y);
		printf("i\n");
	}

}


// calculates the age of a person in years, months and days
void misc_age() {
	heading("Calculate Age");

	printf("Enter your birth date (DD/MM/YYYY): ");
	int birth_day, birth_month, birth_year;
	scanf("%d/%d/%d", &birth_day, &birth_month, &birth_year);

	printf("Enter the current date (DD/MM/YYYY): ");
	int current_day, current_month, current_year;
	scanf("%d/%d/%d", &current_day, &current_month, &current_year);

	int age_day, age_month, age_year;
	age_year = current_year - birth_year;
	age_month = current_month - birth_month;
	age_day = current_day - birth_day;

	if (age_day < 0) { // incomplete month
		age_month--; // decrease by 1 since one month is not completed
		// days after last completed month = days_in_previous_month - birth_day + current_day
		age_day += days_in_previous_month(current_month, current_year);
	}

	if (age_month < 0) { // incomplete year
		age_year--;
		age_month += 12;
	}

	printf("You are %d years %d months and %d days old\n", age_year, age_month, age_day);
}

// finds the number of total days in the previous month
int days_in_previous_month(int current_month, int current_year) {
	int days = 31;

	if (current_month == 3) {
		if (current_year % 400 == 0 || (current_year % 4 == 0 && current_year % 100 != 0))
			days = 29;
		else
			days = 28;
	}
	else if (current_month ==  5 || current_month ==  7 || current_month ==  10 || current_month ==  12)
		days = 30;

	return days;
}

// sorts an array of long long integers in ascending order
void selection_sort(long long A[], int n) {
	for (int i = 0; i < n; i++) {
		int k = i;
		for (int j = i+1; j < n; j++) {
			if (A[j] < A[k]) {
				k = j;
			}
		}

		long long tmp = A[i];
		A[i] = A[k];
		A[k] = tmp;
	}
}

// shows a statistical report for a list of integers
void misc_statistics() {
	heading("Statistics");

	printf("How many numbers would you like to analyze? ");
	int n;
	scanf("%d", &n);

	if (n < 2) {
		puts("At least 2 numbers are needed");
		return;
	}

	printf("Enter %d integers: ", n);
	long long data[n];
	long long sum = 0;

	for (int i = 0; i < n; i++) {
		scanf("%lld", &data[i]);
		sum += data[i];
	}

	double avg = (double) sum / n; //?

	selection_sort(data, n);
	long long min = data[0];
	long long max = data[n-1];

	double median = data[n/2];
	if (n % 2 == 0) {
		median = (data[n/2] + data[n/2-1]) / 2.0; //?
	}

	// frequency counting
	int freq[n]; // freq[i] corresponds to count of data[i]
	freq[0] = 1;
	int counting_index = 0;

	for (int i = 1; i < n; i++) {
		if (data[i] == data[i-1]) {
			freq[counting_index]++;
			freq[i] = 0; // duplicates are counted as zero
		}
		else {
			freq[i] = 1;
			counting_index = i;
		}
	}

	int max_frequency = 0;
	for (int i = 0; i < n; i++) {
		if (freq[i] > max_frequency) {
			max_frequency = freq[i];
		}
	}

	int uniq = 0;
	for (int i = 0; i < n; i++) {
		if (freq[i] > 0) {
			uniq++;
		}
	}


	double variance = 0;
	for (int i = 0; i < n; i++) {
		variance += pow(avg-data[i], 2);
	}

	variance /= n-1;

	// outputs
	printf(
		"\n"
		"Minimum: %lld\n"
		"Maximum: %lld\n"
		"Average: %.15g\n",
		min, max, avg
	);

	// most frequent values
	printf("Most frequent value(s): ");
	for (int i = 0; i < n; i++) {
		if (freq[i] == max_frequency) {
			printf("%lld ", data[i]);
		}
	}
	printf("\n");

	printf(
		"Number of unique values: %d\n"
		"Median: %.15g\n"
		"Variance: %.15g\n",
		uniq, median, variance
	);
}

// calculates area of a triangle given 3 side lengths
void area_triangle() {
	heading("Area of Triangle");

	printf("Enter the side lengths of the triangle: ");
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	// validity check
	if (a + b < c || b + c < a || c + a < b) {
		puts("This is not a valid triangle!");
		return;
	}

	double s = (a+b+c) / 2.0;
	double area = sqrt(s * (s-a) * (s-b) * (s-c));
	printf("Area: %.15g\n", area);
}

// calculates area of a rectangle given 2 side lengths
void area_rectangle() {
	heading("Area of Rectangle");
	printf("Enter the two side lengths of the rectangle: ");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("Area: %d\n", a*b);
}

// calculates area of a trapezium given 4 side lengths
void area_trapezium() {
	heading("Area of Trapezium");

	printf("Enter the two parallel side lengths of the trapezium: ");
	double a, b;
	scanf("%lf %lf", &a, &b);

	printf("Enter the other two side lengths: ");
	double c, d;
	scanf("%lf %lf", &c, &d);

	double tri_base = fabs(a-b);

	// validity check
	if (c + d < tri_base || d + tri_base < c || tri_base + c < d) {
		puts("This is not a valid trapezium!");
		return;
	}

	double s = (c+d+tri_base) / 2;
	double tri_area = sqrt(s * (s-c) * (s-d) * (s-tri_base));
	double height = 2 * tri_area / tri_base;

	double area = (a+b) * height / 2;
	printf("Area: %.15g\n", area);
}

// calculates the area of a circle given the radius
void area_circle() {
	heading("Area of Circle");
	printf("Enter the radius of the circle: ");
	double radius;
	scanf("%lf", &radius);

	double pi = acos(-1);
	double area = pi*radius*radius;
	printf("Area: %.15g\n", area);
}




// shows the factors of a positive integer
void extra_factoring() {
	heading("Factorization");
	printf("Enter a positive integer: ");
	long long num;
	scanf("%lld", &num);

	long long root =  sqrt(num);
	int width1 = log10(root) + 1;
	int width2 = log10(num) + 1;

	for (long long x = 2; x <= root; x++) {
		if (num % x == 0) {
			printf("%*lld * %-*lld\n", width1, x, width2, num/x);
		}
	}

}

// shows the prime factors of a positive integer
void extra_prime_factoring() {
	heading("Prime Factorization");
	printf("Enter a positive integer: ");
	long long num;
	scanf("%lld", &num);

	long long root =  sqrt(num);
	long long x = 2;

	printf("%lld = ", num);


	while (x <= root) {
		if (num % x == 0) {
			printf("%lld * ", x);
			num /= x;
			root =  sqrt(num);
		}
		else
			x++;
	}

	printf("%lld\n", num);
}


// finds the gcd and lcm of two positive integers
void extra_gcd_lcm() {
	heading("GCD and LCM");
	printf("Enter two positive integers: ");
	long long num1, num2;
	scanf("%lld %lld", &num1, &num2);

	long long a = num1, b = num2;

	while (b != 0) {
		long long rem = a % b;
		a = b;
		b = rem;
	}

	long long gcd = a;
	long long lcm = num1 * num2 / gcd;
	printf("GCD: %lld, LCM: %lld\n", gcd, lcm);
}









