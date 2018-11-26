#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	//ofSetupOpenGL(540,960,OF_WINDOW);			// <-------- setup the GL context
	ofGLFWWindowSettings settings;
	settings.setSize(540, 960);
	settings.decorated = false;
	settings.windowMode = OF_WINDOW;
	
	ofCreateWindow(settings);
	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
