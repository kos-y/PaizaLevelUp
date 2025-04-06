import std.stdio;
import std.algorithm;
import std.string;
import std.conv;

void main()
{
    int[] n;

    foreach (i; 0..5) {
        string n_ = readln();
        n ~= n_.strip.to!int;
    }

    writeln(minElement(n));
}
