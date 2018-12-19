#include <iostream>
#include <string>
#include <opencv2/opencv.hpp>
#include "redakt/display/videoplayer.hpp"

using namespace std;

int main() {
    VideoPlayer::playVideo("./data/dancing_test_1.mp4");
    return 0;
}