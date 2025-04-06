import std.stdio;
import std.conv;
import std.string;

void main()
{
    string a_ = readln();
    int a = a_.strip.to!int;

    string b_ = readln();
    int b = b_.strip.to!int;

    writeln(a * b);
}
