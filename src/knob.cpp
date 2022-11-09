//
//  knob.cpp
//  pdExample
//
//  Created by Mac on 8/22/20.
//

#include <stdio.h>
#include "knob.h"
knob::knob(){
    
}
void knob::setup(){
    
    c1 = 10;
    rot= 50;
    radiusM=8;
    radiusP=200;
    //com=true;
    
  
    
    
}
void knob::update(){

 
    
    
    
}

void knob::draw(int xPosIn, int baseIn, float range){
   
   ofFill();
   xPos=xPosIn;
   base =baseIn;
   c1--;
   dist = ofDist(xPos, base, ofGetMouseX(), ofGetMouseY());
    
 
    //( = ! )//
    //   &  //
    // <--> //
    //  ?   //
   
    
    if(ofGetMousePressed()==true){
       
        
        rot = ofGetMouseX();
        if(dist <= radiusP){
            
            if(c1<0){
                
          
           rot = ofGetMouseX();
            
            mP = ofMap(rot ,xPos-radiusP, xPos+radiusP, 0, 360);
                
         
            value = (ofMap(mP, 0, 360, 0, range));
            
            
            cout << "printing"<<endl;
            cout << value <<endl;
                c1=10;
           
            }}

    }
    
   // ofRectMode(OF_RECTMODE_CENTER);
    ofPushMatrix();
    ofSetRectMode(OF_RECTMODE_CORNER);
    ofSetColor(254,100,97);
    ofDrawCircle(xPos, base, radiusP);
    ofTranslate(xPos, base);
    ofRotateDeg(mP);
    cout << mP <<endl;
    ofSetColor(243,120,184);
    ofDrawCircle(0, 0, radiusP-108);
    ofSetColor(41,240,114);
    ofDrawRectangle(-21, 0, 42,200);
    ofPopMatrix();
    
    ofDrawBitmapString(value, xPos-10, base-radiusP-8);
      
}

