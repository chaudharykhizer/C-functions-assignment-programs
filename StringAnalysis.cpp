#include<iostream>
using namespace std;

void analyzeString(string text)
{
    int characters = 0;
    int spaces = 0;
    int tabs = 0;
    int lines = 1;

    for(int i=0; i<text.length(); i++)
    {
        characters++;

        if(text[i] == ' ')
        {
            spaces++;
        }

        if(text[i] == '\t')
        {
            tabs++;
        }

        if(text[i] == '\n')
        {
            lines++;
        }
    }

    cout << "Characters = " << characters << endl;
    cout << "Spaces = " << spaces << endl;
    cout << "Tabs = " << tabs << endl;
    cout << "Lines = " << lines << endl;
}

int main()
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    analyzeString(text);

    return 0;
}
