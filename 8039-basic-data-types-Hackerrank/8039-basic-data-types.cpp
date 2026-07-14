#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;

    // Read input values
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    // Print each value on a new line
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);      // float with 3 decimal places
    printf("%.9lf\n", d);     // double with 9 decimal places

    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna