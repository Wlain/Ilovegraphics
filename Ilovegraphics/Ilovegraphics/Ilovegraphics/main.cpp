//
//  main.cpp
//  Ilovegraphics
//
//  Created by william on 2020/3/22.
//  Copyright © 2020 william. All rights reserved.
//
#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include <opencv2/highgui/highgui.hpp> // OpenCV highgui模块
#include <opencv2/imgproc/imgproc.hpp> // OpenCV图像处理模块
#include<iostream>
using namespace cv;

int main(int argc, const char * argv[])
{
    //载入原图
    Mat srcImg = imread("/Users/william/Desktop/test.jpeg");
    imshow("【原始图】", srcImg);//显示
    waitKey(0);//等待
    return 0;
}
