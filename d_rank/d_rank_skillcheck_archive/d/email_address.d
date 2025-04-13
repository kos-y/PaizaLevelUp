import std.stdio;
import std.string;

void main()
{
    char[] s, t;

    readln(s);
    readln(t);
    writef("%s@%s\n", s.strip, t.strip);
}