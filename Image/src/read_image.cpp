
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>


namespace cv_wrapper
{
    cv::Mat read_image(std::string& path)
    {
        cv::Mat image;
        image = cv::imread(path, cv::IMREAD_COLOR);
        return image;
    }
}
