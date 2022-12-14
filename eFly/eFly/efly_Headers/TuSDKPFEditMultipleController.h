//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TuSDKPFEditMultipleControllerBase.h"

@class TuSDKPFEditMultipleView;
@protocol TuSDKPFEditMultipleControllerDelegate;

@interface TuSDKPFEditMultipleController : TuSDKPFEditMultipleControllerBase
{
    TuSDKPFEditMultipleView *_defaultStyleView;
    id <TuSDKPFEditMultipleControllerDelegate> _delegate;
    Class _viewClazz;
}

@property(retain, nonatomic) Class viewClazz; // @synthesize viewClazz=_viewClazz;
@property(nonatomic) __weak id <TuSDKPFEditMultipleControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TuSDKPFEditMultipleView *defaultStyleView; // @synthesize defaultStyleView=_defaultStyleView;
- (void).cxx_destruct;
- (void)onRefreshAutoAdjustButtonEnable:(_Bool)arg1;
- (void)setStepButton:(id)arg1 enable:(_Bool)arg2;
- (void)onRefreshStepStatesWithHistories:(unsigned long long)arg1 brushies:(unsigned long long)arg2;
- (void)onEditWithAction:(id)arg1;
- (void)setDisplayImage:(id)arg1;
- (void)loadedInputImage:(id)arg1;
- (void)configDefaultStyleView:(id)arg1;
- (void)buildDefaultStyleView;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)prefersStatusBarHidden;
- (_Bool)asyncNotifyProcessingWithResult:(id)arg1;
- (void)notifyProcessingWithResult:(id)arg1;

@end

