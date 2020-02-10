#include <windows.h>
#include <iostream>

using namespace std;

void setcolor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    return;
}

// |===================|===================|===================|
// |       Color       |     Background    |     Foreground    |
// |-------------------+-------------------+-------------------|
// | Black             |         0         |         0         |
// | Blue              |         1         |         1         |
// | Green             |         2         |         2         |
// | Cyan              |         3         |         3         |
// | Red               |         4         |         4         |
// | Magenta           |         5         |         5         |
// | Brown             |         6         |         6         |
// | White             |         7         |         7         |
// | Gray              |         -         |         8         |
// | Intense Blue      |         -         |         9         |
// | Intense Green     |         -         |         10        |
// | Intense Cyan      |         -         |         11        |
// | Intense Red       |         -         |         12        |
// | Intense Magenta   |         -         |         13        |
// | Yellow            |         -         |         14        |
// | Intense White     |         -         |         15        |
// |===================|===================|===================|

int main()
{

    const int background = 0;
    const int color = 14;

    setcolor((16 * background) + color);

    float progress = 0.0;

    while (progress < 1.0)
    {
        Sleep(350);

        progress += 0.10;

        const int barWidth = 70;
        const int pos = barWidth * progress;

        cout << "[";

        for (int i = 0; i < barWidth; ++i)
        {
            if (i < pos)
                cout << "=";
            else if (i == pos)
                cout << ">";
            else
                cout << " ";
        }

        cout << "] " << int(progress * 100.0) << " %\r";
        cout.flush();
    }

    cout << endl;
    setcolor(7);
    return 0;
}
