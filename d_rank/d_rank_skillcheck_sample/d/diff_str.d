import std.stdio;
import std.string;

void main()
{
    string a = readln().strip;
    string b = readln().strip;

    writeln(a == b ? "OK" : "NG");
}
