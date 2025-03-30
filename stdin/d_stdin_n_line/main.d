import std.stdio;
import std.algorithm.iteration;
import std.conv;
import std.range;
import std.string;

void main()
{
    int lineCount = readln().strip.to!int;
    string[] lines = iota(lineCount).map!(i => readln()).array;

    foreach (line; lines) {
        write(line);
    }
}
