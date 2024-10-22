#include "Calculator/include/add.hpp"
#include "Image/include/read_image.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>


int main()
{
    int res = calculator::add(1, 2);
    std::cout << "Result is " << res << std::endl;

    std::cout << "Next.." << std::endl;

    std::string path = "../../lena.png";
    cv::Mat image;
    image = cv_wrapper::read_image(path);
    if (!image.empty())
    {
        std::cout << "Image shape (h, w): (" << image.size[0] << ", " << image.size[1] << ")" << std::endl;
    }
    else
    {
        std::cout << "Image is empty" << std::endl;
    }
    return 0;
}