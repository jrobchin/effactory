#include <iostream>

#include <redakt/display/videodisplay.hpp>

void VideoPlayer::playVideo(vector<Mat> frames, string windowName, float fps) {
    namedWindow(windowName);

    for(Mat frame : frames)
    {
        if (frame.empty())
            break;

        imshow(windowName, frame);

        waitKey(fps);
    }
}

void VideoPlayer::playVideo(VideoCapture cap, string windowName, float fps) {
    namedWindow(windowName);

    while (1)
    {
        Mat frame;
        cap >> frame;

        if (frame.empty())
            break;

        imshow(windowName, frame);

        waitKey(fps);
    }
}

void VideoPlayer::playVideo(string filename, string windowName, float fps) {
    namedWindow(windowName);

    VideoCapture cap(filename);

    while (1)
    {
        Mat frame;
        cap >> frame;

        if (frame.empty())
            break;

        imshow(windowName, frame);

        waitKey(fps);
    }

    cap.release();
}