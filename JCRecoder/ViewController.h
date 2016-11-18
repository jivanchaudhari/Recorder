//
//  ViewController.h
//  JCRecoder
//
//  Created by Student P_10 on 11/11/16.
//  Copyright © 2016 Jivan Chaudhari. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>


@interface ViewController : UIViewController
{
    NSMutableDictionary *recordSetting;
    AVAudioRecorder *audioRecorder;
    AVAudioPlayer *audioPlayer;
    
}
@property (weak, nonatomic) IBOutlet UIButton *buttonPlay;

- (IBAction)actionRecord:(id)sender;

- (IBAction)actionStop:(id)sender;

- (IBAction)actionPlayPause:(id)sender;


@end

