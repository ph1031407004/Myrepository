#include<opencv2/opencv.hpp>
#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;
using namespace cv;
int main (){
    std::string pattern_jpg="/home/huag/learning_slam/data/rgbd_dataset_freiburg1_desk/rgb/*.png";
    cout<<pattern_jpg<<endl;
    std::vector<cv::String> image_files;
    cv::glob(pattern_jpg,image_files);
    if(image_files.size()==0){
        std::cout<<"No images"<<endl;
        return 0;
    }
    for(int i =0;i<image_files.size();i++){
        std::string newName="/home/huag/learning_slam/data/rgbd_dataset_freiburg1_desk/rgb_rn/";
        newName=newName+to_string(i)+".png";
        Mat img=cv::imread(image_files[i]);

        cv::imwrite(newName,img);
        waitKey(300);
    }
    return 0;
}