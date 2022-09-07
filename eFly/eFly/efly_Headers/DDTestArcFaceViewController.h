//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AFCameraControllerDelegate-Protocol.h"
#import "AFVideoProcessorDelegate-Protocol.h"
#import "DDLiveViewDelegate-Protocol.h"

@class AFCameraController, AFVideoProcessor, GLKitView, NSMutableArray, NSString;

@interface DDTestArcFaceViewController : UIViewController <AFCameraControllerDelegate, AFVideoProcessorDelegate, DDLiveViewDelegate>
{
    struct __tag_ASVL_OFFSCREEN *_offscreenIn;
    struct CGRect _liveViewFrame;
    AFCameraController *_cameraController;
    AFVideoProcessor *_videoProcessor;
    NSMutableArray *_arrayAllFaceRectView;
    GLKitView *_glView;
}

@property(retain, nonatomic) GLKitView *glView; // @synthesize glView=_glView;
@property(retain, nonatomic) NSMutableArray *arrayAllFaceRectView; // @synthesize arrayAllFaceRectView=_arrayAllFaceRectView;
@property(retain, nonatomic) AFVideoProcessor *videoProcessor; // @synthesize videoProcessor=_videoProcessor;
@property(retain, nonatomic) AFCameraController *cameraController; // @synthesize cameraController=_cameraController;
- (void).cxx_destruct;
- (struct CGRect)dataFaceRect2ViewFaceRect:(struct __tag_rect)arg1;
- (struct __tag_ASVL_OFFSCREEN *)offscreenFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)liveView:(id)arg1 frameData:(id)arg2;
- (void)processRecognized:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

