#include <opencv/highgui.h>

int main()
{
    IplImage *  img = cvLoadImage("1.jpg");
    cvShowImage("week07",img);
    cvWaitKey(0);
}
