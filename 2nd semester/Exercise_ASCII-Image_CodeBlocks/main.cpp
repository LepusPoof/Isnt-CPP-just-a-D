#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

void printAsciiCharacter(int intensity);

int main(){
    //loading image to read pixel values
    Image i;
    if(i.loadFromFile("image.jpg")) {
        cout << "Your image is fully loaded.";
    } else {
        cout << "Well, I couldn't load an image.";
    }

    Vector2u imageSize = i.getSize();
    int xSize = imageSize.x;
    int ySize = imageSize.y;
    Color tempColor;
    int grayScaleValue = 0;
    int intensity = 0;

    //The ASCII characters to represent 10 levels of gray are: .:-=+*#%@ including space.

    for(int i1 = 0; i1 < ySize ; i1++) {
        for(int j = 0; j < xSize; j++) {
            tempColor = i.getPixel(j, i1);
            grayScaleValue = (tempColor.r * 0.2126 + tempColor.g * 0.7152 + tempColor.b * 0.0722);
            intensity = grayScaleValue % 70; // as we have 10 different levels
            printAsciiCharacter(intensity);
        }
        cout << endl;
    }
    return 0;
}

void printAsciiCharacter(int intensity) {
    switch(intensity) {
        case 0:
            cout << " ";
            break;
        case 1:
            cout << ".";
            break;
        case 2:
            cout << "'";
            break;
        case 3:
            cout << "`";
            break;
        case 4:
            cout << "\\";
            break;
        case 5:
            cout << "^";
            break;
        case 6:
            cout << "\"";
            break;
        case 7:
            cout << ",";
            break;
        case 8:
            cout << ":";
            break;
        case 9:
            cout << ";";
            break;
        case 10:
            cout << "I";
            break;
        case 11:
            cout << "l";
            break;
        case 12:
            cout << "!";
            break;
        case 13:
            cout << "i";
            break;
        case 14:
            cout << ">";
            break;
        case 15:
            cout << "<";
            break;
        case 16:
            cout << "~";
            break;
        case 17:
            cout << "+";
            break;
        case 18:
            cout << "_";
            break;
        case 19:
            cout << "-";
            break;
        case 20:
            cout << "?";
            break;
        case 21:
            cout << "]";
            break;
        case 22:
            cout << "[";
            break;
        case 23:
            cout << "}";
            break;
        case 24:
            cout << "{";
            break;
        case 25:
            cout << "1";
            break;
        case 26:
            cout << ")";
            break;
        case 27:
            cout << "(";
            break;
        case 28:
            cout << "|";
            break;
        case 29:
            cout << "\\";
            break;
        case 30:
            cout << "/";
            break;
        case 31:
            cout << "t";
            break;
        case 32:
            cout << "f";
            break;
        case 33:
            cout << "j";
            break;
        case 34:
            cout << "r";
            break;
        case 35:
            cout << "x";
            break;
        case 36:
            cout << "n";
            break;
        case 37:
            cout << "u";
            break;
        case 38:
            cout << "v";
            break;
        case 39:
            cout << "c";
            break;
        case 40:
            cout << "z";
            break;
        case 41:
            cout << "X";
            break;
        case 42:
            cout << "Y";
            break;
        case 43:
            cout << "U";
            break;
        case 44:
            cout << "J";
            break;
        case 45:
            cout << "C";
            break;
        case 46:
            cout << "L";
            break;
        case 47:
            cout << "Q";
            break;
        case 48:
            cout << "0";
            break;
        case 49:
            cout << "O";
            break;
        case 50:
            cout << "Z";
            break;
        case 51:
            cout << "m";
            break;
        case 52:
            cout << "w";
            break;
        case 53:
            cout << "q";
            break;
        case 54:
            cout << "p";
            break;
        case 55:
            cout << "d";
            break;
        case 56:
            cout << "b";
            break;
        case 57:
            cout << "k";
            break;
        case 58:
            cout << "h";
            break;
        case 59:
            cout << "a";
            break;
        case 60:
            cout << "o";
            break;
        case 61:
            cout << "*";
            break;
        case 62:
            cout << "#";
            break;
        case 63:
            cout << "M";
            break;
        case 64:
            cout << "W";
            break;
        case 65:
            cout << "&";
            break;
        case 66:
            cout << "8";
            break;
        case 67:
            cout << "%";
            break;
        case 68:
            cout << "B";
            break;
        case 69:
            cout << "@";
            break;
        case 70:
            cout << "$";
            break;
    }
}
