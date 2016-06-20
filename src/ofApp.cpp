#include "ofMain.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void draw();
    
    ofImage barcode;
    ofTrueTypeFont ag;
};


void ofApp::setup(){
    
    ofBackground(0);
    
    barcode.load("barcode.png");
    
    ag.load("Ag.ttf", 24.2);
    
}


void ofApp::draw(){
    
    ofSetColor(255);
    
    float stringWidth = ag.stringWidth("I shop therefore I am");
    float stringHeight = ag.stringHeight("I shop therefore I am");
    
    
    ag.drawString("I shop therefore I am", ofGetWidth()/2 - stringWidth/2, ofGetHeight()/2 + stringHeight/2 + 82);
    
    barcode.draw(ofGetWidth()/2 - stringWidth/2 - 15.4, ofGetHeight()/2 + stringHeight/2 - 109, 328, 145);
    
}


int main( ){
    
    ofSetupOpenGL(1126,768,OF_FULLSCREEN);
    ofRunApp(new ofApp());
}