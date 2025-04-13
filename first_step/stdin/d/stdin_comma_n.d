import std.stdio;
import std.string;

void main()
{
    readln();
    string[] words = readln().split(",");
    foreach (word; words) {
        writeln(word);
    }
}
