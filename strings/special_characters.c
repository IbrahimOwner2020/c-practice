#include <stdio.h>

int main()
{
    // Some special characters
    // Because strings must be written within quotes, C will misunderstand this string, and generate an error:
    // char text[] = "We are the so-called "Vikings" from the north.";

    // The backslash (\) escape character turns special characters into string characters:
    char text[] = "We are the so-called \"Vikings\" from the north.";
    char text2[] = "It\'s alright.";
    char text3[] = "The character \\ is called backslash.";

    printf("%s\n", text);
    printf("%s\n", text2);
    printf("%s\n", text3);

    // Other special characters
    char text4[] = "This is a backspace \b.";
    char text5[] = "This is a formfeed \f.";
    char text6[] = "This is a newline \n.";
    char text7[] = "This is a carriage return \r.";
    char text8[] = "This is a horizontal tab \t.";
    char text9[] = "This is a vertical tab \v.";
    char text10[] = "This is a backslash \\.";
    char text11[] = "This is a question mark \?.";
    char text12[] = "This is a single quote \'.";
    char text13[] = "This is a double quote \".";
    char text14[] = "This is an octal number \101.";
    char text15[] = "This is a hexadecimal number \x41.";

    printf("%s\n", text4);
    printf("%s\n", text5);
    printf("%s", text6);
    printf("%s", text7);
    printf("%s", text8);
    printf("%s", text9);
    printf("%s", text10);
    printf("%s", text11);
    printf("%s", text12);
    printf("%s", text13);
    printf("%s", text14);
    printf("%s", text15);
}