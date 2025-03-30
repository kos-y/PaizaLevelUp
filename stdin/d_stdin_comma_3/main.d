import std.stdio;
import std.string;

void main()
{
    string[] words = readln().split(",");
    foreach (word; words) {
        writeln(word);
    }
}
