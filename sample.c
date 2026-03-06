#include <stdio.h>
/* Multi-line
   comment test
*/
int main() 
{
    int a = 10;
    int b = 077;        // octal
    int c = 0x1A3F;     // hex
    int d = 0b10101;    // binary

    float y = .5;
    float z = 10.;
    float k = 5.2f;

    // Single line comment (should be skipped)
    char ch = 'A';
    char *str = "Hello World" ;

    // Invalid cases 
    int e = 09;          // invalid octal
     int f = 0x1G;        // invalid hex
     int g = 0b102;       // invalid binary
    float h = 3.4.5;     // invalid float

    if(a > 5 && x < 4.0)
    {
        a = a + 1;
    }
    char *msg = "Hello World;   // unterminated string
    return 0;
}