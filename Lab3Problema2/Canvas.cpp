#include "Canvas.h"

Canvas::Canvas(int w, int h)
{

    this->w = w;
    this->h = h;

    for (int i = 0; i < this->h; i++)
        for (int j = 0; j < this->w; j++)
            this->c[i][j] = ' ';
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    this->startX = x2 - x1;
    this->startY = y2 - y1;
    this->dim = 2 * this->startY - this->startX;
    int y = y1;

        for (int x = x1; x < x2; x++)
            cout << ch;
        if (this->dim > 0)
        {
            y = y + 1;
            this->dim = this->dim - 2 * this->startX;          
        }

        this->dim = this->dim + 2 * this->startY;
        
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    this->startX = left;
    this->endX = right;
    this->startY = top;
    this->endY = bottom;

    for (int j = this->startX; j < this->endX; j++)
    {
        cout << ch;
        for (int i = this->startY; i < this->endY-2; i++)
        {
            cout << ch << setw(endX - 2) << ch;
            
            //cout << ch;


        }
        cout << endl;
        
        
    }

    
        
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    this->startX = left;
    this->endX = right;
    this->startY = top;
    this->endY = bottom;

    for (int i = this->startX; i < this->endX; i++)
    {
        for (int j = this->startY; j < this->endY; j++)
        {
            cout << ch;
        }

        cout << endl;

    }

}