//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TuSDKPFCameraFlashDelegate-Protocol.h"

@class NSString, TuSDKPFCameraBottomView, TuSDKPFCameraConfigView, TuSDKPFCameraFilterGroupView, TuSDKPFCameraFlashView, UIImageView;
@protocol TuSDKPFCameraViewDelegate;

@interface TuSDKPFCameraView : UIView <TuSDKPFCameraFlashDelegate>
{
    UIImageView *_displayView;
    TuSDKPFCameraConfigView *_configBar;
    TuSDKPFCameraBottomView *_bottomBar;
    TuSDKPFCameraFlashView *_flashView;
    TuSDKPFCameraFilterGroupView *_filterView;
    Class _configBarViewClazz;
    Class _bottomBarViewClazz;
    Class _flashViewClazz;
    Class _filterViewClazz;
    id <TuSDKPFCameraViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TuSDKPFCameraViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TuSDKPFCameraFilterGroupView *filterView; // @synthesize filterView=_filterView;
@property(readonly, nonatomic) TuSDKPFCameraFlashView *flashView; // @synthesize flashView=_flashView;
@property(readonly, nonatomic) TuSDKPFCameraBottomView *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(readonly, nonatomic) TuSDKPFCameraConfigView *configBar; // @synthesize configBar=_configBar;
@property(readonly, nonatomic) UIView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) Class filterViewClazz; // @synthesize filterViewClazz=_filterViewClazz;
@property(retain, nonatomic) Class flashViewClazz; // @synthesize flashViewClazz=_flashViewClazz;
@property(retain, nonatomic) Class bottomBarViewClazz; // @synthesize bottomBarViewClazz=_bottomBarViewClazz;
@property(retain, nonatomic) Class configBarViewClazz; // @synthesize configBarViewClazz=_configBarViewClazz;
- (void).cxx_destruct;
- (void)onTuSDKPFCameraFlashView:(id)arg1 selectedMode:(long long)arg2;
- (void)orientationChanged:(long long)arg1;
- (void)onFlashViewShowed;
- (void)showBottomBar;
- (void)buildAlbumButton;
- (void)onFilterViewToggle;
- (void)buildFilterView:(_Bool)arg1;
- (void)needUpdateLayout;
- (void)lsqInitView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
