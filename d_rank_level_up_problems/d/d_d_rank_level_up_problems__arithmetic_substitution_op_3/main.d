import std.stdio;
import std.math;

void main()
{
    enum A = 202;
    enum B = 134;
    enum C = 107;

    writeln(pow((A + B) * C, 2));
}
