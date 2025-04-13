import std.stdio;

void main()
{
    int a, b, c;
    readf("%d %d %d", &a, &b, &c);

    int n = 0;
    n += a;
    n *= b;
    n %= c;
    writeln(n);
}