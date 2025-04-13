import std.stdio;
import std.string;

void main()
{
    string s;

    readf("%s", s);
    writeln(s.strip() == "paiza" ? "YES" : "NO");
}
