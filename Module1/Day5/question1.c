#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    double real;
    double imaginary;
};

// Function to read a complex number from the user
void readComplex(struct Complex *c) {
    printf("Enter the real part: ");
    scanf("%lf", &(c->real));

    printf("Enter the imaginary part: ");
    scanf("%lf", &(c->imaginary));
}

// Function to write a complex number
void writeComplex(const struct Complex *c) {
    printf("Complex number: %.2f + %.2fi\n", c->real, c->imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(const struct Complex *c1, const struct Complex *c2) {
    struct Complex result;
    result.real = c1->real + c2->real;
    result.imaginary = c1->imaginary + c2->imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(const struct Complex *c1, const struct Complex *c2) {
    struct Complex result;
    result.real = (c1->real * c2->real) - (c1->imaginary * c2->imaginary);
    result.imaginary = (c1->real * c2->imaginary) + (c1->imaginary * c2->real);
    return result;
}

int main() {
    struct Complex c1, c2, sum, product;

    printf("Reading Complex Number 1:\n");
    readComplex(&c1);

    printf("\nReading Complex Number 2:\n");
    readComplex(&c2);

    printf("\nComplex Number 1:\n");
    writeComplex(&c1);

    printf("\nComplex Number 2:\n");
    writeComplex(&c2);

    sum = addComplex(&c1, &c2);
    printf("\nSum of Complex Numbers:\n");
    writeComplex(&sum);

    product = multiplyComplex(&c1, &c2);
    printf("\nProduct of Complex Numbers:\n");
    writeComplex(&product);

    return 0;
}