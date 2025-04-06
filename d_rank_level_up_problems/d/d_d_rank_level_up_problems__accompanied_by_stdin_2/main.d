import std.stdio;

void main()
{
    int a, b;

    readf("%d %d", &a, &b);
    write(a - b, ' ', a * b);
}