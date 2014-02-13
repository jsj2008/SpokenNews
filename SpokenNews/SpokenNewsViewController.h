//
//  SpokenNewsViewController.h
//  SpokenNews
//
//  Created by Yu Ho Kwok on 13/2/14.
//  Copyright (c) 2014 invivo interactive. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreImage/CoreImage.h>
#import "ContentManager.h"
@interface SpokenNewsViewController : UIViewController
{
    IBOutlet UIView *newsView;
    IBOutlet UIView *audioControl;
    
    IBOutlet UIImageView *camView;
    IBOutlet UIImageView *camBlurTopView;
    
    IBOutlet UIImageView *newsBubbleBGView;
    
    IBOutlet UIImageView *blurBGView;
    
    IBOutlet UIView *controlUI;
    IBOutlet UIView *camLocLabel;
    IBOutlet UIView *theScorllView;
    
    CIContext *_ciContext;
    EAGLContext *_eaglContext;
    
    UIImage *bubbleImg;
    UIImage *scretchedBubbleImage;
    
    CGRect bubbleSize;
    CGRect bubbleLargeSize;
    
    IBOutlet UIButton* driveBtn;
    BOOL isDriving;
}
@end