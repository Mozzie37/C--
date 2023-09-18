#include <iostream>

using namespace std;
//[Fast-Forward]
//What is the original video time? 2.30
//What is the playback speed factor? 2
//The new video time would be 75 second(s).
//That saves you 75 second(s) from the original video speed.
int main(){
    float videoLength, playbackSpeed, playbackSeconds, playbackMinute;
    int originalPlayback, newPlayback;
    cout << "What is the original video time? ";
    cin >> videoLength;
    cout << "What is the playback speed factor? ";
    cin >> playbackSpeed;
    playbackSeconds = (videoLength - (int) videoLength) * 100;
    playbackMinute = (int) videoLength * 60;
    originalPlayback = (int) (playbackMinute + playbackSeconds);
    newPlayback = (int) (originalPlayback / playbackSpeed);

    cout << "The new video time would be " << newPlayback << " second(s)." << endl;
    cout << "That saves you " << originalPlayback - newPlayback << " second(s) from the original video speed." << endl;
}