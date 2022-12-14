//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKCPAlbumComponent.h"

#import "TuSDKPFCameraDelegate-Protocol.h"
#import "TuSDKPFEditTurnAndCutDelegate-Protocol.h"

@class NSString, TuSDKCPAvatarOptions, TuSDKICAlertView;

@interface TuSDKCPAvatarComponent : TuSDKCPAlbumComponent <TuSDKPFCameraDelegate, TuSDKPFEditTurnAndCutDelegate>
{
    TuSDKCPAvatarOptions *_options;
    TuSDKICAlertView *_actionSheet;
}

@property(retain, nonatomic) TuSDKICAlertView *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) TuSDKCPAvatarOptions *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onTuSDKPFEditTurnAndCut:(id)arg1 result:(id)arg2;
- (void)onTuSDKPFCamera:(id)arg1 captureResult:(id)arg2;
- (void)onTuSDKPFPhotos:(id)arg1 selectedAsset:(id)arg2;
- (void)showCamera;
- (void)handleShowCamera;
- (void)showComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

