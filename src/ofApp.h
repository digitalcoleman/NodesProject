#pragma once

#include "ofMain.h"
#include "car.h"
#include "cluster.h"
#include "ofxBlur.h"


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
    
    int wide;
    int high;
    
    ofLight light1, light2;
    
    ofFbo myFbo;
    ofxBlur blur;
    ofCamera cam;
    ofVec3f targetPos, startPos;
    bool camMove;
    
    int pings[50];
    float lastTime;
    
    private:
    
        vector<Cluster> clusters;
        vector<ofVec3f> nodes;
        //vector<ofVec2f> targets;
        void spawn();
    void respawn(ofVec3f start, ofVec3f target, BYTE tempTarg, BYTE tempStart);
    void dotUpdates();
    
    
		
};
