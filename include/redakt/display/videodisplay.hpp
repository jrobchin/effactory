#include <string>
#include <vector>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

/**
 * @brief Class for displaying videos.
 * 
 */
class VideoPlayer {
    public:
        /**
         * @brief Takes a vector of cv::Mat and displays the frames.
         * 
         * @param frames 
         * @param windowName 
         * @param fps 
         */
        static void playVideo(vector<Mat> frames, string windowName = "video", float fps = 24);
        /**
         * @brief Takes a cv::VideoCapture and displays the frames.
         * 
         * @param cap 
         * @param windowName 
         * @param fps 
         */
        static  void playVideo(VideoCapture cap, string windowName = "video", float fps = 24);
        /**
         * @brief Takes a filename and displays the frames.
         * 
         * @param filename 
         * @param windowName 
         * @param fps 
         */
        static void playVideo(string filename, string windowName = "video", float fps = 24);
};