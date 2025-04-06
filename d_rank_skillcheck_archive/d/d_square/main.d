import std.stdio;
import std.string;
import std.conv;

void main()
{
    string n_ = readln();
    int n = n_.strip.to!int;

    foreach (i; 0..n) {
        write("*");
    }
    writeln();
}