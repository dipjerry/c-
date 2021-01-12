#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
class Text
{
private:
    string text;
    string line;
    int line_count;
    int word_count;
    int character_count;

public:
    Text();
    void userParagraph();
    void countWord();
    void countCharacter();
    void display();
};
Text::Text()
{
    line_count = 0;
    word_count = 0;
    character_count = 0;
}
void Text::userParagraph()
{
    cout << "Please type the Paragraph: (leave a blank line to finish typing paragraph)\n";
    do
    {
        getline(cin, line);
        text += line + '\n';
        line_count++;
    } while (line != "");
}
void Text::countWord()
{
    int size_string = text.length();
    int temp = 0;
    for (int i = 0; i < size_string; i++)
    {
        if (text[i] == ' ' || text[i] == '\n' || text[i] == '\t')
        {
            temp = 0;
        }
        else if (temp == 0)
        {
            temp = 1;
            word_count++;
        }
    }
}
void Text::countCharacter()
{
    int size_string = text.length();
    for (int i = 0; i < size_string; i++)
    {
        if (text[i] != ' ')
        {
            character_count++;
        }
    }
}
void Text::display()
{
    cout << "\n"
         << setw(20) << left << "Number of lines" << setw(50) << right << line_count - 1;
    cout << "\n"
         << setw(20) << left << "Number of words" << setw(50) << right << word_count;
    cout << "\n"
         << setw(20) << left << "Number of character" << setw(50) << right << character_count - line_count << endl;
}
int main()
{
    Text test;
    test.userParagraph();
    test.countWord();
    test.countCharacter();
    test.display();
    return 0;
}
