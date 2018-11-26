#include "ofApp.h"
float circleSize = 0;
float circleColor = 0;
//--------------------------------------------------------------
void ofApp::setup(){
	
}

void ofApp::exit() {
	
}

//--------------------------------------------------------------
void ofApp::update(){
	
	circleSize += 0.5;
	circleColor += 0.008;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(ofColor::black);
	
	
	for (int i = 0; i < 1200; i++) {
		ofSetColor(	sin(i * 0.005 + circleColor) * 60 + 100, 
					sin(i * 0.006 + circleColor) * 60 + 100,
					sin(i * 0.007 + circleColor) * 60 + 100);
		ofDrawCircle(ofGetWidth()/2 + 100.0 * sin(2 * (circleColor + i/600.0)), i , 25 + 25* sin(5.0 * (circleColor + i/600.0) * cos(circleColor/5)));
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
