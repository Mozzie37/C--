float invert(int input){
    float output;
    output = 255 - input;
    return output;
}


float normalize(float input){
    float output;
    output = input / 255;
    return output;
}