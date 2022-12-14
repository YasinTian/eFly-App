//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPResultViewController.h"

#import "TuSDKStillCameraDelegate-Protocol.h"

@class NSArray, NSString, TuSDKTSVolumeButton, UIView;
@protocol TuSDKStillCameraInterface;

@interface TuSDKPFCameraViewControllerBase : TuSDKCPResultViewController <TuSDKStillCameraDelegate>
{
    _Bool _isShowAllSetRatio;
    id <TuSDKStillCameraInterface> _camera;
    TuSDKTSVolumeButton *_volumeButton;
    long long _currentRatioType;
    long long _screenRatioType;
    long long _ratioType;
    NSArray *_ratioTypeList;
    double _cameraViewRatio;
    UIView *_cameraView;
    long long _avPostion;
    NSString *_sessionPreset;
}

@property(copy, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(nonatomic) long long avPostion; // @synthesize avPostion=_avPostion;
@property(readonly, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) double cameraViewRatio; // @synthesize cameraViewRatio=_cameraViewRatio;
@property(retain, nonatomic) NSArray *ratioTypeList; // @synthesize ratioTypeList=_ratioTypeList;
@property(nonatomic) long long ratioType; // @synthesize ratioType=_ratioType;
- (void).cxx_destruct;
- (void)onStillCamera:(id)arg1 takedResult:(id)arg2 error:(id)arg3;
- (void)onStillCamera:(id)arg1 stateChanged:(long long)arg2;
- (void)setEnableCaptureWithVolumeKeys:(_Bool)arg1;
- (_Bool)getGuideLineViewState;
- (void)setGuideLineViewState:(_Bool)arg1;
- (void)onCameraRatioChange:(id)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setCurrentRatioType:(long long)arg1;
- (double)getCurrentRatio;
- (id)getRatioTypes;
- (void)onCapturePhotoWithVolume;
- (void)destoryCamera;
- (void)startCamera;
- (id)volumeButton;
@property(readonly, nonatomic) id <TuSDKStillCameraInterface> camera;
- (void)controllerWillDestory;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

