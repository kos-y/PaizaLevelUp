import std.stdio;
import std.array;

void main()
{
    char[] input;
    readln(input);

    char[][] ss = split(input, " ");
    foreach (s; ss) {
        writeln(s);
    }
}