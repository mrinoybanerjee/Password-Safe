#pragma once

#include "ofMain.h"
#include "ofxDatGui.h"
#include "encryptDecrypt.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
        void onButtonEvent(ofxDatGuiButtonEvent e);
    
    passwordChecker checker = passwordChecker();
    
    int scene = 0;

    //-------------------------SCENE 0 OBJECTS----------------------------------
    ofxDatGuiLabel* scene0Label = new ofxDatGuiLabel("P  a  s  s  w  o  r  d  -  S   a   f   e ");
    
    ofxDatGuiTextInput* scene0Input = new ofxDatGuiTextInput("Set Password", "");
    
    ofxDatGuiButton* scene0Button = new ofxDatGuiButton("Done!");
    
    
    
    //-------------------------SCENE 1 OBJECTS----------------------------------
    ofxDatGuiTextInput* scene1Input = new ofxDatGuiTextInput("Check Password", "");
    
    ofxDatGuiButton* scene1Button = new ofxDatGuiButton("Check!");
		
};
