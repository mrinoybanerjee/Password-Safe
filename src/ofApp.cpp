#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

    if (checker.loadPassword()) {
        scene = 1;
    }
    
    scene0Button->onButtonEvent(this, &ofApp::onButtonEvent);
    scene1Button->onButtonEvent(this, &ofApp::onButtonEvent);
    
    scene0Input->setPosition(100, 100);
    scene0Button->setPosition(100, 130);
    
    scene1Input->setPosition(100, 100);
    scene1Button->setPosition(100, 130);

}


//--------------------------------------------------------------
void ofApp::update() {
    if (scene == 0) {
        scene0Button->update();
        scene0Label->update();
        scene0Input->update();
    } else if (scene == 1) {
        scene0Label->update();
        scene1Input->update();
        scene1Button->update();
    }
}

//--------------------------------------------------------------
void ofApp::draw() {
    if (scene == 0) {
    scene0Button->draw();
    scene0Label->draw();
    scene0Input->draw();
    } else if (scene == 1) {
        scene0Label->draw();
        scene1Input->draw();
        scene1Button->draw();
    }
}

//------------------------------------------------------------
/** This is a defined method in ofxdat gui, which handles each event taking place in each scene. It keeps track of the process and executes commands whenever necessary.
 */
void ofApp::onButtonEvent(ofxDatGuiButtonEvent e) {
    if (e.target->getLabel() == "Done!") {
        checker.setPassword(scene0Input->getText());
        scene = 1;
    } else if (e.target->getLabel() == "Check!") {
        //when this event takes place, it checks by comparing the passwords. It they match, then goes back to previous scene.
        bool worked = checker.comparePasswords(scene1Input->getText());
        if (worked) {
            scene = 0;
        }
    }
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
