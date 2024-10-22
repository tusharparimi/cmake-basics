#ifndef READ_IMAGE_H
#define READ_IMAGE_H

#include <opencv2/opencv.hpp>
#include <string>

namespace cv_wrapper
{
    cv::Mat read_image(std::string& path);
}

#endif