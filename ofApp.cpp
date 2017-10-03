#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(255);
	ofSetWindowTitle("Insta");

	ofNoFill();
	ofSetLineWidth(2);
	ofSetColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
	this->cam.begin();

	float radius = 100;

	for (int i = 0; i < 12; i++) {
		ofRotateX(ofGetFrameNum() * 0.5);
		ofBeginShape();
		for (int deg = 0; deg < 360; deg += 1) {
			float x = radius * cos(deg * DEG_TO_RAD);
			float y = radius * sin(deg * DEG_TO_RAD);

			ofVertex(ofVec3f(x, y, 0));
		}
		ofEndShape(true);
	}

	ofLine(ofVec3f(radius, 0, 0), ofVec3f(-radius, 0, 0));

	this->cam.end();
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
