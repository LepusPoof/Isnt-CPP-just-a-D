#include <iostream>
#include <Magick++.h>

using namespace Magick;
using namespace std;



class dimensions
{

public:
    int width;
    int height;

protected:
    void dims(){

    };

};
/*
class image: public dimensions {

};
*/

int main(int argc,char **argv)
{
    InitializeMagick(*argv);


    dimensions picture;
    picture.width = 640;
    picture.height = 480;

    // Construct the image object. Seperating image construction from the
    // the read operation ensures that a failure to read the image file
    // doesn't render the image object useless.
  Image image (Geometry(picture.width, picture.height), "white"); // pic dimensions + background color

  Image localFile ("ascii-pineapple.jpg"); // loads picture


  try
  {
    // Read a file into image object
    image.read( "logo:" );

    // Crop the image to specified size (width, height, xOffset, yOffset)
   //image.crop( Geometry(100,100, 100, 100) );

    // Write the image to a file
   // image.write( "picture.png" );
  }
  catch( Exception &error_ )
    {
      cout << "Caught exception: " << error_.what() << endl;
      return 1;
    }




    return 0;
}
