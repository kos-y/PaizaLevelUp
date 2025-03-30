import std.stdio;
import std.range;
import std.algorithm;

void main()
{
    const int LineCount = 3;

    string[] lines = iota(LineCount).map!(i => readln()).array;

    foreach (line; lines) {
        write(line);
    }
}